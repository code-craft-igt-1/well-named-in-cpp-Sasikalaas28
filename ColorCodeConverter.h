#pragma once
#include "ColorPair.h"
#ifndef COLOR_CODE_CONVERTER_H
#define COLOR_CODE_CONVERTER_H
class ColorCodeConverter {
public:
	static TelCoColorCoder::ColorPair GetColorFromPairNumber(int pairNumber);
	static int GetPairNumberFromColor(TelCoColorCoder::MajorColor major, TelCoColorCoder::MinorColor minor);
	static void PrintAllColorPairsWithNumber();
};

#endif // !COLOR_CODE_CONVERTER_H
