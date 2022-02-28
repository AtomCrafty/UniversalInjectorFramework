#include "pch.h"
#include "character_substitution.h"

#include <codecvt>
#include <corecrt_io.h>

#include "encoding.h"
#include "hooks.h"

static BOOL __stdcall TextOutWHook(HDC hdc, int x, int y, LPCWSTR lpString, int c) {
	const auto& subst = uif::injector::instance().feature<uif::features::character_substitution>();
	const auto& map = subst.substitutions;

	std::wstring s = lpString;

	for(wchar_t& ch : s)
	{
		const auto it = map.find(ch);
		if(it != map.end())
		{
			ch = it->second;
		}
	}

	return TextOutW(hdc, x, y, s.c_str(), static_cast<int>(s.length()));
}

static BOOL __stdcall TextOutAHook(HDC hdc, int x, int y, LPCSTR lpString, int c) {
	const auto s = encoding::shiftjis_to_utf16(lpString);
	return TextOutWHook(hdc, x, y, s.c_str(), static_cast<int>(s.length()));
}

static DWORD  __stdcall GetGlyphOutlineWHook(HDC hdc, UINT uChar, UINT fuFormat, LPGLYPHMETRICS lpgm, DWORD cjBuffer, LPVOID pvBuffer, MAT2* lpmat2)
{
	const auto& subst = uif::injector::instance().feature<uif::features::character_substitution>();
	const auto& map = subst.substitutions;

	const auto it = map.find(static_cast<wchar_t>(uChar));
	if(it != map.end())
	{
		uChar = it->second;
	}

	return GetGlyphOutlineW(hdc, uChar, fuFormat, lpgm, cjBuffer, pvBuffer, lpmat2);
}

static DWORD __stdcall GetGlyphOutlineAHook(HDC hdc, UINT uChar, UINT fuFormat, LPGLYPHMETRICS lpgm, DWORD cjBuffer, LPVOID pvBuffer, MAT2* lpmat2) {
	const char a[3] = { static_cast<char>(uChar), static_cast<char>(uChar >> 8), 0 };
	const auto s = encoding::shiftjis_to_utf16(a);
	return GetGlyphOutlineWHook(hdc, s[0], fuFormat, lpgm, cjBuffer, pvBuffer, lpmat2);
}

void uif::features::character_substitution::initialize()
{

	if(config().value("/character_substitution/enable"_json_pointer, false) == true)
	{
		//std::cout << *this << " source: " << config().value("/character_substitution/source_characters"_json_pointer, "") << '\n';
		//std::cout << *this << " target: " << config().value("/character_substitution/target_characters"_json_pointer, "") << '\n';

		enable = true;
		substitutions = std::map<wchar_t, wchar_t>();

		const std::string source = config().value("/character_substitution/source_characters"_json_pointer, "");
		const std::string target = config().value("/character_substitution/target_characters"_json_pointer, "");

		const std::wstring wsource = encoding::utf8_to_utf16(source);
		const std::wstring wtarget = encoding::utf8_to_utf16(target);

		const size_t substCount = min(wsource.length(), wtarget.length());
		for(size_t i = 0; i < substCount; i++)
		{
			substitutions[wsource[i]] = wtarget[i];
		}

		std::cout << *this << " Loaded " << substCount << " substitution characters\n";

		hooks::hook_import(this, "TextOutA", TextOutAHook);
		hooks::hook_import(this, "TextOutW", TextOutWHook);
		hooks::hook_import(this, "GetGlyphOutlineA", GetGlyphOutlineAHook);
		hooks::hook_import(this, "GetGlyphOutlineW", GetGlyphOutlineWHook);
	}
}

void uif::features::character_substitution::finalize()
{
	if(enable)
	{
		hooks::unhook_import(this, "TextOutA", TextOutAHook);
		hooks::unhook_import(this, "TextOutW", TextOutWHook);
		hooks::unhook_import(this, "GetGlyphOutlineA", GetGlyphOutlineAHook);
		hooks::unhook_import(this, "GetGlyphOutlineW", GetGlyphOutlineWHook);
	}
}