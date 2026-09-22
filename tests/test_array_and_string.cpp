#include "pch.h"
#include "array_and_string.h"
#include <tuple>


namespace ArrayAndStringTest
{
    // 1768. Merge Strings Alternately
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

    // 1071. Greatest Common Divisor of Strings
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

    // 1431. Kids With the Greatest Number of Candies
    using kidsWithCandiesTestClassTemplate = 
        ::testing::TestWithParam<
            std::tuple<
                std::vector<int>, 
                int, 
                std::vector<bool>
            >
        >;

    class kidsWithCandiesTestClass : public kidsWithCandiesTestClassTemplate {};

    TEST_P(kidsWithCandiesTestClass, kidsWithCandiesCorrectRes)
    {
        const auto& [a, b, res] = GetParam();
        EXPECT_EQ(ArrayAndString::kidsWithCandies(a, b), res);
    }

    TEST(kidsWithCandiesTest, SingleTest)
    {
        const std::vector<int> a = { 4, 2, 1, 1, 2 };
        const int b  = 1;
        const std::vector<bool> res ={ true, false, false, false, false };
        EXPECT_EQ(ArrayAndString::kidsWithCandies(a, b), res);
    }

    INSTANTIATE_TEST_SUITE_P(
        kidsWithCandiesCorrectRes,                    
        kidsWithCandiesTestClass,                       
        ::testing::Values(
            std::make_tuple(
                std::vector<int>{ 2, 3, 5, 1, 3 },
                3,
                std::vector<bool>{ true, true, true, false, true }
            ),
            std::make_tuple(
                std::vector<int>{ 4, 2, 1, 1, 2 }, 
                1, 
                std::vector<bool>{ true, false, false, false, false }
            ),
            std::make_tuple(
                std::vector<int>{ 12, 1, 12 }, 
                10, 
                std::vector<bool>{ true, false, true }
            )
        )
    );

}