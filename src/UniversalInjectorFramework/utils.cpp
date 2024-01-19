#include "pch.h"
#include "utils.h"

#include <iostream>
#include <fcntl.h>

#include "ansi.h"
#include "encoding.h"
#include "injector.h"
#include "features/character_substitution.h"
#include "features/tunnel_decoder.h"

using namespace uif::ansi;

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

	void patch_memory(void* address, const void* data, size_t size, void* oldDataBuffer)
	{
		DWORD origProtect;
		VirtualProtect(address, size, PAGE_READWRITE, &origProtect);
		if(oldDataBuffer) memcpy(oldDataBuffer, address, size);
		memcpy(address, data, size);
		VirtualProtect(address, size, origProtect, &origProtect);
	}

	void patch_address(void** patchAddress, void* patchValue)
	{
		DWORD origProtect;
		VirtualProtect(patchAddress, sizeof(patchValue), PAGE_READWRITE, &origProtect);
		*patchAddress = patchValue;
		VirtualProtect(patchAddress, sizeof(patchValue), origProtect, &origProtect);
	}

	void* parse_address(const nlohmann::json& json)
	{
		if(json.is_string())
			return parse_address(json.get<std::string>());

		if(json.is_number_integer())
			return reinterpret_cast<void*>(json.get<uintptr_t>());

		std::cout << white("[injector]") << dark_red(" Error:") <<
			" Failed to parse address " << blue('<') << blue(json.type_name()) << blue('>') << ": invalid json type\n";

		return nullptr;
	}

	void* parse_address(const std::string& string)
	{
		const bool isHex = string.ends_with('h') || string.ends_with('H');
		const size_t offsetStartIndex = string.find_last_of('+') + 1;
		const std::string offsetString = string.substr(offsetStartIndex, string.length() - offsetStartIndex - isHex);

		uintptr_t address = std::stoul(offsetString, nullptr, isHex ? 16 : 10);

		if(offsetStartIndex != 0)
		{
			const std::string moduleName = string.substr(0, offsetStartIndex - 1);
			const HMODULE hModule = GetModuleHandleA(moduleName.c_str());
			if(!hModule)
			{
				std::cout << white("[injector]") << dark_red(" Error:") <<
					" Failed to parse address " << blue(string) << ": unable to resolve module " << yellow(moduleName) << '\n';
				return nullptr;
			}

			address += reinterpret_cast<uintptr_t>(hModule);
		}

		return reinterpret_cast<void*>(address);
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

	std::string get_module_name(HMODULE hModule)
	{
		char dllNameBuffer[MAX_PATH];
		if(GetModuleFileNameA(hModule, dllNameBuffer, MAX_PATH) == 0)
			return "<unknown>";
		const char* dllName = strrchr(dllNameBuffer, '\\');
		if (dllName == nullptr) dllName = dllNameBuffer;
		else dllName++;
		return dllName;
	}

	// https://stackoverflow.com/a/17387176/7391324
	std::string get_last_error_message(DWORD error)
	{
		if (error == 0) error = GetLastError();
		if (error == 0) return "No error";

		LPSTR messageBuffer = nullptr;
		
		const size_t size = FormatMessageA(FORMAT_MESSAGE_ALLOCATE_BUFFER | FORMAT_MESSAGE_FROM_SYSTEM | FORMAT_MESSAGE_IGNORE_INSERTS,
			nullptr, error, MAKELANGID(LANG_ENGLISH, SUBLANG_DEFAULT), reinterpret_cast<LPSTR>(&messageBuffer), 0, nullptr);
		
		std::string message(messageBuffer, size);
		message.erase(std::find_if(message.rbegin(), message.rend(), [](unsigned char ch) { return !std::isspace(ch) && ch != '.'; }).base(), message.end());
		
		LocalFree(messageBuffer);

		return message;
	}

	void normalize(std::wstring& text)
	{
		const auto* substitution = injector::instance().try_get_feature<features::character_substitution>();

		if (substitution && substitution->is_enabled())
		{
			substitution->substitute(text);
		}
	}
	
	std::wstring normalize(const std::string& text)
	{
		const auto* decoder = injector::instance().try_get_feature<features::tunnel_decoder>();

		std::wstring wide;
		if (decoder && decoder->is_enabled())
		{
			wide = encoding::decode_shiftjis_tunnel(text.c_str(), static_cast<int>(text.length()), decoder->mapping);
		}
		else
		{
			wide = encoding::shiftjis_to_utf16(text);
		}

		normalize(wide);
		return wide;
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

	[[noreturn]]
	void fail(const std::string& reason)
	{
		MessageBoxA(nullptr, reason.c_str(), "Universal Injector", MB_OK | MB_ICONERROR);
		ExitProcess(-1);
	}
}
