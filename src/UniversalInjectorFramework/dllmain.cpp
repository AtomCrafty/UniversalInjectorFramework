#include "pch.h"

#include "injector.h"
#include "utils.h"

extern "C" {
	void* EntryPoint;
	void EntryPointHook();
	bool IsHooked = false;
	void Detach() { uif::injector::instance().detach(); }
	void Attach()
	{
		if (IsHooked)
		{
			DetourTransactionBegin();
			DetourDetach(&EntryPoint, EntryPointHook);
			DetourTransactionCommit();
		}
		uif::injector::instance().attach();
	}
}

void InstallDelayedAttachHook()
{
	uif::utils::debug_log("InstallDelayedAttachHook: start");
	const auto targetModuleName = uif::injector::instance().config().value("/injector/target_module"_json_pointer, "");
	if (targetModuleName.empty())
	{
		EntryPoint = DetourGetEntryPoint(nullptr);
		uif::utils::debug_log("InstallDelayedAttachHook: no target module specified");
	}
	else
	{
		const auto handle = GetModuleHandleA(targetModuleName.c_str());
		uif::utils::debug_log("InstallDelayedAttachHook: target module is ", false);
		uif::utils::debug_log(targetModuleName.c_str());
		if (!handle) uif::utils::fail("Target module is not loaded");
		EntryPoint = DetourGetEntryPoint(handle);
	}

	if (*static_cast<unsigned char*>(EntryPoint) == 0xCC)
	{
		Attach();
		return;
	}

	uif::utils::debug_log("InstallDelayedAttachHook: transaction");
	IsHooked = true;
	DetourTransactionBegin();
	DetourAttach(&EntryPoint, EntryPointHook);
	DetourTransactionCommit();
	uif::utils::debug_log("InstallDelayedAttachHook: end");
}

BOOL APIENTRY DllMain(HMODULE hModule, DWORD ul_reason_for_call, LPVOID lpReserved)
{
	switch (ul_reason_for_call)
	{
	case DLL_PROCESS_ATTACH:
		DisableThreadLibraryCalls(hModule);
		uif::utils::debug_log_clear();
		uif::utils::debug_log("DllMain: attach");
		InstallDelayedAttachHook();
		break;

	case DLL_PROCESS_DETACH:
		uif::utils::debug_log("DllMain: detach");
		Detach();
		break;

	default:
		uif::utils::debug_log("DllMain: default");
		break;
	}
	return TRUE;
}
