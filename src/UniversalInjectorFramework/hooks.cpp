#include "pch.h"
#include "hooks.h"

#include "ansi.h"
#include "utils.h"
#include "injector.h"
#include "features/_feature_base.h"

using namespace uif::ansi;
using namespace uif::utils;

namespace uif::hooks
{
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
	static std::unordered_map<void*, void*> trampoline_mapping{};

	struct hook_import_info
	{
		const features::feature_base* feature;
		const char* importName;
		void* hookFunction;
		HMODULE targetModule;
		bool success;
		bool found;
		bool foundAny;
	};

	BOOL CALLBACK hook_import_enum_proc(PVOID pContext, DWORD nOrdinal, LPCSTR pszFunc, PVOID* ppvFunc)
	{
		if(ppvFunc == nullptr || pszFunc == nullptr)
			return true;

		auto* info = static_cast<hook_import_info*>(pContext);

		info->foundAny = true;

		if(!strcmp(pszFunc, info->importName))
		{
			info->found = true;
			auto [iterator, success] = hooked_imports.try_emplace(ppvFunc, hooked_import_info{ info->feature, ppvFunc });
			if(!success)
			{
				std::cout << *info->feature << dark_yellow(" Warning:") << " Unable to hook import " << yellow(pszFunc) << " because it has already been hooked by feature " << iterator->second.feature->name() << '\n';
				return false;
			}

			std::cout << *info->feature
				<< " Hooking import " << yellow(pszFunc)
				<< " in " << yellow(get_module_name(info->targetModule))
				<< " at " << blue(iterator->second.originalFunctionPointer)
				<< green(" --> ") << blue(info->hookFunction) << '\n';

			info->success = true;
			patch_address(ppvFunc, info->hookFunction);
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

			std::cout << *info->feature
				<< " Unhooking import " << yellow(pszFunc)
				<< " in " << yellow(get_module_name(info->targetModule))
				<< " at " << blue(iterator->second.originalFunctionPointer)
				<< red(" -/-> ") << blue(info->hookFunction) << '\n';

			info->success = true;
			patch_address(ppvFunc, iterator->second.originalFunctionPointer);
			return false;
		}

		return true;
	}

	bool hook_import(const features::feature_base* feature, const char* importName, void* hookFunction)
	{
		hook_import_info info{ feature, importName, hookFunction, injector::instance().game_module, false, false };

		DetourEnumerateImportsEx(injector::instance().game_module, &info, nullptr, hook_import_enum_proc);
		for(const auto module : injector::instance().additional_modules)
		{
			info.targetModule = module;
			DetourEnumerateImportsEx(module, &info, nullptr, hook_import_enum_proc);
		}

		if(!info.foundAny)
		{
			std::cout << *feature << red(" Unable to enumerate import address table\n");
			std::cout << *feature << red(" This likely means the module had some sort of tamper protection applied to it\n");
		}

		if(!info.found)
		{
			std::cout << *feature << black(" Unable to hook import ") << black(importName) << black(" because it does not exist\n");
		}

		return info.success;
	}

	bool unhook_import(const features::feature_base* feature, const char* importName, void* hookFunction)
	{
		hook_import_info info{ feature, importName, hookFunction, injector::instance().game_module, false, false };

		DetourEnumerateImportsEx(injector::instance().game_module, &info, nullptr, unhook_import_enum_proc);
		for(const auto module : injector::instance().additional_modules)
		{
			info.targetModule = module;
			DetourEnumerateImportsEx(module, &info, nullptr, unhook_import_enum_proc);
		}

		if(!info.found)
			std::cout << *feature << black(" Unable to unhook import ") << black(importName) << black(" because it does not exist\n");
		return info.success;
	}

	bool hook_function(const features::feature_base* feature, void*& targetFunction, void* hookFunction, const std::string& functionName)
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


		void* originalTargetFunction = targetFunction;
		DetourTransactionBegin();
		DetourAttach(&targetFunction, hookFunction);
		DetourTransactionCommit();
		trampoline_mapping.try_emplace(targetFunction, originalTargetFunction);

		return true;
	}

	bool unhook_function(const features::feature_base* feature, void*& targetFunction, void* hookFunction, const std::string& functionName)
	{
		const auto trampolineIterator = trampoline_mapping.find(targetFunction);
		bool failed = false;

		if(trampolineIterator == trampoline_mapping.end())
		{
			failed = true;
			if (functionName.empty())
				std::cout << *feature << dark_yellow(" Warning:") << " Unable to unhook function at " << blue(targetFunction) << " because no trampoline exists at this location\n";
			else
				std::cout << *feature << dark_yellow(" Warning:") << " Unable to unhook " << yellow(functionName) << " at " << blue(targetFunction) << " because no trampoline exists at this location\n";
			return false;
		}
		
		const auto originalTargetFunction = trampolineIterator->second;
		const auto functionIterator = hooked_functions.find(originalTargetFunction);

		if(functionIterator == hooked_functions.end() || functionIterator->second.feature != feature)
		{
			if(functionName.empty())
				std::cout << *feature << dark_yellow(" Warning:") << " Unable to unhook function at " << blue(originalTargetFunction) << " because it has not been hooked by this feature\n";
			else
				std::cout << *feature << dark_yellow(" Warning:") << " Unable to unhook " << yellow(functionName) << " at " << blue(originalTargetFunction) << " because it has not been hooked by this feature\n";
			return false;
		}

		if(functionName.empty())
			std::cout << *feature << " Unhooking function at " << blue(originalTargetFunction) << red(" -/-> ") << blue(hookFunction) << '\n';
		else
			std::cout << *feature << " Unhooking " << yellow(functionName) << " at " << blue(originalTargetFunction) << red(" -/-> ") << blue(hookFunction) << '\n';

		DetourTransactionBegin();
		DetourDetach(&targetFunction, hookFunction);
		DetourTransactionCommit();
		return true;
	}
}
