#include "pch.h"

#ifdef UIF_LIB_D3D8

struct d3d8_dll {
	HMODULE dll;
	FARPROC DebugSetMute;
	FARPROC Direct3D8EnableMaximizedWindowedModeShim;
	FARPROC Direct3DCreate8;
	FARPROC ValidatePixelShader;
	FARPROC ValidateVertexShader;
} d3d8;

void lib_d3d8_DebugSetMute() { d3d8.DebugSetMute(); }
void lib_d3d8_Direct3D8EnableMaximizedWindowedModeShim() { d3d8.Direct3D8EnableMaximizedWindowedModeShim(); }
void lib_d3d8_Direct3DCreate8() { d3d8.Direct3DCreate8(); }
void lib_d3d8_ValidatePixelShader() { d3d8.ValidatePixelShader(); }
void lib_d3d8_ValidateVertexShader() { d3d8.ValidateVertexShader(); }

bool load_library_d3d8() {
	wchar_t path[MAX_PATH];
	GetSystemDirectory(path, MAX_PATH);
	lstrcat(path, L"\\d3d8.dll");
	d3d8.dll = LoadLibrary(path);
	if (reinterpret_cast<size_t>(d3d8.dll) == false)
	{
		MessageBox(0, L"Cannot load original d3d8.dll library", L"Universal Injector", MB_ICONERROR);
		ExitProcess(0);
	}
	d3d8.DebugSetMute = GetProcAddress(d3d8.dll, "DebugSetMute");
	d3d8.Direct3D8EnableMaximizedWindowedModeShim = GetProcAddress(d3d8.dll, "Direct3D8EnableMaximizedWindowedModeShim");
	d3d8.Direct3DCreate8 = GetProcAddress(d3d8.dll, "Direct3DCreate8");
	d3d8.ValidatePixelShader = GetProcAddress(d3d8.dll, "ValidatePixelShader");
	d3d8.ValidateVertexShader = GetProcAddress(d3d8.dll, "ValidateVertexShader");
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