#include "pch.h"
#include "custom_feature.h"

#include "ansi.h"
#include "config.h"
#include "encoding.h"
#include "hooks.h"
#include "injector.h"
#include "utils.h"

#pragma region Hooks

static void WINAPI ExitProcessHook(UINT uExitCode)
{
	// Get the feature implementation
	const auto& feature = uif::injector::instance().feature<uif::features::custom_feature>();

	if (feature.overwrite_exit_code)
		uExitCode = feature.exit_code;

	// Call the real ExitProcess function
	ExitProcess(uExitCode);
}

#pragma endregion

void uif::features::custom_feature::initialize()
{
	// By default, this function is only executed if the
	// key "/custom_feature/enable" is set to true in the
	// config file. You can change this behavior by over-
	// writing the pre_init function in feature_base.

	// Use this function to read the configuration, set up
	// your feature and install necessary hooks. You can
	// access the "/custom_feature" config object with the
	// config() function.

	// This example implementation reads an integer value
	// from the config key "/custom_feature/exit_code" and
	// uses it when the ExitProcess function is called,
	// overwriting the actual exit code in the process.

	if(config().contains("exit_code"))
	{
		overwrite_exit_code = true;
		exit_code = config()["exit_code"].get<int>();
	}

	hooks::hook_import(this, "ExitProcess", ExitProcessHook);
}

void uif::features::custom_feature::finalize()
{
	// Uninstall all of your hooks in here

	hooks::unhook_import(this, "ExitProcess", ExitProcessHook);
}
