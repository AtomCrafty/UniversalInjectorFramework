#include "pch.h"

#ifdef UIF_LIB_D3DCOMPILER_47

struct dxgi_dll {
	HMODULE dll;
	FARPROC D3DAssemble;
	FARPROC D3DCompile;
	FARPROC D3DCompile2;
	FARPROC D3DCompileFromFile;
	FARPROC D3DCompressShaders;
	FARPROC D3DCreateBlob;
	FARPROC D3DCreateFunctionLinkingGraph;
	FARPROC D3DCreateLinker;
	FARPROC D3DDecompressShaders;
	FARPROC D3DDisassemble;
	FARPROC D3DDisassemble10Effect;
	FARPROC D3DDisassemble11Trace;
	FARPROC D3DDisassembleRegion;
	FARPROC D3DGetBlobPart;
	FARPROC D3DGetDebugInfo;
	FARPROC D3DGetInputAndOutputSignatureBlob;
	FARPROC D3DGetInputSignatureBlob;
	FARPROC D3DGetOutputSignatureBlob;
	FARPROC D3DGetTraceInstructionOffsets;
	FARPROC D3DLoadModule;
	FARPROC D3DPreprocess;
	FARPROC D3DReadFileToBlob;
	FARPROC D3DReflect;
	FARPROC D3DReflectLibrary;
	FARPROC D3DReturnFailure1;
	FARPROC D3DSetBlobPart;
	FARPROC D3DStripShader;
	FARPROC D3DWriteBlobToFile;
	FARPROC DebugSetMute;
} d3dcompiler_47;

void lib_d3dcompiler_47_D3DAssemble() { d3dcompiler_47.D3DAssemble(); }
void lib_d3dcompiler_47_D3DCompile() { d3dcompiler_47.D3DCompile(); }
void lib_d3dcompiler_47_D3DCompile2() { d3dcompiler_47.D3DCompile2(); }
void lib_d3dcompiler_47_D3DCompileFromFile() { d3dcompiler_47.D3DCompileFromFile(); }
void lib_d3dcompiler_47_D3DCompressShaders() { d3dcompiler_47.D3DCompressShaders(); }
void lib_d3dcompiler_47_D3DCreateBlob() { d3dcompiler_47.D3DCreateBlob(); }
void lib_d3dcompiler_47_D3DCreateFunctionLinkingGraph() { d3dcompiler_47.D3DCreateFunctionLinkingGraph(); }
void lib_d3dcompiler_47_D3DCreateLinker() { d3dcompiler_47.D3DCreateLinker(); }
void lib_d3dcompiler_47_D3DDecompressShaders() { d3dcompiler_47.D3DDecompressShaders(); }
void lib_d3dcompiler_47_D3DDisassemble() { d3dcompiler_47.D3DDisassemble(); }
void lib_d3dcompiler_47_D3DDisassemble10Effect() { d3dcompiler_47.D3DDisassemble10Effect(); }
void lib_d3dcompiler_47_D3DDisassemble11Trace() { d3dcompiler_47.D3DDisassemble11Trace(); }
void lib_d3dcompiler_47_D3DDisassembleRegion() { d3dcompiler_47.D3DDisassembleRegion(); }
void lib_d3dcompiler_47_D3DGetBlobPart() { d3dcompiler_47.D3DGetBlobPart(); }
void lib_d3dcompiler_47_D3DGetDebugInfo() { d3dcompiler_47.D3DGetDebugInfo(); }
void lib_d3dcompiler_47_D3DGetInputAndOutputSignatureBlob() { d3dcompiler_47.D3DGetInputAndOutputSignatureBlob(); }
void lib_d3dcompiler_47_D3DGetInputSignatureBlob() { d3dcompiler_47.D3DGetInputSignatureBlob(); }
void lib_d3dcompiler_47_D3DGetOutputSignatureBlob() { d3dcompiler_47.D3DGetOutputSignatureBlob(); }
void lib_d3dcompiler_47_D3DGetTraceInstructionOffsets() { d3dcompiler_47.D3DGetTraceInstructionOffsets(); }
void lib_d3dcompiler_47_D3DLoadModule() { d3dcompiler_47.D3DLoadModule(); }
void lib_d3dcompiler_47_D3DPreprocess() { d3dcompiler_47.D3DPreprocess(); }
void lib_d3dcompiler_47_D3DReadFileToBlob() { d3dcompiler_47.D3DReadFileToBlob(); }
void lib_d3dcompiler_47_D3DReflect() { d3dcompiler_47.D3DReflect(); }
void lib_d3dcompiler_47_D3DReflectLibrary() { d3dcompiler_47.D3DReflectLibrary(); }
void lib_d3dcompiler_47_D3DReturnFailure1() { d3dcompiler_47.D3DReturnFailure1(); }
void lib_d3dcompiler_47_D3DSetBlobPart() { d3dcompiler_47.D3DSetBlobPart(); }
void lib_d3dcompiler_47_D3DStripShader() { d3dcompiler_47.D3DStripShader(); }
void lib_d3dcompiler_47_D3DWriteBlobToFile() { d3dcompiler_47.D3DWriteBlobToFile(); }
void lib_d3dcompiler_47_DebugSetMute() { d3dcompiler_47.DebugSetMute(); }

bool load_library_d3dcompiler_47() {
	wchar_t path[MAX_PATH];
	GetSystemDirectory(path, MAX_PATH);
	lstrcat(path, L"\\d3dcompiler_47.dll");
	d3dcompiler_47.dll = LoadLibrary(path);
	if (reinterpret_cast<size_t>(d3dcompiler_47.dll) == false)
	{
		MessageBox(0, L"Cannot load original d3dcompiler_47.dll library", L"Universal Injector", MB_ICONERROR);
		ExitProcess(0);
	}
	d3dcompiler_47.D3DAssemble = GetProcAddress(d3dcompiler_47.dll, "D3DAssemble");
	d3dcompiler_47.D3DCompile = GetProcAddress(d3dcompiler_47.dll, "D3DCompile");
	d3dcompiler_47.D3DCompile2 = GetProcAddress(d3dcompiler_47.dll, "D3DCompile2");
	d3dcompiler_47.D3DCompileFromFile = GetProcAddress(d3dcompiler_47.dll, "D3DCompileFromFile");
	d3dcompiler_47.D3DCompressShaders = GetProcAddress(d3dcompiler_47.dll, "D3DCompressShaders");
	d3dcompiler_47.D3DCreateBlob = GetProcAddress(d3dcompiler_47.dll, "D3DCreateBlob");
	d3dcompiler_47.D3DCreateFunctionLinkingGraph = GetProcAddress(d3dcompiler_47.dll, "D3DCreateFunctionLinkingGraph");
	d3dcompiler_47.D3DCreateLinker = GetProcAddress(d3dcompiler_47.dll, "D3DCreateLinker");
	d3dcompiler_47.D3DDecompressShaders = GetProcAddress(d3dcompiler_47.dll, "D3DDecompressShaders");
	d3dcompiler_47.D3DDisassemble = GetProcAddress(d3dcompiler_47.dll, "D3DDisassemble");
	d3dcompiler_47.D3DDisassemble10Effect = GetProcAddress(d3dcompiler_47.dll, "D3DDisassemble10Effect");
	d3dcompiler_47.D3DDisassemble11Trace = GetProcAddress(d3dcompiler_47.dll, "D3DDisassemble11Trace");
	d3dcompiler_47.D3DDisassembleRegion = GetProcAddress(d3dcompiler_47.dll, "D3DDisassembleRegion");
	d3dcompiler_47.D3DGetBlobPart = GetProcAddress(d3dcompiler_47.dll, "D3DGetBlobPart");
	d3dcompiler_47.D3DGetDebugInfo = GetProcAddress(d3dcompiler_47.dll, "D3DGetDebugInfo");
	d3dcompiler_47.D3DGetInputAndOutputSignatureBlob = GetProcAddress(d3dcompiler_47.dll, "D3DGetInputAndOutputSignatureBlob");
	d3dcompiler_47.D3DGetInputSignatureBlob = GetProcAddress(d3dcompiler_47.dll, "D3DGetInputSignatureBlob");
	d3dcompiler_47.D3DGetOutputSignatureBlob = GetProcAddress(d3dcompiler_47.dll, "D3DGetOutputSignatureBlob");
	d3dcompiler_47.D3DGetTraceInstructionOffsets = GetProcAddress(d3dcompiler_47.dll, "D3DGetTraceInstructionOffsets");
	d3dcompiler_47.D3DLoadModule = GetProcAddress(d3dcompiler_47.dll, "D3DLoadModule");
	d3dcompiler_47.D3DPreprocess = GetProcAddress(d3dcompiler_47.dll, "D3DPreprocess");
	d3dcompiler_47.D3DReadFileToBlob = GetProcAddress(d3dcompiler_47.dll, "D3DReadFileToBlob");
	d3dcompiler_47.D3DReflect = GetProcAddress(d3dcompiler_47.dll, "D3DReflect");
	d3dcompiler_47.D3DReflectLibrary = GetProcAddress(d3dcompiler_47.dll, "D3DReflectLibrary");
	d3dcompiler_47.D3DReturnFailure1 = GetProcAddress(d3dcompiler_47.dll, "D3DReturnFailure1");
	d3dcompiler_47.D3DSetBlobPart = GetProcAddress(d3dcompiler_47.dll, "D3DSetBlobPart");
	d3dcompiler_47.D3DStripShader = GetProcAddress(d3dcompiler_47.dll, "D3DStripShader");
	d3dcompiler_47.D3DWriteBlobToFile = GetProcAddress(d3dcompiler_47.dll, "D3DWriteBlobToFile");
	d3dcompiler_47.DebugSetMute = GetProcAddress(d3dcompiler_47.dll, "DebugSetMute");
	return true;
}

bool unload_library_d3dcompiler_47() {
	FreeLibrary(d3dcompiler_47.dll);
	d3dcompiler_47.dll = nullptr;
	return true;
}

#else

bool load_library_d3dcompiler_47() {
	return false;
}

bool unload_library_d3dcompiler_47() {
	return false;
}

#endif