#include "pch.h"
#include "CppUnitTest.h"
#include "../dspLab3.1/FileName.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest2
{
	TEST_CLASS(UnitTest2)
	{
	public:

		TEST_METHOD(TestCalc)
		{
			int n = 10;
			int r = 9;
			int expected = 3628800;
			int actual = Calc(n, r);

			Assert::AreEqual(expected, actual, L"Calc(10, 9) повинна повертати 3628800");
		}

		TEST_METHOD(TestCalc_SmallValues)
		{
			int n = 5;
			int r = 3;
			int expected = 60;
			int actual = Calc(n, r);

			Assert::AreEqual(expected, actual, L"Calc(5, 3) повинна повертати 60");
		}
	};
}
