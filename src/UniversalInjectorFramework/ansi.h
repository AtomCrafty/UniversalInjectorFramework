#pragma once

#ifndef UIF_ANSI_COLOR
#define UIF_ANSI_COLOR 1
#endif

namespace uif::ansi
{
	enum class color : char
	{
		none = -1,

		dark_black = 0,
		dark_red = 1,
		dark_green = 2,
		dark_yellow = 3,
		dark_blue = 4,
		dark_magenta = 5,
		dark_cyan = 6,
		dark_white = 7,

		black = 8,
		red = 9,
		green = 10,
		yellow = 11,
		blue = 12,
		magenta = 13,
		cyan = 14,
		white = 15
	};

	static const char* fg_ansi_codes[] = {
		"\33[30m", "\33[31m", "\33[32m", "\33[33m",
		"\33[34m", "\33[35m", "\33[36m", "\33[37m",
		"\33[30;1m", "\33[31;1m", "\33[32;1m", "\33[33;1m",
		"\33[34;1m", "\33[35;1m", "\33[36;1m", "\33[37;1m",
	};

	static const char* bg_ansi_codes[] = {
		"\33[40m", "\33[41m", "\33[42m", "\33[43m",
		"\33[44m", "\33[45m", "\33[46m", "\33[47m",
		"\33[40;1m", "\33[41;1m", "\33[42;1m", "\33[43;1m",
		"\33[44;1m", "\33[45;1m", "\33[46;1m", "\33[47;1m",
	};

	template<typename T, color fg, color bg>
	struct colored_thing { T thing; };

#if UIF_ANSI_COLOR
#define COLOR_TEMPLATES(col) \
	template<typename T> colored_thing<T, color::col, color::none> col(T t) { return { t }; } \
	template<typename T> colored_thing<T, color::none, color::col> col ##_bg(T t) { return { t }; }
#else
#define COLOR_TEMPLATES(col) \
	template<typename T> T col(T t) { return t; } \
	template<typename T> T col ##_bg(T t) { return t; }
#endif

	COLOR_TEMPLATES(black);
	COLOR_TEMPLATES(red);
	COLOR_TEMPLATES(green);
	COLOR_TEMPLATES(yellow);
	COLOR_TEMPLATES(blue);
	COLOR_TEMPLATES(magenta);
	COLOR_TEMPLATES(cyan);
	COLOR_TEMPLATES(white);

	COLOR_TEMPLATES(dark_black);
	COLOR_TEMPLATES(dark_red);
	COLOR_TEMPLATES(dark_green);
	COLOR_TEMPLATES(dark_yellow);
	COLOR_TEMPLATES(dark_blue);
	COLOR_TEMPLATES(dark_magenta);
	COLOR_TEMPLATES(dark_cyan);
	COLOR_TEMPLATES(dark_white);

	template<typename T, color fg, color bg>
	std::ostream& operator<<(std::ostream& os, const colored_thing<T, fg, bg> colored)
	{
		if(fg != color::none)
			os << fg_ansi_codes[static_cast<int>(fg)];

		if(bg != color::none)
			os << bg_ansi_codes[static_cast<int>(bg)];

		os << colored.thing;

		if(fg != color::none || bg != color::none)
			os << "\033[0m";

		return os;
	}

	template<typename T, color fg, color bg>
	std::wostream& operator<<(std::wostream& os, const colored_thing<T, fg, bg> colored)
	{
		if(fg != color::none)
			os << fg_ansi_codes[static_cast<int>(fg)];

		if(bg != color::none)
			os << bg_ansi_codes[static_cast<int>(bg)];

		os << colored.thing;

		if(fg != color::none || bg != color::none)
			os << "\033[0m";

		return os;
	}
}
