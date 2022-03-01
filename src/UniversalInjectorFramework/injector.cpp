#include "pch.h"
#include "injector.h"

#include "ansi.h"
#include "libraries.h"
#include "utils.h"

#include "features/allocate_console.h"
#include "features/text_processor.h"
#include "features/start_suspended.h"
#include "features/character_substitution.h"
#include "features/custom_feature.h"
#include "features/tunnel_decoder.h"
#include "features/file_monitor.h"
#include "features/font_manager.h"
#include "features/locale_emulator.h"
#include "features/memory_patcher.h"
#include "features/play_timer.h"
#include "features/window_manager.h"
#include "features/yuka_engine_fixes.h"

using namespace uif::ansi;

namespace uif
{
	injector& injector::instance()
	{
		static auto instance = new injector();
		return *instance;
	}

	injector::injector() : game_module(GetModuleHandle(nullptr))
	{
		if (config::try_load_json("uif_config.json", _config)) return;
		if (config::try_load_bson("uif_config.dat", _config)) return;

		utils::fail("Failed to find uif config file.");
	}

	nlohmann::json& injector::config()
	{
		return _config;
	}

	void injector::attach()
	{
		if(attached) return;
		attached = true;

		auto& injector_config = config()["injector"];

		enabled = injector_config.value("enable", true);
		if(!enabled) {
			utils::debug_log("injector::attach: disabled");
			libraries::load();
			return;
		}

		utils::debug_log("injector::attach: enabled");
		initialize_feature<features::allocate_console>();
		
		std::cout << white("[injector] ======================================================\n");
		std::cout << white("[injector]") << " Injecting into module " << yellow(utils::get_module_name(game_module)) << " at address " << blue(game_module) << '\n';

		if(injector_config.value("print_loaded_modules", false))
		{
			std::cout << white("[injector]") << " Loaded modules:\n";
			HMODULE hModule = nullptr;
			while((hModule = DetourEnumerateModules(hModule)))
			{
				std::cout << white("[injector] ") << blue(hModule) << ' ' << yellow(utils::get_module_name(hModule)) << '\n';
			}
		}

		if(injector_config.contains("load_modules"))
		{
			auto& loadModules = injector_config["load_modules"];

			if(loadModules.is_array()) {

				for(const auto& dllPathValue : loadModules)
				{
					if(!dllPathValue.is_string()) continue;

					std::string dllPath;
					dllPathValue.get_to(dllPath);
					
					auto handle = LoadLibraryA(dllPath.c_str());

					if(!handle) {
						std::cout << white("[injector]") << dark_red(" Error:") << " Unable to locate dll " << yellow(dllPath) << " (" << GetLastError() << " - " << utils::get_last_error_message() << ")\n";
						continue;
					}

					std::cout << white("[injector]") << " Loaded dll " << yellow(dllPath) << '\n';

					additional_modules.push_back(handle);
				}
			}
		}

		if(injector_config.contains("hook_modules"))
		{
			auto& additionalHookModules = injector_config["hook_modules"];

			if(additionalHookModules.is_array()) {

				for(const auto& moduleNameValue : additionalHookModules)
				{
					if(!moduleNameValue.is_string()) continue;

					std::string moduleName;
					moduleNameValue.get_to(moduleName);

					auto handle = GetModuleHandleA(moduleName.c_str());

					if(!handle) {
						std::cout << white("[injector]") << dark_red(" Error:") << " Unable to locate additional module " << yellow(moduleName) << " (" << GetLastError() << " - " << utils::get_last_error_message() << ")\n";
						continue;
					}

					additional_modules.push_back(handle);
				}
			}
		}

		if (injector_config.value("export_bson_config", false))
		{
			injector_config.erase("export_bson_config");
			std::vector<uint8_t> bytes = nlohmann::json::to_bson(config());

			for (uint8_t& byte : bytes)
			{
				byte ^= 0xff;
			}

			std::cout << white("[injector]") << " Exporting bson config\n";

			std::ofstream ofs;
			ofs.open("uif_config.dat", std::ios::binary);
			ofs.write(reinterpret_cast<const char*>(bytes.data()), bytes.size());
		}

		libraries::load();

		initialize_feature<features::start_suspended>();
		initialize_feature<features::text_processor>();
		initialize_feature<features::character_substitution>();
		initialize_feature<features::tunnel_decoder>();
		initialize_feature<features::file_monitor>();
		initialize_feature<features::font_manager>();
		initialize_feature<features::locale_emulator>();
		initialize_feature<features::window_manager>();
		initialize_feature<features::memory_patcher>();
		initialize_feature<features::play_timer>();
		initialize_feature<features::custom_feature>();
		initialize_feature<features::yuka_engine_fixes>();

		std::cout << white("[injector]") << green(" Initialization complete\n");
		std::cout << white("[injector] ======================================================\n");
	}

	void injector::detach()
	{
		if(!enabled) return;
		if(!attached) return;
		attached = false;

		std::cout << white("[injector] ======================================================\n");
		std::cout << white("[injector]") << " Detaching...\n";

		for(auto* feature : features)
		{
			feature->finalize();
			delete feature;
		}
		features.clear();

		libraries::unload();

		std::cout << white("[injector]") << cyan(" Shutting down. Goodbye :)\n");
		std::cout << white("[injector] ======================================================\n");
	}

	HMODULE injector::load_real_library(const std::string& dllName)
	{
		std::string dllPath;

		if(config().contains("/injector/real_library_location"_json_pointer))
		{
			const auto& value = config()["/injector/real_library_location"_json_pointer];
			if(value.is_string())
			{
				value.get_to(dllPath);
			}
		}

		if(dllPath.empty())
		{
			char sysDir[MAX_PATH];
			GetSystemDirectoryA(sysDir, MAX_PATH);
			dllPath = std::string(sysDir) + '\\' + dllName;
		}

		std::cout << white("[injector]") << " Loading original library from " << dllPath << "\n";

		const auto result = LoadLibraryA(dllPath.c_str());

		if(result == nullptr)
		{
			std::cout << white("[injector]") << red(" Error:") << " Failed to load original library\n";
			const std::string error = "Unable to locate original library.\nPlease check the configuration file.\n\nPath: " + dllPath;
			MessageBoxA(nullptr, error.c_str(), "Universal Injector", MB_ICONERROR);
			ExitProcess(1);
		}

		return result;
	}
}
