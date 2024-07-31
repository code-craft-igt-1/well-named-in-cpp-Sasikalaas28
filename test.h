#pragma once
#include "ColorPair.h"
#include "ColorCodeConverter.h"
using namespace TelCoColorCoder;
class TestColorCode {
public:
	void testNumberToPair(int pairNumber, MajorColor expectedMajor, MinorColor expectedMinor);
	void testPairToNumber(MajorColor major, MinorColor minor, int expectedPairNumber);
	void testPrintAllColorPairsWithNumber();
};
