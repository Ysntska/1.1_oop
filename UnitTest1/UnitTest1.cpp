#include "pch.h"
#include "CppUnitTest.h"
#include "../1.1/Money.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Money money;
			int first = 10;
			int second = 2;
			bool t;
			t = money.Init(first, second);
			Assert::AreEqual(t, true);
		}
	};
}
