#include "ColorCodeConverter.h"
using namespace TelCoColorCoder;
ColorPair ColorCodeConverter::GetColorFromPairNumber(int pairNumber) {
	int zeroBasedPairNumber = pairNumber - 1;
	MajorColor majorColor = static_cast<MajorColor>(zeroBasedPairNumber / numberOfMinorColors);
	MinorColor minorColor = static_cast<MinorColor>(zeroBasedPairNumber % numberOfMinorColors);
	return ColorPair(majorColor, minorColor);
}
int ColorCodeConverter::GetPairNumberFromColor(MajorColor major, MinorColor minor) {
	return static_cast<int>(major) * numberOfMinorColors + static_cast<int>(minor) + 1;
}

void ColorCodeConverter::PrintAllColorPairsWithNumber()
{
	for (MajorColor itrMajorColor = MajorColor::begin; itrMajorColor < MajorColor::end; itrMajorColor = static_cast<MajorColor>((size_t)itrMajorColor + 1))
	{
		for (MinorColor itrMinorColor = MinorColor::begin; itrMinorColor < MinorColor::end; itrMinorColor = static_cast<MinorColor>((size_t)itrMinorColor + 1))
		{
			int pairNumber = ColorCodeConverter::GetPairNumberFromColor(itrMajorColor, itrMinorColor);
			ColorPair colorPair(itrMajorColor, itrMinorColor);
			std::cout << "Color pair: " << colorPair.ColorPairToString() << " Pair Number: " << pairNumber << std::endl;
		}
	}
	return;
}