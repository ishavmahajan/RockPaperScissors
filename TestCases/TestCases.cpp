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
		TEST_METHOD(Test2_Draw_Paper)
		{
			char* expectedResult = "Draw";
			char* actualResult = winner("Paper", "Paper");
			Assert::AreEqual(expectedResult, actualResult);
		}
		TEST_METHOD(Test3_Draw_Scissors)
		{
			char* expectedResult = "Draw";
			char* actualResult = winner("Scissors", "Scissors");
			Assert::AreEqual(expectedResult, actualResult);
		}
	};
}
