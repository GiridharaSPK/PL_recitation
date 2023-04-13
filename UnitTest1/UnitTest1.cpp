#include "pch.h"
#include "CppUnitTest.h"
#include "..\Application\Application.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{

			CoolClass coolClass;
			Assert::AreEqual(3, coolClass.Calc(1, 2));
		}

		TEST_METHOD(TestMethod2)
		{

			CoolClass coolClass;
			Assert::AreEqual(5, coolClass.Calc(3, 2));
		}
		
		TEST_MAX_INT_SUME(TestMethod3)
		{
			CoolClass coolClass;
			Assert::AreEqual(INT_MAX, coolClass.Calc(2*INT_MAX, -1 * INT_MAX));
		}
		
	};
}
