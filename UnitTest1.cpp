#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab5.1/lab5.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double ff;
			ff = c(2,4);
			Assert::AreEqual(ff, 2.82919);
		}
	};
}
