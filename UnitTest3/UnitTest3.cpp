#include "pch.h"
#include "CppUnitTest.h"
#include "../psdLab3.2/FileName.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;


namespace UnitTest3
{
	TEST_CLASS(UnitTest3)
	{
	public:

		TEST_METHOD(TestStirlingAndBell)
		{
			int i = 6;
			int n = i + 5;

			long long F[MAX][MAX];
			long long B[MAX];

			computeStirling(F, n);
			computeBell(B, F, n);

			// Перевірка декількох відомих значень чисел Стірлінга
			Assert::AreEqual(1LL, F[1][1]);
			Assert::AreEqual(1LL, F[2][1]);
			Assert::AreEqual(1LL, F[2][2]);
			Assert::AreEqual(3LL, F[3][2]);
			Assert::AreEqual(25LL, F[5][3]);
			Assert::AreEqual(90LL, F[6][3]);

			// Перевірка чисел Белла
			Assert::AreEqual(1LL, B[1]);
			Assert::AreEqual(2LL, B[2]);
			Assert::AreEqual(5LL, B[3]);
			Assert::AreEqual(15LL, B[4]);
			Assert::AreEqual(52LL, B[5]);
			Assert::AreEqual(203LL, B[6]);
			Assert::AreEqual(678570LL, B[11]);
		}
	};
}