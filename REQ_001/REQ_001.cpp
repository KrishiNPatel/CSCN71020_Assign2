#include "pch.h"
#include "CppUnitTest.h"

extern "C" int getPerimeter(int* length, int* width);
extern "C" int getArea(int* length, int* width);
extern "C" void setLength(int input, int* length);
extern "C" void setWidth(int input, int* width);

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace REQ001
{
	TEST_CLASS(REQ001)
	{
	public:
		
		TEST_METHOD(PerimeterFunctionality)
		{
			//This is testing the perimeter of a rectangle using length = 3, width = 2
			int length = 3;
			int width = 2;
			int result = 0;
			result = getPerimeter(&length,&width);
			Assert::AreEqual(10,result);
		}
		TEST_METHOD(AreaFunctionality)
		{
			//This is testing the area of a rectangle using length = 3, width = 2
			int length = 3;
			int width = 2;
			int result = 0;
			result = getArea(&length, &width);
			Assert::AreEqual(6, result);
		}
		TEST_METHOD(SetLengthFunctionality01)
		{
			//This is testing the setLength functionality of a rectangle using length = 99
			int input = 99;
			int result = 0;
			setLength(input,&result);
			Assert::AreEqual(99, result);
		}
		TEST_METHOD(SetLengthFunctionality02)
		{
			//This is testing the setLength functionality of a rectangle using length = 95
			int input = 95;
			int result = 0;
			setLength(input, &result);
			Assert::AreEqual(95, result);
		}
		TEST_METHOD(SetLengthFunctionality03)
		{
			//This is testing the setLength functionality of a rectangle using length = 1
			int input = 1;
			int result = 0;
			setLength(input, &result);
			Assert::AreEqual(1, result);
		}
		TEST_METHOD(SetWidthFunctionality01)
		{
			//This is testing the setWidth functionality of a rectangle using width = 95
			int input = 1;
			int result = 0;
			setWidth(input, &result);
			Assert::AreEqual(1, result);
		}
		TEST_METHOD(SetWidthFunctionality02)
		{
			//This is testing the setWidth functionality of a rectangle using width = 1
			int input = 1;
			int result = 0;
			setWidth(input, &result);
			Assert::AreEqual(1, result);
		}
		TEST_METHOD(SetWidthFunctionality03)
		{
			//This is testing the setWidth functionality of a rectangle using width = 99
			int input = 99;
			int result = 0;
			setWidth(input, &result);
			Assert::AreEqual(99, result);
		}
	};
}
