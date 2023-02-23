#include "pch.h"
#include "character_substitution.h"

#include "config.h"
#include "encoding.h"
#include "hooks.h"
#include "injector.h"

#pragma region Hooks

static BOOL __stdcall TextOutWHook(HDC hdc, int x, int y, LPCWSTR lpString, int c) {
	const auto& subst = uif::injector::instance().feature<uif::features::character_substitution>();
	
	std::wstring s = lpString;
	subst.substitute(s);

	if(subst.is_debugging_enabled())
	{
		std::wcout << lpString << L" => " << s << L"\n";
	}

	return TextOutW(hdc, x, y, s.c_str(), c);
}

static BOOL __stdcall TextOutAHook(HDC hdc, int x, int y, LPCSTR lpString, int c) {
	std::string truncated = lpString;
	truncated.resize(c);
	const auto s = encoding::shiftjis_to_utf16(truncated);
	return TextOutWHook(hdc, x, y, s.c_str(), static_cast<int>(s.length()));
}

static DWORD  __stdcall GetGlyphOutlineWHook(HDC hdc, UINT uChar, UINT fuFormat, LPGLYPHMETRICS lpgm, DWORD cjBuffer, LPVOID pvBuffer, MAT2* lpmat2)
{
	//std::wcout << std::setw(4) << std::hex << uChar << std::dec << std::setw(0) << ' ' << *reinterpret_cast<wchar_t*>(&uChar) << '\n';

	const auto& subst = uif::injector::instance().feature<uif::features::character_substitution>();
	const auto& map = subst.substitutions;

	const auto wChar = static_cast<wchar_t>(uChar);

	const auto it = map.find(wChar);
	if(it != map.end())
	{
		uChar = it->second;
	}

	return GetGlyphOutlineW(hdc, uChar, fuFormat, lpgm, cjBuffer, pvBuffer, lpmat2);
}

static DWORD __stdcall GetGlyphOutlineAHook(HDC hdc, UINT uChar, UINT fuFormat, LPGLYPHMETRICS lpgm, DWORD cjBuffer, LPVOID pvBuffer, MAT2* lpmat2)
{
	char a[3] = { 0 };
	if(uChar < 0x100)
	{
		a[0] = static_cast<char>(uChar);
	}
	else
	{
		a[0] = static_cast<char>(uChar >> 8);
		a[1] = static_cast<char>(uChar);
	}

	const auto s = encoding::shiftjis_to_utf16(a);

	return GetGlyphOutlineWHook(hdc, s[0], fuFormat, lpgm, cjBuffer, pvBuffer, lpmat2);
}

#pragma endregion

void uif::features::character_substitution::initialize()
{
	substitutions = std::map<wchar_t, wchar_t>();

	const std::string source = config().value("source_characters", "");
	const std::string target = config().value("target_characters", "");

	const std::wstring wsource = encoding::utf8_to_utf16(source);
	const std::wstring wtarget = encoding::utf8_to_utf16(target);

	const size_t substCount = std::min(wsource.length(), wtarget.length());
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

void uif::features::character_substitution::finalize()
{
	hooks::unhook_import(this, "TextOutA", TextOutAHook);
	hooks::unhook_import(this, "TextOutW", TextOutWHook);
	hooks::unhook_import(this, "GetGlyphOutlineA", GetGlyphOutlineAHook);
	hooks::unhook_import(this, "GetGlyphOutlineW", GetGlyphOutlineWHook);
}

void uif::features::character_substitution::substitute(wchar_t* text, int length) const
{
	if (!is_enabled()) return;

	for (int i = 0; i < length; ++i)
	{
		const wchar_t ch = text[i];
		if (ch == 0) break;

		const auto it = substitutions.find(ch);
		if (it != substitutions.end())
		{
			text[i] = it->second;
		}
	}
}

void uif::features::character_substitution::substitute(std::wstring& text) const
{
	substitute(text.data(), static_cast<int>(text.length()));
}
