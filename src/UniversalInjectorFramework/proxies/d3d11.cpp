#include "pch.h"

#ifdef UIF_LIB_D3D11
#define DLL_NAME d3d11

#define IMPL_PROC_NAME_(dllName, procName) lib_ ## dllName ## _ ## procName
#define IMPL_PROC_NAME(dllName, procName) IMPL_PROC_NAME_(dllName, procName)
#define IMPL_PROC(name) void IMPL_PROC_NAME(DLL_NAME, name)() { DLL_NAME.ptr_ ## name(); }
#define LOAD_PROC(name) DLL_NAME.ptr_ ## name = GetProcAddress(DLL_NAME.dll, #name)

struct d3d11_dll {
	HMODULE dll;
	FARPROC ptr_CreateDirect3D11DeviceFromDXGIDevice;
	FARPROC ptr_CreateDirect3D11SurfaceFromDXGISurface;
	FARPROC ptr_D3D11CoreCreateDevice;
	FARPROC ptr_D3D11CoreCreateLayeredDevice;
	FARPROC ptr_D3D11CoreGetLayeredDeviceSize;
	FARPROC ptr_D3D11CoreRegisterLayers;
	FARPROC ptr_D3D11CreateDevice;
	FARPROC ptr_D3D11CreateDeviceAndSwapChain;
	FARPROC ptr_D3D11CreateDeviceForD3D12;
	FARPROC ptr_D3D11On12CreateDevice;
	FARPROC ptr_D3DKMTCloseAdapter;
	FARPROC ptr_D3DKMTCreateAllocation;
	FARPROC ptr_D3DKMTCreateContext;
	FARPROC ptr_D3DKMTCreateDevice;
	FARPROC ptr_D3DKMTCreateSynchronizationObject;
	FARPROC ptr_D3DKMTDestroyAllocation;
	FARPROC ptr_D3DKMTDestroyContext;
	FARPROC ptr_D3DKMTDestroyDevice;
	FARPROC ptr_D3DKMTDestroySynchronizationObject;
	FARPROC ptr_D3DKMTEscape;
	FARPROC ptr_D3DKMTGetContextSchedulingPriority;
	FARPROC ptr_D3DKMTGetDeviceState;
	FARPROC ptr_D3DKMTGetDisplayModeList;
	FARPROC ptr_D3DKMTGetMultisampleMethodList;
	FARPROC ptr_D3DKMTGetRuntimeData;
	FARPROC ptr_D3DKMTGetSharedPrimaryHandle;
	FARPROC ptr_D3DKMTLock;
	FARPROC ptr_D3DKMTOpenAdapterFromHdc;
	FARPROC ptr_D3DKMTOpenResource;
	FARPROC ptr_D3DKMTPresent;
	FARPROC ptr_D3DKMTQueryAdapterInfo;
	FARPROC ptr_D3DKMTQueryAllocationResidency;
	FARPROC ptr_D3DKMTQueryResourceInfo;
	FARPROC ptr_D3DKMTRender;
	FARPROC ptr_D3DKMTSetAllocationPriority;
	FARPROC ptr_D3DKMTSetContextSchedulingPriority;
	FARPROC ptr_D3DKMTSetDisplayMode;
	FARPROC ptr_D3DKMTSetDisplayPrivateDriverFormat;
	FARPROC ptr_D3DKMTSetGammaRamp;
	FARPROC ptr_D3DKMTSetVidPnSourceOwner;
	FARPROC ptr_D3DKMTSignalSynchronizationObject;
	FARPROC ptr_D3DKMTUnlock;
	FARPROC ptr_D3DKMTWaitForSynchronizationObject;
	FARPROC ptr_D3DKMTWaitForVerticalBlankEvent;
	FARPROC ptr_D3DPerformance_BeginEvent;
	FARPROC ptr_D3DPerformance_EndEvent;
	FARPROC ptr_D3DPerformance_GetStatus;
	FARPROC ptr_D3DPerformance_SetMarker;
	FARPROC ptr_EnableFeatureLevelUpgrade;
	FARPROC ptr_OpenAdapter10;
	FARPROC ptr_OpenAdapter10_2;
} d3d11;


IMPL_PROC(CreateDirect3D11DeviceFromDXGIDevice)
IMPL_PROC(CreateDirect3D11SurfaceFromDXGISurface)
IMPL_PROC(D3D11CoreCreateDevice)
IMPL_PROC(D3D11CoreCreateLayeredDevice)
IMPL_PROC(D3D11CoreGetLayeredDeviceSize)
IMPL_PROC(D3D11CoreRegisterLayers)
IMPL_PROC(D3D11CreateDevice)
IMPL_PROC(D3D11CreateDeviceAndSwapChain)
IMPL_PROC(D3D11CreateDeviceForD3D12)
IMPL_PROC(D3D11On12CreateDevice)
IMPL_PROC(D3DKMTCloseAdapter)
IMPL_PROC(D3DKMTCreateAllocation)
IMPL_PROC(D3DKMTCreateContext)
IMPL_PROC(D3DKMTCreateDevice)
IMPL_PROC(D3DKMTCreateSynchronizationObject)
IMPL_PROC(D3DKMTDestroyAllocation)
IMPL_PROC(D3DKMTDestroyContext)
IMPL_PROC(D3DKMTDestroyDevice)
IMPL_PROC(D3DKMTDestroySynchronizationObject)
IMPL_PROC(D3DKMTEscape)
IMPL_PROC(D3DKMTGetContextSchedulingPriority)
IMPL_PROC(D3DKMTGetDeviceState)
IMPL_PROC(D3DKMTGetDisplayModeList)
IMPL_PROC(D3DKMTGetMultisampleMethodList)
IMPL_PROC(D3DKMTGetRuntimeData)
IMPL_PROC(D3DKMTGetSharedPrimaryHandle)
IMPL_PROC(D3DKMTLock)
IMPL_PROC(D3DKMTOpenAdapterFromHdc)
IMPL_PROC(D3DKMTOpenResource)
IMPL_PROC(D3DKMTPresent)
IMPL_PROC(D3DKMTQueryAdapterInfo)
IMPL_PROC(D3DKMTQueryAllocationResidency)
IMPL_PROC(D3DKMTQueryResourceInfo)
IMPL_PROC(D3DKMTRender)
IMPL_PROC(D3DKMTSetAllocationPriority)
IMPL_PROC(D3DKMTSetContextSchedulingPriority)
IMPL_PROC(D3DKMTSetDisplayMode)
IMPL_PROC(D3DKMTSetDisplayPrivateDriverFormat)
IMPL_PROC(D3DKMTSetGammaRamp)
IMPL_PROC(D3DKMTSetVidPnSourceOwner)
IMPL_PROC(D3DKMTSignalSynchronizationObject)
IMPL_PROC(D3DKMTUnlock)
IMPL_PROC(D3DKMTWaitForSynchronizationObject)
IMPL_PROC(D3DKMTWaitForVerticalBlankEvent)
IMPL_PROC(D3DPerformance_BeginEvent)
IMPL_PROC(D3DPerformance_EndEvent)
IMPL_PROC(D3DPerformance_GetStatus)
IMPL_PROC(D3DPerformance_SetMarker)
IMPL_PROC(EnableFeatureLevelUpgrade)
IMPL_PROC(OpenAdapter10)
IMPL_PROC(OpenAdapter10_2)

bool load_library_d3d11() {
	wchar_t path[MAX_PATH];
	GetSystemDirectory(path, MAX_PATH);
	lstrcat(path, L"\\d3d11.dll");
	d3d11.dll = LoadLibrary(path);
	if (reinterpret_cast<size_t>(d3d11.dll) == false)
	{
		MessageBox(nullptr, L"Cannot load original d3d11.dll library", L"Universal Injector", MB_ICONERROR);
		ExitProcess(0);
	}

	{
		LOAD_PROC(CreateDirect3D11DeviceFromDXGIDevice);
		LOAD_PROC(CreateDirect3D11SurfaceFromDXGISurface);
		LOAD_PROC(D3D11CoreCreateDevice);
		LOAD_PROC(D3D11CoreCreateLayeredDevice);
		LOAD_PROC(D3D11CoreGetLayeredDeviceSize);
		LOAD_PROC(D3D11CoreRegisterLayers);
		LOAD_PROC(D3D11CreateDevice);
		LOAD_PROC(D3D11CreateDeviceAndSwapChain);
		LOAD_PROC(D3D11CreateDeviceForD3D12);
		LOAD_PROC(D3D11On12CreateDevice);
		LOAD_PROC(D3DKMTCloseAdapter);
		LOAD_PROC(D3DKMTCreateAllocation);
		LOAD_PROC(D3DKMTCreateContext);
		LOAD_PROC(D3DKMTCreateDevice);
		LOAD_PROC(D3DKMTCreateSynchronizationObject);
		LOAD_PROC(D3DKMTDestroyAllocation);
		LOAD_PROC(D3DKMTDestroyContext);
		LOAD_PROC(D3DKMTDestroyDevice);
		LOAD_PROC(D3DKMTDestroySynchronizationObject);
		LOAD_PROC(D3DKMTEscape);
		LOAD_PROC(D3DKMTGetContextSchedulingPriority);
		LOAD_PROC(D3DKMTGetDeviceState);
		LOAD_PROC(D3DKMTGetDisplayModeList);
		LOAD_PROC(D3DKMTGetMultisampleMethodList);
		LOAD_PROC(D3DKMTGetRuntimeData);
		LOAD_PROC(D3DKMTGetSharedPrimaryHandle);
		LOAD_PROC(D3DKMTLock);
		LOAD_PROC(D3DKMTOpenAdapterFromHdc);
		LOAD_PROC(D3DKMTOpenResource);
		LOAD_PROC(D3DKMTPresent);
		LOAD_PROC(D3DKMTQueryAdapterInfo);
		LOAD_PROC(D3DKMTQueryAllocationResidency);
		LOAD_PROC(D3DKMTQueryResourceInfo);
		LOAD_PROC(D3DKMTRender);
		LOAD_PROC(D3DKMTSetAllocationPriority);
		LOAD_PROC(D3DKMTSetContextSchedulingPriority);
		LOAD_PROC(D3DKMTSetDisplayMode);
		LOAD_PROC(D3DKMTSetDisplayPrivateDriverFormat);
		LOAD_PROC(D3DKMTSetGammaRamp);
		LOAD_PROC(D3DKMTSetVidPnSourceOwner);
		LOAD_PROC(D3DKMTSignalSynchronizationObject);
		LOAD_PROC(D3DKMTUnlock);
		LOAD_PROC(D3DKMTWaitForSynchronizationObject);
		LOAD_PROC(D3DKMTWaitForVerticalBlankEvent);
		LOAD_PROC(D3DPerformance_BeginEvent);
		LOAD_PROC(D3DPerformance_EndEvent);
		LOAD_PROC(D3DPerformance_GetStatus);
		LOAD_PROC(D3DPerformance_SetMarker);
		LOAD_PROC(EnableFeatureLevelUpgrade);
		LOAD_PROC(OpenAdapter10);
		LOAD_PROC(OpenAdapter10_2);
	}
	return true;
}

bool unload_library_d3d11() {
	FreeLibrary(d3d11.dll);
	d3d11.dll = nullptr;
	return true;
}

#else

bool load_library_d3d11() {
	return false;
}

bool unload_library_d3d11() {
	return false;
}

#endif