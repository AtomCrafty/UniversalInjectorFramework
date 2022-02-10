#pragma once

#include <filesystem>

namespace uif::utils {
	bool file_exists(const wchar_t* path);
	bool file_create_new(const wchar_t* path, const char* content, size_t length);
	std::filesystem::path get_dll_path();
	WORD set_console_color(WORD color);
	void print_colored(const char* text, WORD color);
	void patch_protected(void** patchAddress, void* patchValue);
	void alloc_console();
	void focus_console();
	[[noreturn]] void fail(const std::string& reason);
}
