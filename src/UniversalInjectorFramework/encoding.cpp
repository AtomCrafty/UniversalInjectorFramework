#include "pch.h"

#include <codecvt>
#include <locale>

using string = std::string;
using wstring = std::wstring;

namespace encoding
{
	typedef std::codecvt<wchar_t, char, std::mbstate_t> cvt_t;
	static std::locale locale_utf8 = std::locale(".UTF-8");
	static std::locale locale_sjis = std::locale(".932");
	const auto& utf8_converter = std::use_facet<cvt_t>(locale_utf8);
	const auto& sjis_converter = std::use_facet<cvt_t>(locale_sjis);

	wstring shiftjis_to_utf16(const string& shift_jis)
	{
		const auto& external = shift_jis;
		auto internal = wstring(shift_jis.size() * 4, '\0');

		auto mbstate = std::mbstate_t();
		const char* external_next;
		wchar_t* internal_next;

		const auto result = sjis_converter.in(mbstate,
			&external[0], &external[external.size()], external_next,
			&internal[0], &internal[internal.size()], internal_next);

		if(result != std::codecvt_base::ok)
			throw std::runtime_error("failed to convert between encodings");

		internal.resize(internal_next - &internal[0]);
		return internal;
	}

	string utf16_to_shiftjis(const wstring& utf16)
	{
		auto external = string(utf16.size() * 4, '\0');
		const auto& internal = utf16;

		auto mbstate = std::mbstate_t();
		char* external_next;
		const wchar_t* internal_next;

		const auto result = sjis_converter.out(mbstate,
			&internal[0], &internal[internal.size()], internal_next,
			&external[0], &external[external.size()], external_next);

		if(result != std::codecvt_base::ok)
			throw std::runtime_error("failed to convert between encodings");

		external.resize(external_next - &external[0]);
		return external;
	}

	wstring utf8_to_utf16(const string& utf8)
	{
		const auto& external = utf8;
		auto internal = wstring(utf8.size() * 2, '\0');

		auto mbstate = std::mbstate_t();
		const char* external_next;
		wchar_t* internal_next;

		const auto result = utf8_converter.in(mbstate,
			&external[0], &external[external.size()], external_next,
			&internal[0], &internal[internal.size()], internal_next);

		if(result != std::codecvt_base::ok)
			throw std::runtime_error("failed to convert between encodings");

		internal.resize(internal_next - &internal[0]);
		return internal;
	}

	string utf16_to_utf8(const wstring& utf16)
	{
		auto external = string(utf16.size() * 4, '\0');
		const auto& internal = utf16;

		auto mbstate = std::mbstate_t();
		char* external_next;
		const wchar_t* internal_next;

		const auto result = utf8_converter.out(mbstate,
			&internal[0], &internal[internal.size()], internal_next,
			&external[0], &external[external.size()], external_next);

		if(result != std::codecvt_base::ok)
			throw std::runtime_error("failed to convert between encodings");

		external.resize(external_next - &external[0]);
		return external;
	}

	void print_bytes(const string& str)
	{
		for (auto c : str)
		{
			std::cout << std::setw(2) << std::hex << (static_cast<unsigned>(c) & 0xFF) << ' ';
		}
		std::cout << std::endl;
	}

	void print_bytes(const wstring& str)
	{
		for (auto c : str)
		{
			std::cout << std::setw(2) << std::hex << (static_cast<unsigned>(c) & 0xFF) << (static_cast<unsigned>(c) >> 8 & 0xFF) << ' ';
		}
		std::cout << std::endl;
	}
}
