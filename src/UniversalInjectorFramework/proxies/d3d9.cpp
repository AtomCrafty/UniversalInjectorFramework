#include "pch.h"

#ifdef UIF_LIB_D3D9

struct d3d9_dll {
	HMODULE dll;
	FARPROC D3DPERF_BeginEvent;
	FARPROC D3DPERF_EndEvent;
	FARPROC D3DPERF_GetStatus;
	FARPROC D3DPERF_QueryRepeatFrame;
	FARPROC D3DPERF_SetMarker;
	FARPROC D3DPERF_SetOptions;
	FARPROC D3DPERF_SetRegion;
	FARPROC DebugSetLevel;
	FARPROC DebugSetMute;
	FARPROC Direct3D9EnableMaximizedWindowedModeShim;
	FARPROC Direct3DCreate9;
	FARPROC Direct3DCreate9Ex;
	FARPROC Direct3DCreate9On12;
	FARPROC Direct3DCreate9On12Ex;
	FARPROC Direct3DShaderValidatorCreate9;
	FARPROC PSGPError;
	FARPROC PSGPSampleTexture;
} d3d9;

void lib_d3d9_D3DPERF_BeginEvent() { d3d9.D3DPERF_BeginEvent(); }
void lib_d3d9_D3DPERF_EndEvent() { d3d9.D3DPERF_EndEvent(); }
void lib_d3d9_D3DPERF_GetStatus() { d3d9.D3DPERF_GetStatus(); }
void lib_d3d9_D3DPERF_QueryRepeatFrame() { d3d9.D3DPERF_QueryRepeatFrame(); }
void lib_d3d9_D3DPERF_SetMarker() { d3d9.D3DPERF_SetMarker(); }
void lib_d3d9_D3DPERF_SetOptions() { d3d9.D3DPERF_SetOptions(); }
void lib_d3d9_D3DPERF_SetRegion() { d3d9.D3DPERF_SetRegion(); }
void lib_d3d9_DebugSetLevel() { d3d9.DebugSetLevel(); }
void lib_d3d9_DebugSetMute() { d3d9.DebugSetMute(); }
void lib_d3d9_Direct3D9EnableMaximizedWindowedModeShim() { d3d9.Direct3D9EnableMaximizedWindowedModeShim(); }
void lib_d3d9_Direct3DCreate9() { d3d9.Direct3DCreate9(); }
void lib_d3d9_Direct3DCreate9Ex() { d3d9.Direct3DCreate9Ex(); }
void lib_d3d9_Direct3DCreate9On12() { d3d9.Direct3DCreate9On12(); }
void lib_d3d9_Direct3DCreate9On12Ex() { d3d9.Direct3DCreate9On12Ex(); }
void lib_d3d9_Direct3DShaderValidatorCreate9() { d3d9.Direct3DShaderValidatorCreate9(); }
void lib_d3d9_PSGPError() { d3d9.PSGPError(); }
void lib_d3d9_PSGPSampleTexture() { d3d9.PSGPSampleTexture(); }

bool load_library_d3d9() {
	wchar_t path[MAX_PATH];
	GetSystemDirectory(path, MAX_PATH);
	lstrcat(path, L"\\d3d9.dll");
	d3d9.dll = LoadLibrary(path);
	if (reinterpret_cast<size_t>(d3d9.dll) == false)
	{
		MessageBox(0, L"Cannot load original d3d9.dll library", L"Universal Injector", MB_ICONERROR);
		ExitProcess(0);
	}
	d3d9.D3DPERF_BeginEvent = GetProcAddress(d3d9.dll, "D3DPERF_BeginEvent");
	d3d9.D3DPERF_EndEvent = GetProcAddress(d3d9.dll, "D3DPERF_EndEvent");
	d3d9.D3DPERF_GetStatus = GetProcAddress(d3d9.dll, "D3DPERF_GetStatus");
	d3d9.D3DPERF_QueryRepeatFrame = GetProcAddress(d3d9.dll, "D3DPERF_QueryRepeatFrame");
	d3d9.D3DPERF_SetMarker = GetProcAddress(d3d9.dll, "D3DPERF_SetMarker");
	d3d9.D3DPERF_SetOptions = GetProcAddress(d3d9.dll, "D3DPERF_SetOptions");
	d3d9.D3DPERF_SetRegion = GetProcAddress(d3d9.dll, "D3DPERF_SetRegion");
	d3d9.DebugSetLevel = GetProcAddress(d3d9.dll, "DebugSetLevel");
	d3d9.DebugSetMute = GetProcAddress(d3d9.dll, "DebugSetMute");
	d3d9.Direct3D9EnableMaximizedWindowedModeShim = GetProcAddress(d3d9.dll, "Direct3D9EnableMaximizedWindowedModeShim");
	d3d9.Direct3DCreate9 = GetProcAddress(d3d9.dll, "Direct3DCreate9");
	d3d9.Direct3DCreate9Ex = GetProcAddress(d3d9.dll, "Direct3DCreate9Ex");
	d3d9.Direct3DCreate9On12 = GetProcAddress(d3d9.dll, "Direct3DCreate9On12");
	d3d9.Direct3DCreate9On12Ex = GetProcAddress(d3d9.dll, "Direct3DCreate9On12Ex");
	d3d9.Direct3DShaderValidatorCreate9 = GetProcAddress(d3d9.dll, "Direct3DShaderValidatorCreate9");
	d3d9.PSGPError = GetProcAddress(d3d9.dll, "PSGPError");
	d3d9.PSGPSampleTexture = GetProcAddress(d3d9.dll, "PSGPSampleTexture");
	return true;
}

bool unload_library_d3d9() {
	FreeLibrary(d3d9.dll);
	d3d9.dll = nullptr;
	return true;
}

#else

bool load_library_d3d9() {
	return false;
}

bool unload_library_d3d9() {
	return false;
}

#endif