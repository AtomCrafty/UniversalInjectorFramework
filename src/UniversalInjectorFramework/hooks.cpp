#include "pch.h"

#include "ansi.h"
#include "utils.h"
#include "features/_feature_base.h"

using namespace uif::ansi;

namespace uif::hooks
{
	using namespace utils;

	struct hooked_import_info
	{
		const features::feature_base* feature;
		void** originalFunctionPointer;
	};

	struct hooked_function_info
	{
		const features::feature_base* feature;
	};

	static std::unordered_map<void*, hooked_import_info> hooked_imports{};
	static std::unordered_map<void*, hooked_function_info> hooked_functions{};

	struct hook_import_info
	{
		const features::feature_base* feature;
		const char* importName;
		void* hookFunction;
		bool success;
		bool found;

		// TODO
		std::vector<const char*>* imports;
		bool unhook;
		bool multiple;
	};

	BOOL CALLBACK hook_import_enum_proc(PVOID pContext, DWORD nOrdinal, LPCSTR pszFunc, PVOID* ppvFunc)
	{
		if(ppvFunc == nullptr || pszFunc == nullptr)
			return true;

		auto* info = static_cast<hook_import_info*>(pContext);

		if(!strcmp(pszFunc, info->importName))
		{
			info->found = true;
			auto [iterator, notHooked] = hooked_imports.try_emplace(ppvFunc, hooked_import_info{ info->feature, ppvFunc });
			if(!notHooked)
			{
				std::cout << *info->feature << dark_yellow(" Warning:") << " Unable to hook import " << yellow(pszFunc) << " because it has already been hooked by feature " << iterator->second.feature->name() << '\n';
				return false;
			}

			std::cout << *info->feature << " Hooking import " << yellow(pszFunc) << " at " << blue(iterator->second.originalFunctionPointer) << green(" --> ") << blue(info->hookFunction) << '\n';

			info->success = true;
			patch_protected(ppvFunc, info->hookFunction);
			return false;
		}

		return true;
	}

	BOOL CALLBACK unhook_import_enum_proc(PVOID pContext, DWORD nOrdinal, LPCSTR pszFunc, PVOID* ppvFunc)
	{
		if(ppvFunc == nullptr || pszFunc == nullptr)
			return true;

		auto* info = static_cast<hook_import_info*>(pContext);

		if(!strcmp(pszFunc, info->importName))
		{
			info->found = true;
			const auto iterator = hooked_imports.find(ppvFunc);
			if(iterator == hooked_imports.end() || iterator->second.feature != info->feature)
			{
				std::cout << *info->feature << dark_yellow(" Warning:") << " Unable to unhook import " << yellow(pszFunc) << " because it has not been hooked by this feature\n";
				return false;
			}

			std::cout << *info->feature << " Unhooking import " << yellow(pszFunc) << " at " << blue(iterator->second.originalFunctionPointer) << red(" -/-> ") << blue(info->hookFunction) << '\n';
			info->success = true;
			patch_protected(ppvFunc, iterator->second.originalFunctionPointer);
			return false;
		}

		return true;
	}

	bool hook_import(const features::feature_base* feature, const char* importName, void* hookFunction)
	{
		hook_import_info info{ feature, importName, hookFunction, false };
		auto* module = injector::instance().game_module;
		DetourEnumerateImportsEx(module, &info, nullptr, hook_import_enum_proc);
		if(!info.found)
			std::cout << *feature << black(" Unable to hook import ") << black(importName) << black(" because it does not exist\n");
		return info.success;
	}

	bool unhook_import(const features::feature_base* feature, const char* importName, void* hookFunction)
	{
		hook_import_info info{ feature, importName, hookFunction, false };
		auto* module = injector::instance().game_module;
		DetourEnumerateImportsEx(module, &info, nullptr, unhook_import_enum_proc);
		if(!info.found)
			std::cout << *feature << black(" Unable to unhook import ") << black(importName) << black(" because it does not exist\n");
		return info.success;
	}

	bool hook_imports(const features::feature_base* feature, const std::vector<std::pair<std::string, void*>>& hooks)
	{
		// TODO
		return false;
	}

	bool unhook_imports(const features::feature_base* feature, const std::vector<std::pair<std::string, void*>>& hooks)
	{
		// TODO
		return false;
	}

	bool hook_function(const features::feature_base* feature, void* targetFunction, void* hookFunction, const std::string& functionName = "")
	{
		auto [iterator, emplaced] = hooked_functions.try_emplace(targetFunction, hooked_function_info{ feature });
		if(!emplaced)
		{
			if(functionName.empty())
				std::cout << *feature << dark_yellow(" Warning:") << " Unable to hook function at " << blue(targetFunction) << " because it has already been hooked by feature " << yellow(iterator->second.feature->name()) << '\n';
			else
				std::cout << *feature << dark_yellow(" Warning:") << " Unable to hook " << yellow(functionName) << " at " << blue(targetFunction) << " because it has already been hooked by feature " << yellow(iterator->second.feature->name()) << '\n';
			return false;
		}

		if(functionName.empty())
			std::cout << *feature << " Hooking function at " << blue(targetFunction) << green(" --> ") << blue(hookFunction) << '\n';
		else
			std::cout << *feature << " Hooking " << yellow(functionName) << " at " << blue(targetFunction) << green(" --> ") << blue(hookFunction) << '\n';

		DetourTransactionBegin();
		DetourAttach(&targetFunction, hookFunction);
		DetourTransactionCommit();
		return true;
	}

	bool unhook_function(const features::feature_base* feature, void* targetFunction, void* hookFunction, const std::string& functionName = "")
	{
		const auto iterator = hooked_functions.find(targetFunction);

		if(iterator == hooked_functions.end() || iterator->second.feature != feature)
		{
			if(functionName.empty())
				std::cout << *feature << dark_yellow(" Warning:") << " Unable to unhook function at " << blue(targetFunction) << " because it has not been hooked by this feature\n";
			else
				std::cout << *feature << dark_yellow(" Warning:") << " Unable to unhook " << yellow(functionName) << " at " << blue(targetFunction) << " because it has not been hooked by this feature \n";
			return false;
		}

		if(functionName.empty())
			std::cout << *feature << " Unhooking function at " << blue(targetFunction) << red(" -/-> ") << blue(hookFunction) << '\n';
		else
			std::cout << *feature << " Unhooking " << yellow(functionName) << " at " << blue(targetFunction) << red(" -/-> ") << blue(hookFunction) << '\n';

		DetourTransactionBegin();
		DetourDetach(&targetFunction, hookFunction);
		DetourTransactionCommit();
		return true;
	}
}
