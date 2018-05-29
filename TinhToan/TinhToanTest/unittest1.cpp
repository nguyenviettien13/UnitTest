#include "stdafx.h"
#include "CppUnitTest.h"
#include "../TinhToan/ToanTu.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TinhToanTest
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		TEST_METHOD(TestMethod2)
		{
			// TODO: Your test code here
			int tong = ToanTu().cong(10, 20);
			Assert::AreEqual(tong, 30);
		}
		TEST_METHOD(TestMethod1)
		{
			// TODO: Your test code here
			int tong = ToanTu().cong(20, 20);
			Assert::AreEqual(tong, 40);
		}
	};
}