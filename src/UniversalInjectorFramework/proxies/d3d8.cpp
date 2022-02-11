#include "pch.h"

#ifdef UIF_LIB_D3D8

#include "injector.h"

struct {
	HMODULE dll;
	FARPROC Direct3D8EnableMaximizedWindowedModeShim;
	FARPROC ValidatePixelShader;
	FARPROC ValidateVertexShader;
	FARPROC DebugSetMute;
	FARPROC Direct3DCreate8;
} d3d8;

void lib_d3d8_Direct3D8EnableMaximizedWindowedModeShim() { d3d8.Direct3D8EnableMaximizedWindowedModeShim(); }
void lib_d3d8_ValidatePixelShader() { d3d8.ValidatePixelShader(); }
void lib_d3d8_ValidateVertexShader() { d3d8.ValidateVertexShader(); }
void lib_d3d8_DebugSetMute() { d3d8.DebugSetMute(); }
void lib_d3d8_Direct3DCreate8() { d3d8.Direct3DCreate8(); }

bool load_library_d3d8() {
	d3d8.dll = uif::injector::instance().load_real_library("d3d8.dll");
	d3d8.Direct3D8EnableMaximizedWindowedModeShim = GetProcAddress(d3d8.dll, "Direct3D8EnableMaximizedWindowedModeShim");
	d3d8.ValidatePixelShader = GetProcAddress(d3d8.dll, "ValidatePixelShader");
	d3d8.ValidateVertexShader = GetProcAddress(d3d8.dll, "ValidateVertexShader");
	d3d8.DebugSetMute = GetProcAddress(d3d8.dll, "DebugSetMute");
	d3d8.Direct3DCreate8 = GetProcAddress(d3d8.dll, "Direct3DCreate8");
	return true;
}

bool unload_library_d3d8() {
	FreeLibrary(d3d8.dll);
	d3d8.dll = nullptr;
	return true;
}

#else

bool load_library_d3d8() {
	return false;
}

bool unload_library_d3d8() {
	return false;
}

#endif
