#include "pch.h"
#include "CppUnitTest.h"
#include "../Project8.1.1.i/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			bool c;
			int k = 0;
			int j = 0;
			int i = 0;
			char q1[] = "QS";
			char q[] = "SQ";
			char str[] = "SQQfhjDF";
			c = Contain(q, q1, str);
			Assert::AreEqual(c, true);
		}
	};
}
