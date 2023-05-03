#include "pch.h"
#include "injector.h"

#include "ansi.h"
#include "libraries.h"
#include "utils.h"

#include "features/allocate_console.h"
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

using namespace uif::ansi;

namespace uif
{
	injector* injector::_instance;

	injector& injector::instance()
	{
		if(_instance == nullptr)
			_instance = new injector();
		return *_instance;
	}

	injector::injector() : game_module(GetModuleHandle(nullptr)), _config("uif_config.json") {}

	config& injector::config()
	{
		return _config;
	}

	void injector::attach()
	{
		if(attached) return;
		attached = true;

		enabled = config().value("/injector/enable"_json_pointer, true);
		if(!enabled) {
			utils::debug_log("injector::attach: disabled");
			libraries::load();
			return;
		}

		utils::debug_log("injector::attach: enabled");
		initialize_feature<features::allocate_console>();
		
		std::cout << white("[injector] ======================================================\n");
		std::cout << white("[injector]") << " Injecting into module " << yellow(utils::get_module_name(game_module)) << " at address " << blue(game_module) << '\n';

		if(config().value("/injector/print_loaded_modules"_json_pointer, false))
		{
			std::cout << white("[injector]") << " Loaded modules:\n";
			HMODULE hModule = nullptr;
			while((hModule = DetourEnumerateModules(hModule)))
			{
				std::cout << white("[injector] ") << blue(hModule) << ' ' << yellow(utils::get_module_name(hModule)) << '\n';
			}
		}

		if(config().contains("/injector/load_modules"_json_pointer))
		{
			auto& loadModules = config()["/injector/load_modules"_json_pointer];

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

		if(config().contains("/injector/hook_modules"_json_pointer))
		{
			auto& additionalHookModules = config()["/injector/hook_modules"_json_pointer];

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

		libraries::load();

		initialize_feature<features::start_suspended>();
		initialize_feature<features::character_substitution>();
		initialize_feature<features::tunnel_decoder>();
		initialize_feature<features::file_monitor>();
		initialize_feature<features::font_manager>();
		initialize_feature<features::locale_emulator>();
		initialize_feature<features::window_manager>();
		initialize_feature<features::memory_patcher>();
		initialize_feature<features::play_timer>();
		initialize_feature<features::custom_feature>();

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

		if(config().contains("/real_library_location"_json_pointer))
		{
			const auto& value = config()["/real_library_location"_json_pointer];
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
