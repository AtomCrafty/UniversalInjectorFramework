#pragma once

#include <filesystem>

#ifndef DEBUG_LOG
#define DEBUG_LOG 0
#endif

#ifndef DEBUG_NOTIFY
#define DEBUG_NOTIFY 0
#endif

namespace uif::utils {
	bool file_exists(const wchar_t* path);
	bool file_create_new(const wchar_t* path, const char* content, size_t length);
	std::filesystem::path get_dll_path();
	std::string get_module_name(HMODULE hModule);
	std::string get_last_error_message(DWORD error = 0);
	void normalize(std::wstring& text);
	std::wstring normalize(const std::string& text);
	WORD set_console_color(WORD color);
	void print_colored(const char* text, WORD color);
	void patch_memory(void* address, const void* data, size_t size, void* oldDataBuffer);
	void patch_address(void** patchAddress, void* patchValue);
	void* parse_address(const nlohmann::json& json);
	void* parse_address(const std::string& string);
	[[noreturn]] void fail(const std::string& reason);

#pragma region Debug Logging
	// These are declared here in the hopes that the calls
	// will be omitted if the preprocessor symbols are false

	inline void debug_notify(const char* caption, const char* message, UINT type = MB_OK | MB_ICONINFORMATION)
	{
#if DEBUG_NOTIFY
		MessageBoxA(nullptr, message, caption, type);
#endif
	}

	static void debug_log_write(HANDLE file, const char* text)
	{
		const DWORD length = strlen(text);
		DWORD written = 0;
		const auto success = WriteFile(file, text, length, &written, nullptr);

		if (!success || written != length)
			fail("Failed to write to log file");
	}

	inline void debug_log(const char* message, bool terminate = true)
	{
#if DEBUG_LOG
		const auto file = CreateFileA("uif_log.log", FILE_APPEND_DATA, 0, nullptr, OPEN_ALWAYS, FILE_ATTRIBUTE_NORMAL, nullptr);
		if (file == INVALID_HANDLE_VALUE)
			fail("Failed to open log file");

		debug_log_write(file, message);
		if (terminate) debug_log_write(file, "\n");
		
		CloseHandle(file);
#endif
	}

	inline void debug_log_clear()
	{
#if DEBUG_LOG
		DeleteFileA("uif_log.log");
#endif
	}

#pragma endregion
}
