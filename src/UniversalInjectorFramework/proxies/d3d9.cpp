#include "pch.h"

#ifdef UIF_LIB_D3D9

#include "injector.h"

struct {
	HMODULE dll;
	FARPROC Ordinal16;
	FARPROC Ordinal17;
	FARPROC Ordinal18;
	FARPROC Ordinal19;
	FARPROC Direct3DCreate9On12;
	FARPROC Direct3DCreate9On12Ex;
	FARPROC Ordinal22;
	FARPROC Ordinal23;
	FARPROC Direct3DShaderValidatorCreate9;
	FARPROC PSGPError;
	FARPROC PSGPSampleTexture;
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
} d3d9;

void lib_d3d9_Ordinal16() { d3d9.Ordinal16(); }
void lib_d3d9_Ordinal17() { d3d9.Ordinal17(); }
void lib_d3d9_Ordinal18() { d3d9.Ordinal18(); }
void lib_d3d9_Ordinal19() { d3d9.Ordinal19(); }
void lib_d3d9_Direct3DCreate9On12() { d3d9.Direct3DCreate9On12(); }
void lib_d3d9_Direct3DCreate9On12Ex() { d3d9.Direct3DCreate9On12Ex(); }
void lib_d3d9_Ordinal22() { d3d9.Ordinal22(); }
void lib_d3d9_Ordinal23() { d3d9.Ordinal23(); }
void lib_d3d9_Direct3DShaderValidatorCreate9() { d3d9.Direct3DShaderValidatorCreate9(); }
void lib_d3d9_PSGPError() { d3d9.PSGPError(); }
void lib_d3d9_PSGPSampleTexture() { d3d9.PSGPSampleTexture(); }
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

bool load_library_d3d9() {
	d3d9.dll = uif::injector::instance().load_real_library("d3d9.dll");
	d3d9.Ordinal16 = GetProcAddress(d3d9.dll, MAKEINTRESOURCEA(16));
	d3d9.Ordinal17 = GetProcAddress(d3d9.dll, MAKEINTRESOURCEA(17));
	d3d9.Ordinal18 = GetProcAddress(d3d9.dll, MAKEINTRESOURCEA(18));
	d3d9.Ordinal19 = GetProcAddress(d3d9.dll, MAKEINTRESOURCEA(19));
	d3d9.Direct3DCreate9On12 = GetProcAddress(d3d9.dll, "Direct3DCreate9On12");
	d3d9.Direct3DCreate9On12Ex = GetProcAddress(d3d9.dll, "Direct3DCreate9On12Ex");
	d3d9.Ordinal22 = GetProcAddress(d3d9.dll, MAKEINTRESOURCEA(22));
	d3d9.Ordinal23 = GetProcAddress(d3d9.dll, MAKEINTRESOURCEA(23));
	d3d9.Direct3DShaderValidatorCreate9 = GetProcAddress(d3d9.dll, "Direct3DShaderValidatorCreate9");
	d3d9.PSGPError = GetProcAddress(d3d9.dll, "PSGPError");
	d3d9.PSGPSampleTexture = GetProcAddress(d3d9.dll, "PSGPSampleTexture");
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
