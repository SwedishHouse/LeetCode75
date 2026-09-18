#include "pch.h"
#include "array_and_string.h"
#include <tuple>


namespace ArrayAndStringTest
{
    // Параметризованный тест
    using TwoStringInputOneOut = ::testing::TestWithParam<std::tuple<string, string, string>>;

    class mergeAlternatelyClass : public TwoStringInputOneOut {};

    TEST_P(mergeAlternatelyClass, mergeAlternatelyReturnsCorrectResult)
    {
        const auto [a, b, res] = GetParam();
        EXPECT_EQ(ArrayAndString::mergeAlternately(a, b), res);
    }
    // Коллекция данных
    INSTANTIATE_TEST_SUITE_P(
        mergeAlternatelyReturnsCorrectResult,                    
        mergeAlternatelyClass,                       
        ::testing::Values(
            std::make_tuple("abc", "pqr", "apbqcr"),
            std::make_tuple("ab", "pqrs", "apbqrs"),
            std::make_tuple("abcd", "pq", "apbqcd")
        )
    );

    class gcdOfStringsClass : public TwoStringInputOneOut {};

    TEST_P(gcdOfStringsClass, gcdOfStringsCorrectRes)
    {
        const auto [a, b, res] = GetParam();
        EXPECT_EQ(ArrayAndString::gcdOfStrings(a, b), res);
    }

    INSTANTIATE_TEST_SUITE_P(
        gcdOfStringsCorrectRes,                    
        gcdOfStringsClass,                       
        ::testing::Values(
            std::make_tuple("ABCABC", "ABC", "ABC"),
            std::make_tuple("ABABAB", "ABAB", "AB"),
            std::make_tuple("LEET", "CODE", "")
        )
    );

}