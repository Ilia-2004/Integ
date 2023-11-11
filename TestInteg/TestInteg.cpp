#include "pch.h"
#include "CppUnitTest.h"
#include "F://Ilya/Programming/Integ/Integ/Integ.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TestInteg
{
	TEST_CLASS(TestInteg)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double t = integrate(F, 2, 5);
			Microsoft::VisualStudio::CppUnitTestFramework::Assert::AreEqual(t, 16.999);
		}
	};
}