#include "pch.h"

#ifdef UIF_LIB_D3D11

#include "injector.h"

struct {
	HMODULE dll;
	FARPROC D3D11CreateDeviceForD3D12;
	FARPROC D3DKMTCloseAdapter;
	FARPROC D3DKMTDestroyAllocation;
	FARPROC D3DKMTDestroyContext;
	FARPROC D3DKMTDestroyDevice;
	FARPROC D3DKMTDestroySynchronizationObject;
	FARPROC D3DKMTPresent;
	FARPROC D3DKMTQueryAdapterInfo;
	FARPROC D3DKMTSetDisplayPrivateDriverFormat;
	FARPROC D3DKMTSignalSynchronizationObject;
	FARPROC D3DKMTUnlock;
	FARPROC D3DKMTWaitForSynchronizationObject;
	FARPROC EnableFeatureLevelUpgrade;
	FARPROC OpenAdapter10;
	FARPROC OpenAdapter10_2;
	FARPROC CreateDirect3D11DeviceFromDXGIDevice;
	FARPROC CreateDirect3D11SurfaceFromDXGISurface;
	FARPROC D3D11CoreCreateDevice;
	FARPROC D3D11CoreCreateLayeredDevice;
	FARPROC D3D11CoreGetLayeredDeviceSize;
	FARPROC D3D11CoreRegisterLayers;
	FARPROC D3D11CreateDevice;
	FARPROC D3D11CreateDeviceAndSwapChain;
	FARPROC D3D11On12CreateDevice;
	FARPROC D3DKMTCreateAllocation;
	FARPROC D3DKMTCreateContext;
	FARPROC D3DKMTCreateDevice;
	FARPROC D3DKMTCreateSynchronizationObject;
	FARPROC D3DKMTEscape;
	FARPROC D3DKMTGetContextSchedulingPriority;
	FARPROC D3DKMTGetDeviceState;
	FARPROC D3DKMTGetDisplayModeList;
	FARPROC D3DKMTGetMultisampleMethodList;
	FARPROC D3DKMTGetRuntimeData;
	FARPROC D3DKMTGetSharedPrimaryHandle;
	FARPROC D3DKMTLock;
	FARPROC D3DKMTOpenAdapterFromHdc;
	FARPROC D3DKMTOpenResource;
	FARPROC D3DKMTQueryAllocationResidency;
	FARPROC D3DKMTQueryResourceInfo;
	FARPROC D3DKMTRender;
	FARPROC D3DKMTSetAllocationPriority;
	FARPROC D3DKMTSetContextSchedulingPriority;
	FARPROC D3DKMTSetDisplayMode;
	FARPROC D3DKMTSetGammaRamp;
	FARPROC D3DKMTSetVidPnSourceOwner;
	FARPROC D3DKMTWaitForVerticalBlankEvent;
	FARPROC D3DPerformance_BeginEvent;
	FARPROC D3DPerformance_EndEvent;
	FARPROC D3DPerformance_GetStatus;
	FARPROC D3DPerformance_SetMarker;
} d3d11;

void lib_d3d11_D3D11CreateDeviceForD3D12() { d3d11.D3D11CreateDeviceForD3D12(); }
void lib_d3d11_D3DKMTCloseAdapter() { d3d11.D3DKMTCloseAdapter(); }
void lib_d3d11_D3DKMTDestroyAllocation() { d3d11.D3DKMTDestroyAllocation(); }
void lib_d3d11_D3DKMTDestroyContext() { d3d11.D3DKMTDestroyContext(); }
void lib_d3d11_D3DKMTDestroyDevice() { d3d11.D3DKMTDestroyDevice(); }
void lib_d3d11_D3DKMTDestroySynchronizationObject() { d3d11.D3DKMTDestroySynchronizationObject(); }
void lib_d3d11_D3DKMTPresent() { d3d11.D3DKMTPresent(); }
void lib_d3d11_D3DKMTQueryAdapterInfo() { d3d11.D3DKMTQueryAdapterInfo(); }
void lib_d3d11_D3DKMTSetDisplayPrivateDriverFormat() { d3d11.D3DKMTSetDisplayPrivateDriverFormat(); }
void lib_d3d11_D3DKMTSignalSynchronizationObject() { d3d11.D3DKMTSignalSynchronizationObject(); }
void lib_d3d11_D3DKMTUnlock() { d3d11.D3DKMTUnlock(); }
void lib_d3d11_D3DKMTWaitForSynchronizationObject() { d3d11.D3DKMTWaitForSynchronizationObject(); }
void lib_d3d11_EnableFeatureLevelUpgrade() { d3d11.EnableFeatureLevelUpgrade(); }
void lib_d3d11_OpenAdapter10() { d3d11.OpenAdapter10(); }
void lib_d3d11_OpenAdapter10_2() { d3d11.OpenAdapter10_2(); }
void lib_d3d11_CreateDirect3D11DeviceFromDXGIDevice() { d3d11.CreateDirect3D11DeviceFromDXGIDevice(); }
void lib_d3d11_CreateDirect3D11SurfaceFromDXGISurface() { d3d11.CreateDirect3D11SurfaceFromDXGISurface(); }
void lib_d3d11_D3D11CoreCreateDevice() { d3d11.D3D11CoreCreateDevice(); }
void lib_d3d11_D3D11CoreCreateLayeredDevice() { d3d11.D3D11CoreCreateLayeredDevice(); }
void lib_d3d11_D3D11CoreGetLayeredDeviceSize() { d3d11.D3D11CoreGetLayeredDeviceSize(); }
void lib_d3d11_D3D11CoreRegisterLayers() { d3d11.D3D11CoreRegisterLayers(); }
void lib_d3d11_D3D11CreateDevice() { d3d11.D3D11CreateDevice(); }
void lib_d3d11_D3D11CreateDeviceAndSwapChain() { d3d11.D3D11CreateDeviceAndSwapChain(); }
void lib_d3d11_D3D11On12CreateDevice() { d3d11.D3D11On12CreateDevice(); }
void lib_d3d11_D3DKMTCreateAllocation() { d3d11.D3DKMTCreateAllocation(); }
void lib_d3d11_D3DKMTCreateContext() { d3d11.D3DKMTCreateContext(); }
void lib_d3d11_D3DKMTCreateDevice() { d3d11.D3DKMTCreateDevice(); }
void lib_d3d11_D3DKMTCreateSynchronizationObject() { d3d11.D3DKMTCreateSynchronizationObject(); }
void lib_d3d11_D3DKMTEscape() { d3d11.D3DKMTEscape(); }
void lib_d3d11_D3DKMTGetContextSchedulingPriority() { d3d11.D3DKMTGetContextSchedulingPriority(); }
void lib_d3d11_D3DKMTGetDeviceState() { d3d11.D3DKMTGetDeviceState(); }
void lib_d3d11_D3DKMTGetDisplayModeList() { d3d11.D3DKMTGetDisplayModeList(); }
void lib_d3d11_D3DKMTGetMultisampleMethodList() { d3d11.D3DKMTGetMultisampleMethodList(); }
void lib_d3d11_D3DKMTGetRuntimeData() { d3d11.D3DKMTGetRuntimeData(); }
void lib_d3d11_D3DKMTGetSharedPrimaryHandle() { d3d11.D3DKMTGetSharedPrimaryHandle(); }
void lib_d3d11_D3DKMTLock() { d3d11.D3DKMTLock(); }
void lib_d3d11_D3DKMTOpenAdapterFromHdc() { d3d11.D3DKMTOpenAdapterFromHdc(); }
void lib_d3d11_D3DKMTOpenResource() { d3d11.D3DKMTOpenResource(); }
void lib_d3d11_D3DKMTQueryAllocationResidency() { d3d11.D3DKMTQueryAllocationResidency(); }
void lib_d3d11_D3DKMTQueryResourceInfo() { d3d11.D3DKMTQueryResourceInfo(); }
void lib_d3d11_D3DKMTRender() { d3d11.D3DKMTRender(); }
void lib_d3d11_D3DKMTSetAllocationPriority() { d3d11.D3DKMTSetAllocationPriority(); }
void lib_d3d11_D3DKMTSetContextSchedulingPriority() { d3d11.D3DKMTSetContextSchedulingPriority(); }
void lib_d3d11_D3DKMTSetDisplayMode() { d3d11.D3DKMTSetDisplayMode(); }
void lib_d3d11_D3DKMTSetGammaRamp() { d3d11.D3DKMTSetGammaRamp(); }
void lib_d3d11_D3DKMTSetVidPnSourceOwner() { d3d11.D3DKMTSetVidPnSourceOwner(); }
void lib_d3d11_D3DKMTWaitForVerticalBlankEvent() { d3d11.D3DKMTWaitForVerticalBlankEvent(); }
void lib_d3d11_D3DPerformance_BeginEvent() { d3d11.D3DPerformance_BeginEvent(); }
void lib_d3d11_D3DPerformance_EndEvent() { d3d11.D3DPerformance_EndEvent(); }
void lib_d3d11_D3DPerformance_GetStatus() { d3d11.D3DPerformance_GetStatus(); }
void lib_d3d11_D3DPerformance_SetMarker() { d3d11.D3DPerformance_SetMarker(); }

bool load_library_d3d11() {
	d3d11.dll = uif::injector::instance().load_real_library("d3d11.dll");
	d3d11.D3D11CreateDeviceForD3D12 = GetProcAddress(d3d11.dll, "D3D11CreateDeviceForD3D12");
	d3d11.D3DKMTCloseAdapter = GetProcAddress(d3d11.dll, "D3DKMTCloseAdapter");
	d3d11.D3DKMTDestroyAllocation = GetProcAddress(d3d11.dll, "D3DKMTDestroyAllocation");
	d3d11.D3DKMTDestroyContext = GetProcAddress(d3d11.dll, "D3DKMTDestroyContext");
	d3d11.D3DKMTDestroyDevice = GetProcAddress(d3d11.dll, "D3DKMTDestroyDevice");
	d3d11.D3DKMTDestroySynchronizationObject = GetProcAddress(d3d11.dll, "D3DKMTDestroySynchronizationObject");
	d3d11.D3DKMTPresent = GetProcAddress(d3d11.dll, "D3DKMTPresent");
	d3d11.D3DKMTQueryAdapterInfo = GetProcAddress(d3d11.dll, "D3DKMTQueryAdapterInfo");
	d3d11.D3DKMTSetDisplayPrivateDriverFormat = GetProcAddress(d3d11.dll, "D3DKMTSetDisplayPrivateDriverFormat");
	d3d11.D3DKMTSignalSynchronizationObject = GetProcAddress(d3d11.dll, "D3DKMTSignalSynchronizationObject");
	d3d11.D3DKMTUnlock = GetProcAddress(d3d11.dll, "D3DKMTUnlock");
	d3d11.D3DKMTWaitForSynchronizationObject = GetProcAddress(d3d11.dll, "D3DKMTWaitForSynchronizationObject");
	d3d11.EnableFeatureLevelUpgrade = GetProcAddress(d3d11.dll, "EnableFeatureLevelUpgrade");
	d3d11.OpenAdapter10 = GetProcAddress(d3d11.dll, "OpenAdapter10");
	d3d11.OpenAdapter10_2 = GetProcAddress(d3d11.dll, "OpenAdapter10_2");
	d3d11.CreateDirect3D11DeviceFromDXGIDevice = GetProcAddress(d3d11.dll, "CreateDirect3D11DeviceFromDXGIDevice");
	d3d11.CreateDirect3D11SurfaceFromDXGISurface = GetProcAddress(d3d11.dll, "CreateDirect3D11SurfaceFromDXGISurface");
	d3d11.D3D11CoreCreateDevice = GetProcAddress(d3d11.dll, "D3D11CoreCreateDevice");
	d3d11.D3D11CoreCreateLayeredDevice = GetProcAddress(d3d11.dll, "D3D11CoreCreateLayeredDevice");
	d3d11.D3D11CoreGetLayeredDeviceSize = GetProcAddress(d3d11.dll, "D3D11CoreGetLayeredDeviceSize");
	d3d11.D3D11CoreRegisterLayers = GetProcAddress(d3d11.dll, "D3D11CoreRegisterLayers");
	d3d11.D3D11CreateDevice = GetProcAddress(d3d11.dll, "D3D11CreateDevice");
	d3d11.D3D11CreateDeviceAndSwapChain = GetProcAddress(d3d11.dll, "D3D11CreateDeviceAndSwapChain");
	d3d11.D3D11On12CreateDevice = GetProcAddress(d3d11.dll, "D3D11On12CreateDevice");
	d3d11.D3DKMTCreateAllocation = GetProcAddress(d3d11.dll, "D3DKMTCreateAllocation");
	d3d11.D3DKMTCreateContext = GetProcAddress(d3d11.dll, "D3DKMTCreateContext");
	d3d11.D3DKMTCreateDevice = GetProcAddress(d3d11.dll, "D3DKMTCreateDevice");
	d3d11.D3DKMTCreateSynchronizationObject = GetProcAddress(d3d11.dll, "D3DKMTCreateSynchronizationObject");
	d3d11.D3DKMTEscape = GetProcAddress(d3d11.dll, "D3DKMTEscape");
	d3d11.D3DKMTGetContextSchedulingPriority = GetProcAddress(d3d11.dll, "D3DKMTGetContextSchedulingPriority");
	d3d11.D3DKMTGetDeviceState = GetProcAddress(d3d11.dll, "D3DKMTGetDeviceState");
	d3d11.D3DKMTGetDisplayModeList = GetProcAddress(d3d11.dll, "D3DKMTGetDisplayModeList");
	d3d11.D3DKMTGetMultisampleMethodList = GetProcAddress(d3d11.dll, "D3DKMTGetMultisampleMethodList");
	d3d11.D3DKMTGetRuntimeData = GetProcAddress(d3d11.dll, "D3DKMTGetRuntimeData");
	d3d11.D3DKMTGetSharedPrimaryHandle = GetProcAddress(d3d11.dll, "D3DKMTGetSharedPrimaryHandle");
	d3d11.D3DKMTLock = GetProcAddress(d3d11.dll, "D3DKMTLock");
	d3d11.D3DKMTOpenAdapterFromHdc = GetProcAddress(d3d11.dll, "D3DKMTOpenAdapterFromHdc");
	d3d11.D3DKMTOpenResource = GetProcAddress(d3d11.dll, "D3DKMTOpenResource");
	d3d11.D3DKMTQueryAllocationResidency = GetProcAddress(d3d11.dll, "D3DKMTQueryAllocationResidency");
	d3d11.D3DKMTQueryResourceInfo = GetProcAddress(d3d11.dll, "D3DKMTQueryResourceInfo");
	d3d11.D3DKMTRender = GetProcAddress(d3d11.dll, "D3DKMTRender");
	d3d11.D3DKMTSetAllocationPriority = GetProcAddress(d3d11.dll, "D3DKMTSetAllocationPriority");
	d3d11.D3DKMTSetContextSchedulingPriority = GetProcAddress(d3d11.dll, "D3DKMTSetContextSchedulingPriority");
	d3d11.D3DKMTSetDisplayMode = GetProcAddress(d3d11.dll, "D3DKMTSetDisplayMode");
	d3d11.D3DKMTSetGammaRamp = GetProcAddress(d3d11.dll, "D3DKMTSetGammaRamp");
	d3d11.D3DKMTSetVidPnSourceOwner = GetProcAddress(d3d11.dll, "D3DKMTSetVidPnSourceOwner");
	d3d11.D3DKMTWaitForVerticalBlankEvent = GetProcAddress(d3d11.dll, "D3DKMTWaitForVerticalBlankEvent");
	d3d11.D3DPerformance_BeginEvent = GetProcAddress(d3d11.dll, "D3DPerformance_BeginEvent");
	d3d11.D3DPerformance_EndEvent = GetProcAddress(d3d11.dll, "D3DPerformance_EndEvent");
	d3d11.D3DPerformance_GetStatus = GetProcAddress(d3d11.dll, "D3DPerformance_GetStatus");
	d3d11.D3DPerformance_SetMarker = GetProcAddress(d3d11.dll, "D3DPerformance_SetMarker");
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
