#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab2.5OOP/Triad.h"
#include "../Lab2.5OOP/Triad.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest25OOP
{
	TEST_CLASS(UnitTest25OOP)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Triad T1;
			Assert::AreEqual(0, T1.GetX());
		}
	};
}
