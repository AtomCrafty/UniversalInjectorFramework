#include "pch.h"

#include "injector.h"
#include "utils.h"

extern "C" {
    void* ExeEntryPoint;
	void Attach() { uif::injector::instance().attach(); }
	void Detach() { uif::injector::instance().detach(); }
    void ExeEntryPointHook();
}

void InstallDelayedAttachHook()
{
    const auto targetModuleName = uif::injector::instance().config().value("/injector/target_module"_json_pointer, "");
    if (targetModuleName.empty())
    {
        ExeEntryPoint = DetourGetEntryPoint(nullptr);
    }
    else
    {
        const auto handle = GetModuleHandleA(targetModuleName.c_str());
        if (!handle) uif::utils::fail("Target module is not loaded");
        ExeEntryPoint = DetourGetEntryPoint(handle);
    }
    DetourTransactionBegin();
    DetourAttach(&ExeEntryPoint, ExeEntryPointHook);
    DetourTransactionCommit();
}

BOOL APIENTRY DllMain(HMODULE hModule, DWORD ul_reason_for_call, LPVOID lpReserved)
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
#if _DEBUG
        Attach();
#else
        InstallDelayedAttachHook();
#endif
        break;
    	
    case DLL_PROCESS_DETACH:
        Detach();
        break;
    	
    default:
        break;
    }
    return TRUE;
}
