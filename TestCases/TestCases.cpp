#include "pch.h"
#include "CppUnitTest.h"
extern "C" char* winner(char*, char*);
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TestCases
{
	TEST_CLASS(TestCases)
	{
	public:
		
		TEST_METHOD(Test1_Draw_Rock)
		{
			char* expectedResult = "Draw";
			char* actualResult = winner("Rock", "Rock");
			Assert::AreEqual(expectedResult, actualResult);
		}
	};
}
