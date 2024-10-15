#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_6.1.it/Lab_6.1.it.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			const int size = 21;
			int arr[size];
			const int Low = 15;
			const int High = 85;

			Create(arr, size, Low, High);

			for (int i = 0; i < size; i++)
			{
				Assert::IsTrue(arr[i] >= Low && arr[i] <= High);
			}
		}
	};
}