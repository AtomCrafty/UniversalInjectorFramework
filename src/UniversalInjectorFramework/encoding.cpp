#include "pch.h"

#include "encoding.h"

using string = std::string;
using wstring = std::wstring;

namespace encoding
{
	wstring to_widechar(const string& text, int codepage) {
		const int numBytes = static_cast<int>(text.length());
		const int numChars = MultiByteToWideChar(codepage, 0, text.c_str(), numBytes, nullptr, 0);

		wstring result;
		result.resize(numChars);
		MultiByteToWideChar(codepage, 0, text.c_str(), numBytes, result.data(), numChars);

		return result;
	}

	string to_multibyte(const wstring& text, int codepage) {
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

	// shift-jis tunnel decoder logic courtesy of https://github.com/arcusmaximus
	std::wstring decode_shiftjis_tunnel(const char* text, int count, const std::wstring& mapping)
	{
		std::wstring result;
		if (text == nullptr)
			return result;

		if (count < 0)
			count = strlen(text);

		int charIdx = 0;
		while (charIdx < count)
		{
			const BYTE highByte = text[charIdx++];
			BYTE lowByte = 0;

			if ((highByte >= 0x81 && highByte < 0xA0) || (highByte >= 0xE0 && highByte < 0xFD))
			{
				const int highIdx = highByte < 0xA0 ? highByte - 0x81 : 0x1F + (highByte - 0xE0);

				lowByte = text[charIdx++];
				if (lowByte == 0)
					break;

				if (lowByte < 0x40)
				{
					int lowIdx = lowByte;
					if (lowIdx > ',')
						lowIdx--;
					if (lowIdx > ' ')
						lowIdx--;
					if (lowIdx > '\r')
						lowIdx--;
					if (lowIdx > '\n')
						lowIdx--;
					if (lowIdx > '\t')
						lowIdx--;

					lowIdx--;

					const size_t index = highIdx * 0x3A + lowIdx;

					if (index < mapping.length())
						result += mapping[index];
					else
						std::cout << " No mapping defined for tunnel index " << index << '\n';

					continue;
				}
			}

			const int charLength = lowByte == 0 ? 1 : 2;
			wchar_t wc;
			MultiByteToWideChar(CP_SHIFTJIS, 0, text + charIdx - charLength, charLength, &wc, 1);
			result += wc;
		}

		assert(charIdx == count);

		return result;
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
