#include "pch.h"

#ifdef UIF_LIB_D3DCOMPILER_43

#include "injector.h"

struct {
	HMODULE dll;
	FARPROC D3DAssemble;
	FARPROC DebugSetMute;
	FARPROC D3DCompile;
	FARPROC D3DCompressShaders;
	FARPROC D3DCreateBlob;
	FARPROC D3DDecompressShaders;
	FARPROC D3DDisassemble10Effect;
	FARPROC D3DDisassemble;
	FARPROC D3DGetBlobPart;
	FARPROC D3DGetDebugInfo;
	FARPROC D3DGetInputAndOutputSignatureBlob;
	FARPROC D3DGetInputSignatureBlob;
	FARPROC D3DGetOutputSignatureBlob;
	FARPROC D3DPreprocess;
	FARPROC D3DReflect;
	FARPROC D3DReturnFailure1;
	FARPROC D3DStripShader;
} d3dcompiler_43;

void lib_d3dcompiler_43_D3DAssemble() { d3dcompiler_43.D3DAssemble(); }
void lib_d3dcompiler_43_DebugSetMute() { d3dcompiler_43.DebugSetMute(); }
void lib_d3dcompiler_43_D3DCompile() { d3dcompiler_43.D3DCompile(); }
void lib_d3dcompiler_43_D3DCompressShaders() { d3dcompiler_43.D3DCompressShaders(); }
void lib_d3dcompiler_43_D3DCreateBlob() { d3dcompiler_43.D3DCreateBlob(); }
void lib_d3dcompiler_43_D3DDecompressShaders() { d3dcompiler_43.D3DDecompressShaders(); }
void lib_d3dcompiler_43_D3DDisassemble10Effect() { d3dcompiler_43.D3DDisassemble10Effect(); }
void lib_d3dcompiler_43_D3DDisassemble() { d3dcompiler_43.D3DDisassemble(); }
void lib_d3dcompiler_43_D3DGetBlobPart() { d3dcompiler_43.D3DGetBlobPart(); }
void lib_d3dcompiler_43_D3DGetDebugInfo() { d3dcompiler_43.D3DGetDebugInfo(); }
void lib_d3dcompiler_43_D3DGetInputAndOutputSignatureBlob() { d3dcompiler_43.D3DGetInputAndOutputSignatureBlob(); }
void lib_d3dcompiler_43_D3DGetInputSignatureBlob() { d3dcompiler_43.D3DGetInputSignatureBlob(); }
void lib_d3dcompiler_43_D3DGetOutputSignatureBlob() { d3dcompiler_43.D3DGetOutputSignatureBlob(); }
void lib_d3dcompiler_43_D3DPreprocess() { d3dcompiler_43.D3DPreprocess(); }
void lib_d3dcompiler_43_D3DReflect() { d3dcompiler_43.D3DReflect(); }
void lib_d3dcompiler_43_D3DReturnFailure1() { d3dcompiler_43.D3DReturnFailure1(); }
void lib_d3dcompiler_43_D3DStripShader() { d3dcompiler_43.D3DStripShader(); }

bool load_library_d3dcompiler_43() {
	d3dcompiler_43.dll = uif::injector::instance().load_real_library("d3dcompiler_43.dll");
	d3dcompiler_43.D3DAssemble = GetProcAddress(d3dcompiler_43.dll, "D3DAssemble");
	d3dcompiler_43.DebugSetMute = GetProcAddress(d3dcompiler_43.dll, "DebugSetMute");
	d3dcompiler_43.D3DCompile = GetProcAddress(d3dcompiler_43.dll, "D3DCompile");
	d3dcompiler_43.D3DCompressShaders = GetProcAddress(d3dcompiler_43.dll, "D3DCompressShaders");
	d3dcompiler_43.D3DCreateBlob = GetProcAddress(d3dcompiler_43.dll, "D3DCreateBlob");
	d3dcompiler_43.D3DDecompressShaders = GetProcAddress(d3dcompiler_43.dll, "D3DDecompressShaders");
	d3dcompiler_43.D3DDisassemble10Effect = GetProcAddress(d3dcompiler_43.dll, "D3DDisassemble10Effect");
	d3dcompiler_43.D3DDisassemble = GetProcAddress(d3dcompiler_43.dll, "D3DDisassemble");
	d3dcompiler_43.D3DGetBlobPart = GetProcAddress(d3dcompiler_43.dll, "D3DGetBlobPart");
	d3dcompiler_43.D3DGetDebugInfo = GetProcAddress(d3dcompiler_43.dll, "D3DGetDebugInfo");
	d3dcompiler_43.D3DGetInputAndOutputSignatureBlob = GetProcAddress(d3dcompiler_43.dll, "D3DGetInputAndOutputSignatureBlob");
	d3dcompiler_43.D3DGetInputSignatureBlob = GetProcAddress(d3dcompiler_43.dll, "D3DGetInputSignatureBlob");
	d3dcompiler_43.D3DGetOutputSignatureBlob = GetProcAddress(d3dcompiler_43.dll, "D3DGetOutputSignatureBlob");
	d3dcompiler_43.D3DPreprocess = GetProcAddress(d3dcompiler_43.dll, "D3DPreprocess");
	d3dcompiler_43.D3DReflect = GetProcAddress(d3dcompiler_43.dll, "D3DReflect");
	d3dcompiler_43.D3DReturnFailure1 = GetProcAddress(d3dcompiler_43.dll, "D3DReturnFailure1");
	d3dcompiler_43.D3DStripShader = GetProcAddress(d3dcompiler_43.dll, "D3DStripShader");
	return true;
}

bool unload_library_d3dcompiler_43() {
	FreeLibrary(d3dcompiler_43.dll);
	d3dcompiler_43.dll = nullptr;
	return true;
}

#else

bool load_library_d3dcompiler_43() {
	return false;
}

bool unload_library_d3dcompiler_43() {
	return false;
}

#endif
