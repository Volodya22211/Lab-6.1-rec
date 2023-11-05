#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab 6.1 rec/Lab 6.1 rec.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest2
{
	TEST_CLASS(UnitTest2)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			int test[22] = { 31, 11, 22, -6, 23, 28, 14, 0, -4, 28, -9, 29, -5, 27, 15, 21, -5, 18, 33, -2, -3, 12, };
			int a;
			a = countElements(test, 22, 0, 0);
			Assert::AreEqual(a, 18);

			a = sumElements(test, 22, 0, 0);
			Assert::AreEqual(a, 296);
		}
	};
}
