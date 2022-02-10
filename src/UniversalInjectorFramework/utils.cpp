#include "pch.h"
#include "utils.h"
#include <iostream>
#include <fcntl.h>

namespace uif::utils
{
	bool file_exists(const wchar_t* path)
	{
		const auto attributes = GetFileAttributes(path);
		return attributes != INVALID_FILE_ATTRIBUTES &&
			!(attributes & FILE_ATTRIBUTE_DIRECTORY);
	}

	bool file_create_new(const wchar_t* path, const char* content, size_t length)
	{
		if(file_exists(path))
			return false;

		auto* const handle = CreateFile(path, GENERIC_WRITE, NULL, nullptr, CREATE_ALWAYS, NULL, nullptr);
		while(length > 0) {
			DWORD written;
			if(!WriteFile(handle, content, static_cast<DWORD>(length), &written, nullptr))
				return false;
			content += written;
			length -= written;
		}

		CloseHandle(handle);
		return true;
	}

	void patch_protected(void** patchAddress, void* patchValue)
	{
		DWORD origProtect;
		VirtualProtect(patchAddress, sizeof(patchValue), PAGE_READWRITE, &origProtect);
		*patchAddress = patchValue;
		VirtualProtect(patchAddress, sizeof(patchValue), origProtect, &origProtect);
	}

	void alloc_console()
	{
		// try to reuse the existing console
		if(!AttachConsole(ATTACH_PARENT_PROCESS))
		{
			if(!AllocConsole())
			{
				fail("Failed to allocate console.");
			}
		}
		SetConsoleOutputCP(65001);

		FILE* _;
		freopen_s(&_, "CONOUT$", "w", stdout);
		freopen_s(&_, "CONOUT$", "w", stderr);
		freopen_s(&_, "CONIN$", "r", stdin);
		std::cout.clear();
		std::clog.clear();
		std::cerr.clear();
		std::cin.clear();

		// this does not seem to work :/
		//HANDLE hConOut = CreateFile(L"CONOUT$", GENERIC_READ | GENERIC_WRITE, FILE_SHARE_READ | FILE_SHARE_WRITE, NULL, OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, NULL);
		//HANDLE hConIn = CreateFile(L"CONIN$", GENERIC_READ | GENERIC_WRITE, FILE_SHARE_READ | FILE_SHARE_WRITE, NULL, OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, NULL);
		//SetStdHandle(STD_OUTPUT_HANDLE, hConOut);
		//SetStdHandle(STD_ERROR_HANDLE, hConOut);
		//SetStdHandle(STD_INPUT_HANDLE, hConIn);
		//std::wcout.clear();
		//std::wclog.clear();
		//std::wcerr.clear();
		//std::wcin.clear();
	}

	std::filesystem::path get_dll_path()
	{
		TCHAR path[MAX_PATH];
		HMODULE hm = nullptr;

		GetModuleHandleEx(GET_MODULE_HANDLE_EX_FLAG_FROM_ADDRESS |
			GET_MODULE_HANDLE_EX_FLAG_UNCHANGED_REFCOUNT,
			reinterpret_cast<LPCWSTR>(&get_dll_path), &hm);

		GetModuleFileName(hm, path, MAX_PATH);

		return { path };
	}

	WORD set_console_color(const WORD color)
	{
		CONSOLE_SCREEN_BUFFER_INFO info;
		auto* const hStdout = GetStdHandle(STD_OUTPUT_HANDLE);
		GetConsoleScreenBufferInfo(hStdout, &info);
		SetConsoleTextAttribute(hStdout, color);
		return info.wAttributes;
	}

	void print_colored(const char* text, const WORD color)
	{
		const auto prev = set_console_color(color);
		std::cout << text;
		set_console_color(prev);
	}

	void focus_console()
	{
		auto* const window = GetConsoleWindow();
		if(window == nullptr) return;
		SetForegroundWindow(window);
	}

	[[noreturn]]
	void fail(const std::string& reason)
	{
		MessageBoxA(nullptr, reason.c_str(), "Universal Injector", MB_OK | MB_ICONERROR);
		exit(-1);
	}
}
