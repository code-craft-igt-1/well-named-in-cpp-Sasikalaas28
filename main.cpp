#include <iostream>
#include <assert.h>
#include "test.h"
using namespace TelCoColorCoder;
int main() {
	TestColorCode testObj;
	testObj.testNumberToPair(4, MajorColor::WHITE, MinorColor::BROWN);
	testObj.testNumberToPair(5, MajorColor::WHITE, MinorColor::SLATE);

	testObj.testPairToNumber(MajorColor::BLACK, MinorColor::ORANGE, 12);
	testObj.testPairToNumber(MajorColor::VIOLET, MinorColor::SLATE, 25);
	testObj.testPrintAllColorPairsWithNumber();
	return 0;
}
