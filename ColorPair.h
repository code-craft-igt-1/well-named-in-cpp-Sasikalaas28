#pragma once
#include <iostream>
#ifndef TELE_CO_COLOR_CODER_H
#define TELE_CO_COLOR_CODER_H
namespace TelCoColorCoder
{
	enum class MajorColor {
		WHITE = 0, RED, BLACK, YELLOW, VIOLET,
		/// Not a valid value; this is the number of members in this enum
		_COUNT,
		// helpers for iterating over the enum
		begin = 0,
		end = _COUNT,
	};
	enum class MinorColor {
		BLUE = 0, ORANGE, GREEN, BROWN, SLATE,
		/// Not a valid value; this is the number of members in this enum
		_COUNT,
		// helpers for iterating over the enum
		begin = 0,
		end = _COUNT,
	};
	extern int numberOfMinorColors;
	extern int numberOfMajorColors;
	class ColorPair {
	private:
		MajorColor majorColor;
		MinorColor minorColor;
	public:
		ColorPair(MajorColor major, MinorColor minor);
		MajorColor getMajorColor();
		MinorColor getMinorColor();
		std::string ColorPairToString();
	};
}
#endif // !TELE_CO_COLOR_CODER_H