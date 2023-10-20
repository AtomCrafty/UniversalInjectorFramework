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
	const auto& decoder = uif::injector::instance().feature<uif::features::tunnel_decoder>();
	const auto& decoded = encoding::decode_shiftjis_tunnel(lpString, c, decoder.mapping);

	constexpr int offset = 2;
	/*
	SetBkMode(hdc, TRANSPARENT);

	SIZE size;
	GetTextExtentPoint32W(hdc, decoded.c_str(), static_cast<int>(decoded.length()), &size);

	int width = 4;
	RECT rect{ x + offset, y, x + size.cx + offset - 1, y + size.cy - 1 };
	do {
		FrameRect(hdc, &rect, static_cast<HBRUSH>(GetStockObject(BLACK_BRUSH)));
		rect.left++;
		rect.top++;
		rect.right--;
		rect.bottom--;
	} while (width-- > 0);
	*/

	// offset everything the right in order to avoid the clipping issue with the j character
	// the glyph extends further left than the current cursor position, which the engine does not account for
	return TextOutW(hdc, x + offset, y, decoded.c_str(), static_cast<int>(decoded.length()));
}

int __stdcall MultiByteToWideCharHook(UINT CodePage, DWORD dwFlags, LPCCH lpMultiByteStr, int cbMultiByte, LPWSTR lpWideCharStr, int cchWideChar)
{
	const auto& decoder = uif::injector::instance().feature<uif::features::tunnel_decoder>();
	const auto& decoded = encoding::decode_shiftjis_tunnel(lpMultiByteStr, cbMultiByte, decoder.mapping);

	const int decodedCount = static_cast<int>(cbMultiByte < 0 ? decoded.length() + 1 : decoded.length());
	if (decodedCount > cchWideChar)
		return 0;

	wcscpy_s(lpWideCharStr, cchWideChar, decoded.c_str());
	return decodedCount;
}

int __stdcall GetTextExtentPoint32AHook(HDC hdc, LPCSTR lpString, int c, LPSIZE psizl)
{
	const auto& decoder = uif::injector::instance().feature<uif::features::tunnel_decoder>();
	const auto& decoded = encoding::decode_shiftjis_tunnel(lpString, c, decoder.mapping);

	return GetTextExtentPoint32W(hdc, decoded.c_str(), static_cast<int>(decoded.size()), psizl);
}

int __stdcall IsDBCSLeadByteExHook(UINT CodePage, BYTE TestChar)
{
	return IsDBCSLeadByteEx(932, TestChar);
}

int __stdcall IsDBCSLeadByteHook(BYTE TestChar)
{
	return IsDBCSLeadByteEx(932, TestChar);
}

void uif::features::tunnel_decoder::initialize()
{
	if (!config()["mapping"].is_string())
	{
		std::cout << *this << dark_red(" Error:") << " no mapping specified, disabling tunnel decoder\n";
		_enabled = false;
		return;
	}

	mapping = encoding::utf8_to_utf16(config()["mapping"].get<std::string>());
	std::cout << *this << " Loaded " << mapping.length() << " mapping characters\n";

	hooks::hook_import(this, "TextOutA", TextOutAHook);
	hooks::hook_import(this, "MultiByteToWideChar", MultiByteToWideCharHook);
	hooks::hook_import(this, "GetTextExtentPoint32A", GetTextExtentPoint32AHook);
	hooks::hook_import(this, "IsDBCSLeadByteEx", IsDBCSLeadByteExHook);
	hooks::hook_import(this, "IsDBCSLeadByte", IsDBCSLeadByteHook);
}

void uif::features::tunnel_decoder::finalize()
{
	hooks::unhook_import(this, "TextOutA", TextOutAHook);
	hooks::unhook_import(this, "MultiByteToWideChar", MultiByteToWideCharHook);
	hooks::unhook_import(this, "GetTextExtentPoint32A", GetTextExtentPoint32AHook);
	hooks::unhook_import(this, "IsDBCSLeadByteEx", IsDBCSLeadByteExHook);
	hooks::unhook_import(this, "IsDBCSLeadByte", IsDBCSLeadByteHook);
}