#include "pch.h"
#include "tunnel_decoder.h"

#include "ansi.h"
#include "config.h"
#include "encoding.h"
#include "hooks.h"
#include "injector.h"

using namespace uif::ansi;

BOOL __stdcall TextOutAHook(HDC hdc, int x, int y, LPCSTR lpString, int c)
{
	const auto& tunnelDecoder = uif::injector::instance().feature<uif::features::tunnel_decoder>();

	const std::wstring decoded = tunnelDecoder.decode(lpString, c);

	return TextOutW(hdc, x, y, decoded.c_str(), static_cast<int>(decoded.length()));
}

int __stdcall MultiByteToWideCharHook(UINT CodePage, DWORD dwFlags, LPCCH lpMultiByteStr, int cbMultiByte, LPWSTR lpWideCharStr, int cchWideChar)
{
	const auto& decoder = uif::injector::instance().feature<uif::features::tunnel_decoder>();
	const auto& decoded = decoder.decode(lpMultiByteStr, cbMultiByte);

	const int decodedCount = static_cast<int>(cbMultiByte < 0 ? decoded.length() + 1 : decoded.length());
	if(decodedCount > cchWideChar)
		return 0;

	wcscpy_s(lpWideCharStr, cchWideChar, decoded.c_str());
	return decodedCount;
}

void uif::features::tunnel_decoder::initialize()
{
	if(!config()["mapping"].is_string())
	{
		std::cout << *this << dark_red(" Error:") << " no mapping specified, disabling tunnel decoder\n";
		_enabled = false;
		return;
	}

	mapping = encoding::utf8_to_utf16(config()["mapping"].get<std::string>());
	std::cout << *this << " Loaded " << mapping.length() << " mapping characters\n";

	hooks::hook_import(this, "TextOutA", TextOutAHook);
	hooks::hook_import(this, "MultiByteToWideChar", MultiByteToWideCharHook);
}

void uif::features::tunnel_decoder::finalize()
{
	hooks::unhook_import(this, "TextOutA", TextOutAHook);
	hooks::unhook_import(this, "MultiByteToWideChar", MultiByteToWideCharHook);
}

// shift-jis tunnel decoder logic courtesy of https://github.com/arcusmaximus
std::wstring uif::features::tunnel_decoder::decode(const char* text, int count) const
{
	std::wstring result;
	if(text == nullptr)
		return result;

	int charIdx = 0;
	while(count < 0 ? text[charIdx] != '\0' : charIdx < count)
	{
		const BYTE highByte = text[charIdx++];
		BYTE lowByte = 0;

		if((highByte >= 0x81 && highByte < 0xA0) || (highByte >= 0xE0 && highByte < 0xFD))
		{
			const int highIdx = highByte < 0xA0 ? highByte - 0x81 : 0x1F + (highByte - 0xE0);

			lowByte = text[charIdx++];
			if(lowByte == 0)
				break;

			if(lowByte < 0x40)
			{
				int lowIdx = lowByte;
				if(lowIdx > ',')
					lowIdx--;
				if(lowIdx > ' ')
					lowIdx--;
				if(lowIdx > '\r')
					lowIdx--;
				if(lowIdx > '\n')
					lowIdx--;
				if(lowIdx > '\t')
					lowIdx--;

				lowIdx--;

				const size_t index = highIdx * 0x3A + lowIdx;

				if(index < mapping.length())
					result += mapping[index];
				else
					std::cout << *this << " No mapping defined for tunnel index " << index << '\n';

				continue;
			}
		}

		const int charLength = lowByte == 0 ? 1 : 2;
		wchar_t wc;
		MultiByteToWideChar(932, 0, text + charIdx - charLength, charLength, &wc, 1);
		result += wc;
	}
	return result;
}
