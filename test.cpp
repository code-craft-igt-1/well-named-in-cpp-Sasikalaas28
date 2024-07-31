#pragma once
#include <assert.h>
#include "test.h"

void TestColorCode::testNumberToPair(int pairNumber,
	MajorColor expectedMajor,
	MinorColor expectedMinor)
{
	ColorPair colorPair =
		ColorCodeConverter::GetColorFromPairNumber(pairNumber);
	std::cout << "Got pair " << colorPair.ColorPairToString() << std::endl;
	assert(colorPair.getMajorColor() == expectedMajor);
	assert(colorPair.getMinorColor() == expectedMinor);
	return;
}

void TestColorCode::testPairToNumber(
	MajorColor major,
	MinorColor minor,
	int expectedPairNumber)
{
	int pairNumber = ColorCodeConverter::GetPairNumberFromColor(major, minor);
	std::cout << "Got pair number " << pairNumber << std::endl;
	assert(pairNumber == expectedPairNumber);
	return;
}

void TestColorCode::testPrintAllColorPairsWithNumber()
{
	ColorCodeConverter::PrintAllColorPairsWithNumber();
	return;
}