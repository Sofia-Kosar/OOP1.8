#include "pch.h"
#include "CppUnitTest.h"
#include "../OOP1.8/Payment.h"
#include "../OOP1.8/Payment.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest18
{
	TEST_CLASS(UnitTest18)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			
			Payment::Money money;
			money.SetUAH(10);
			money.SetUAH2(20);
			Assert::AreEqual(30L, money.addition());
		}
	};
}
