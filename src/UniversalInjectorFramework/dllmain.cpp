#include "pch.h"

#include "injector.h"

extern "C" {
    void* ExeEntryPoint;
	void Attach() { uif::injector::instance().attach(); }
	void Detach() { uif::injector::instance().detach(); }
    void ExeEntryPointHook();
}

void InstallDelayedAttachHook()
{
    uif::injector::instance().attach();
    ExeEntryPoint = DetourGetEntryPoint(nullptr);
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
