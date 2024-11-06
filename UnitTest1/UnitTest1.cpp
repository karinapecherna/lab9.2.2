#include "pch.h"
#include "CppUnitTest.h"
#include <set>
#include "../lab9.2.2/FileName.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace SetOperationsTests
{
    TEST_CLASS(SetOperationsTests)
    {
    public:

        TEST_METHOD(TestUnion)
        {
            std::set<int> set1 = { 1, 2, 3 };
            std::set<int> set2 = { 3, 4, 5 };
            std::set<int> expected = { 1, 2, 3, 4, 5 };

            std::set<int> result;
            UNION(set1, set2, result);

            Assert::IsTrue(result == expected, L"Union operation failed");
        }

        
    };
}
