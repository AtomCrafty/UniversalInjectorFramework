#include "pch.h"

using string = std::string;
using wstring = std::wstring;

namespace encoding
{
	constexpr int CP_SHIFTJIS = 932;

	static wstring to_widechar(const string& text, int codepage) {
		const int numBytes = static_cast<int>(text.length());
		const int numChars = MultiByteToWideChar(codepage, 0, text.c_str(), numBytes, nullptr, 0);

		wstring result;
		result.resize(numChars);
		MultiByteToWideChar(codepage, 0, text.c_str(), numBytes, result.data(), numChars);

		return result;
	}

	static string to_multibyte(const wstring& text, int codepage) {
		const int numChars = text.length();
		const int numBytes = WideCharToMultiByte(codepage, 0, text.c_str(), numChars, nullptr, 0, nullptr, nullptr);

		string result;
		result.resize(numBytes);
		WideCharToMultiByte(codepage, 0, text.c_str(), numChars, result.data(), numBytes, nullptr, nullptr);

		return result;
	}

	wstring shiftjis_to_utf16(const string& shift_jis)
	{
		return to_widechar(shift_jis, CP_SHIFTJIS);
	}

	string utf16_to_shiftjis(const wstring& utf16)
	{
		return to_multibyte(utf16, CP_SHIFTJIS);
	}

	wstring utf8_to_utf16(const string& utf8)
	{
		return to_widechar(utf8, CP_UTF8);
	}

	string utf16_to_utf8(const wstring& utf16)
	{
		return to_multibyte(utf16, CP_UTF8);
	}

	void print_bytes(const string& str)
	{
		for (const auto c : str)
		{
			std::cout << std::setw(2) << std::hex << (static_cast<unsigned>(c) & 0xFF) << ' ';
		}
		std::cout << std::endl;
	}

	void print_bytes(const wstring& str)
	{
		for (const auto c : str)
		{
			std::cout << std::setw(2) << std::hex << (static_cast<unsigned>(c) & 0xFF) << (static_cast<unsigned>(c) >> 8 & 0xFF) << ' ';
		}
		std::cout << std::endl;
	}
}
