#include "pch.h"

#ifdef UIF_LIB_VERSION

#include "injector.h"

struct {
	HMODULE dll;
	FARPROC GetFileVersionInfoA;
	FARPROC GetFileVersionInfoByHandle;
	FARPROC GetFileVersionInfoExA;
	FARPROC GetFileVersionInfoExW;
	FARPROC GetFileVersionInfoSizeA;
	FARPROC GetFileVersionInfoSizeExA;
	FARPROC GetFileVersionInfoSizeExW;
	FARPROC GetFileVersionInfoSizeW;
	FARPROC GetFileVersionInfoW;
	FARPROC VerFindFileA;
	FARPROC VerFindFileW;
	FARPROC VerInstallFileA;
	FARPROC VerInstallFileW;
	FARPROC VerLanguageNameA;
	FARPROC VerLanguageNameW;
	FARPROC VerQueryValueA;
	FARPROC VerQueryValueW;
} version;

void lib_version_GetFileVersionInfoA() { version.GetFileVersionInfoA(); }
void lib_version_GetFileVersionInfoByHandle() { version.GetFileVersionInfoByHandle(); }
void lib_version_GetFileVersionInfoExA() { version.GetFileVersionInfoExA(); }
void lib_version_GetFileVersionInfoExW() { version.GetFileVersionInfoExW(); }
void lib_version_GetFileVersionInfoSizeA() { version.GetFileVersionInfoSizeA(); }
void lib_version_GetFileVersionInfoSizeExA() { version.GetFileVersionInfoSizeExA(); }
void lib_version_GetFileVersionInfoSizeExW() { version.GetFileVersionInfoSizeExW(); }
void lib_version_GetFileVersionInfoSizeW() { version.GetFileVersionInfoSizeW(); }
void lib_version_GetFileVersionInfoW() { version.GetFileVersionInfoW(); }
void lib_version_VerFindFileA() { version.VerFindFileA(); }
void lib_version_VerFindFileW() { version.VerFindFileW(); }
void lib_version_VerInstallFileA() { version.VerInstallFileA(); }
void lib_version_VerInstallFileW() { version.VerInstallFileW(); }
void lib_version_VerLanguageNameA() { version.VerLanguageNameA(); }
void lib_version_VerLanguageNameW() { version.VerLanguageNameW(); }
void lib_version_VerQueryValueA() { version.VerQueryValueA(); }
void lib_version_VerQueryValueW() { version.VerQueryValueW(); }

bool load_library_version() {
	version.dll = uif::injector::instance().load_real_library("version.dll");
	version.GetFileVersionInfoA = GetProcAddress(version.dll, "GetFileVersionInfoA");
	version.GetFileVersionInfoByHandle = GetProcAddress(version.dll, "GetFileVersionInfoByHandle");
	version.GetFileVersionInfoExA = GetProcAddress(version.dll, "GetFileVersionInfoExA");
	version.GetFileVersionInfoExW = GetProcAddress(version.dll, "GetFileVersionInfoExW");
	version.GetFileVersionInfoSizeA = GetProcAddress(version.dll, "GetFileVersionInfoSizeA");
	version.GetFileVersionInfoSizeExA = GetProcAddress(version.dll, "GetFileVersionInfoSizeExA");
	version.GetFileVersionInfoSizeExW = GetProcAddress(version.dll, "GetFileVersionInfoSizeExW");
	version.GetFileVersionInfoSizeW = GetProcAddress(version.dll, "GetFileVersionInfoSizeW");
	version.GetFileVersionInfoW = GetProcAddress(version.dll, "GetFileVersionInfoW");
	version.VerFindFileA = GetProcAddress(version.dll, "VerFindFileA");
	version.VerFindFileW = GetProcAddress(version.dll, "VerFindFileW");
	version.VerInstallFileA = GetProcAddress(version.dll, "VerInstallFileA");
	version.VerInstallFileW = GetProcAddress(version.dll, "VerInstallFileW");
	version.VerLanguageNameA = GetProcAddress(version.dll, "VerLanguageNameA");
	version.VerLanguageNameW = GetProcAddress(version.dll, "VerLanguageNameW");
	version.VerQueryValueA = GetProcAddress(version.dll, "VerQueryValueA");
	version.VerQueryValueW = GetProcAddress(version.dll, "VerQueryValueW");
	return true;
}

bool unload_library_version() {
	FreeLibrary(version.dll);
	version.dll = nullptr;
	return true;
}

#else

bool load_library_version() {
	return false;
}

bool unload_library_version() {
	return false;
}

#endif
