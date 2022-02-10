#include "pch.h"
#include "character_substitution.h"

#include <codecvt>
#include <corecrt_io.h>

#include "encoding.h"
#include "hooks.h"

static BOOL __stdcall TextOutAHook(HDC hdc, int x, int y, LPCSTR lpString, int c) {
	const auto& character_substitution = uif::injector::instance().feature<uif::features::character_substitution>();
	if(character_substitution.enable)
	{
		const auto input = encoding::shiftjis_to_utf16(lpString);
		auto output = std::wstring(input.length() + 1, L'\0');

		const auto& map = character_substitution.substitutions;

		for(size_t i = 0; i < input.length(); ++i)
		{
			auto ch = input[i];
			auto it = map.find(ch);
			if(it != map.end())
			{
				output[i] = it->second;
			}
			else {
				output[i] = ch;
			}
		}

		return TextOutW(hdc, x, y, output.c_str(), c);
	}

	return TextOutA(hdc, x, y, lpString, c);
}

void uif::features::character_substitution::initialize()
{

	if (config().value("/character_substitution/enable"_json_pointer, false) == true)
	{
		std::cout << "Enabling character substitution" << std::endl;
		std::cout << "source: " << config().value("/character_substitution/source_characters"_json_pointer, "") << std::endl;
		std::cout << "target: " << config().value("/character_substitution/target_characters"_json_pointer, "") << std::endl;

		enable = true;
		substitutions = std::map<wchar_t, wchar_t>();

		const std::string source = config().value("/character_substitution/source_characters"_json_pointer, "");
		const std::string target = config().value("/character_substitution/target_characters"_json_pointer, "");

		const std::wstring wsource = encoding::utf8_to_utf16(source);
		const std::wstring wtarget = encoding::utf8_to_utf16(target);

		const size_t subst_count = min(wsource.length(), wtarget.length());
		for (size_t i = 0; i < subst_count; i++)
		{
			substitutions[wsource[i]] = wtarget[i];

			//auto utf8source = encoding::utf16_to_utf8(wstring(1, wsource[i]));
			//auto utf8target = encoding::utf16_to_utf8(wstring(1, wtarget[i]));
			//std::cout << "added substitution rule: " << utf8source << " -> " << utf8target << std::endl;
		}

		/*
		auto utf8 = source;
		auto utf16 = encoding::utf8_to_utf16(utf8);
		auto sjis = encoding::utf16_to_shiftjis(utf16);
		auto utf16again = encoding::shiftjis_to_utf16(sjis);
		auto utf8again = encoding::utf16_to_utf8(utf16again);

		utils::print_colored("utf8 from config file: ", FOREGROUND_GREEN | FOREGROUND_INTENSITY);
		std::cout << std::dec << utf8.length() << " chars\n";
		encoding::print_bytes(utf8);
		utils::print_colored("converted to utf16: ", FOREGROUND_GREEN | FOREGROUND_INTENSITY);
		std::cout << std::dec << utf16.length() << " wchars\n";
		encoding::print_bytes(utf16);
		utils::print_colored("converted to shift_jis: ", FOREGROUND_GREEN | FOREGROUND_INTENSITY);
		std::cout << std::dec << sjis.length() << " chars\n";
		encoding::print_bytes(sjis);
		utils::print_colored("converted back to utf16: ", FOREGROUND_GREEN | FOREGROUND_INTENSITY);
		std::cout << std::dec << utf16again.length() << " wchars\n";
		encoding::print_bytes(utf16again);
		utils::print_colored("converted back to utf8: ", FOREGROUND_GREEN | FOREGROUND_INTENSITY);
		std::cout << std::dec << utf8again.length() << " chars\n";
		encoding::print_bytes(utf8again);
		*/

		hooks::hook_import(this, "TextOutA", TextOutAHook);
	}
}

void uif::features::character_substitution::finalize()
{
	if(enable)
	{
		hooks::unhook_import(this, "TextOutA", TextOutAHook);
	}
}