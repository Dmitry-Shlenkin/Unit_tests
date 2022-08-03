#include "pch.h"
#include "CppUnitTest.h"
#include "pch.h"
#include "..\TestUnit\Human.h"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		TEST_METHOD(HumanTestName)
		{
			std::string name = "Bill";
			Human HUMAN(name, 14, 2);
			Assert::AreEqual(name, HUMAN.GetName());
		}
		TEST_METHOD(HumanTestAge)
		{
			int Age_1 = 13;
			Human HUMAN_1("ASDF", Age_1, 2);
			Assert::AreEqual(Age_1, HUMAN_1.GetAge());

			Human HUMAN_2("ASDaF", 12, 2);
			Assert::AreNotEqual(Age_1, HUMAN_2.GetAge());
		}

		TEST_METHOD(HumanTestColorEyes)
		{
			short COLOR = 3;
			Human HUMAN("Bill", 14, COLOR);
			Assert::AreEqual(COLOR, HUMAN.GetColorEyes());
		}

		TEST_METHOD(HumanTestMarried)
		{
			const wchar_t *Error = L"Îרטבךא פכאדא";
			bool is_married = true;
			Human HUMAN("Bill", 14, 2, is_married);
			Assert::IsTrue(HUMAN.GetMarried(), Error);
		}
		TEST_METHOD(HumanTestWeak)
		{
			const wchar_t* Error = L"Îרטבךא פכאדאאאאא";
			bool is_weak = true;
			Human HUMAN("Bill", 14, is_weak);
			Assert::IsTrue(is_weak, Error);
		}


	};
}
