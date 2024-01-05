#include "pch.h"
#include "CppUnitTest.h"
#include "../Calca/MyForm.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTests
{
	TEST_CLASS(UnitTests)
	{
	public:
		
		TEST_METHOD(TestMethod1) //Сложение
		{
			int i = 2;
			int j = 3;
			int actual = i + j;
			Assert::AreEqual(5, actual);
		}
	};
}
