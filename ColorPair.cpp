#include "ColorPair.h"
namespace TelCoColorCoder {
	const char* MajorColorNames[] = {
		"White", "Red", "Black", "Yellow", "Violet"
	};
	int numberOfMajorColors =
		sizeof(MajorColorNames) / sizeof(MajorColorNames[0]);
	const char* MinorColorNames[] = {
		 "Blue", "Orange", "Green", "Brown", "Slate"
	};
	int numberOfMinorColors =
		sizeof(MinorColorNames) / sizeof(MinorColorNames[0]);

	ColorPair::ColorPair(MajorColor major, MinorColor minor) :
		majorColor(major), minorColor(minor)
	{
	}
	MajorColor ColorPair::getMajorColor() {
		return majorColor;
	}
	MinorColor ColorPair::getMinorColor() {
		return minorColor;
	}
	std::string ColorPair::ColorPairToString() {

		std::string colorPairStr = MajorColorNames[static_cast<int>(majorColor)];
		colorPairStr += " ";
		colorPairStr += MinorColorNames[static_cast<int>(minorColor)];
		return colorPairStr;
	}
}