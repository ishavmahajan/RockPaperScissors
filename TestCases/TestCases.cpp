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
		TEST_METHOD(Test4_Player1Winner_RockScissors)
		{
			char* expectedResult = "Player1";
			char* actualResult = winner("Rock", "Scissors");
			Assert::AreEqual(expectedResult, actualResult);
		}
		TEST_METHOD(Test5_Player1Winner_ScissorsPaper)
		{
			char* expectedResult = "Player1";
			char* actualResult = winner("Scissors", "Paper");
			Assert::AreEqual(expectedResult, actualResult);
		}
		TEST_METHOD(Test6_Player1Winner_PaperRock)
		{
			char* expectedResult = "Player1";
			char* actualResult = winner("Paper", "Rock");
			Assert::AreEqual(expectedResult, actualResult);
		}
		TEST_METHOD(Test7_Player2Winner_ScissorsRock)
		{
			char* expectedResult = "Player2";
			char* actualResult = winner("Scissors", "Rock");
			Assert::AreEqual(expectedResult, actualResult);
		}
	};
}
