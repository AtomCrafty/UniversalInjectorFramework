#include "pch.h"

#include "injector.h"

BOOL APIENTRY DllMain(HMODULE hModule, DWORD ul_reason_for_call, LPVOID lpReserved)
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
        uif::injector::instance().attach();
        break;
    	
    case DLL_PROCESS_DETACH:
        uif::injector::instance().detach();
        break;
    	
    default:
        break;
    }
    return TRUE;
}
