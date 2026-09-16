#include "pch.h"
#include "array_and_string.h"


namespace ArrayAndStringTest
{
    // Структура с тестовыми данными
    struct TestCaseMergeAlternately {
        std::string a;
        std::string b;
        std::string expected;
    };

    // Параметризованный тест
    class mergeAlternatelyTest : public ::testing::TestWithParam<TestCaseMergeAlternately> {};

    TEST_P(mergeAlternatelyTest, ReturnsCorrectResult)
    {
        const auto& param = GetParam();
        EXPECT_EQ(ArrayAndString::mergeAlternately(param.a, param.b), param.expected);
    }
    // Коллекция данных
    INSTANTIATE_TEST_SUITE_P(
        mergeAlternatelyTestCases,                    
        mergeAlternatelyTest,                       
        ::testing::Values(
            TestCaseMergeAlternately{"abc", "pqr", "apbqcr"},
            TestCaseMergeAlternately{"ab", "pqrs", "apbqrs"},
            TestCaseMergeAlternately{"abcd", "pq", "apbqcd"}
        )
    );

}