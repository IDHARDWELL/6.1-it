#include "pch.h"
#include "CppUnitTest.h"
#include "../FileName.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
    TEST_CLASS(UnitTest1)
    {
    public:

        TEST_METHOD(TestMethod1)
        {
            const int n = 7;
            int a[n] = {-3,1, 3, 4, 5, 5 };
            int sum = Sum(a, n);
            Assert::AreEqual(sum, 11);
        }
    };
}

