#pragma once
#include "features/_feature_base.h"

#include <string>

namespace uif::hooks {
	bool hook_import(const features::feature_base* feature, const char* importName, void* hookFunction);
	bool unhook_import(const features::feature_base* feature, const char* importName, void* hookFunction);

	bool hook_function(const features::feature_base* feature, void* targetFunction, void* hookFunction, const std::string& functionName = "");
	bool unhook_function(const features::feature_base* feature, void* targetFunction, void* hookFunction, const std::string& functionName = "");

	template<typename T>
	bool hook_function(const features::feature_base* feature, void* targetFunction, T hookFunction, const std::string& functionName = "")
	{
		return hook_function(feature, targetFunction, *reinterpret_cast<void**>(&hookFunction), functionName);
	}


	template<typename T>
	bool unhook_function(const features::feature_base* feature, void* targetFunction, T hookFunction, const std::string& functionName = "")
	{
		return unhook_function(feature, targetFunction, *reinterpret_cast<void**>(&hookFunction), functionName);
	}
}