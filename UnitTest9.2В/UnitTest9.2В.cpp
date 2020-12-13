#include "pch.h"
#include "CppUnitTest.h"
#include "../Project9.2B/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest92В
{
	TEST_CLASS(UnitTest92В)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int N = 0;
			int m = 0;
			Sort(0, N);
			Assert::AreEqual(m, 0);
		}
	};
}
