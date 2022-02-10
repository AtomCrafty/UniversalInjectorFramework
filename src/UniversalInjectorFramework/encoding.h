#pragma once

namespace encoding
{
	std::wstring shiftjis_to_utf16(const std::string& shift_jis);
	std::string utf16_to_shiftjis(const std::wstring& utf16);
	std::wstring utf8_to_utf16(const std::string& utf8);
	std::string utf16_to_utf8(const std::wstring& utf16);

	void print_bytes(const std::string& str);
	void print_bytes(const std::wstring& str);
}

