#include "pch.h"

#include "Solution.h"

namespace Test_LeetCode
{
	class LeetCodeSolutionTest : public testing::Test
	{
	public:
		Solution sol_obj = Solution();
	};

	TEST_F(LeetCodeSolutionTest, mergeAlternatelyTest)
	{
		string word1 = "abc", word2 = "pqr";
		ASSERT_EQ(sol_obj.mergeAlternately(word1, word2), "apbqcr");

		ASSERT_EQ(sol_obj.mergeAlternately("ab", "pqrs"), "apbqrs");

		ASSERT_EQ(sol_obj.mergeAlternately("abcd", "pq"), "apbqcd");
	}

	TEST_F(LeetCodeSolutionTest, gcdOfStrings)
	{
		ASSERT_EQ(sol_obj.gcdOfStrings("ABCABC", "ABC"), "ABC");
		
		ASSERT_EQ(sol_obj.gcdOfStrings("ABABAB", "ABAB"), "AB");

		ASSERT_EQ(sol_obj.gcdOfStrings("LEET", "CODE"), "");

	}

	TEST_F(LeetCodeSolutionTest, kidsWithCandies)
	{

		vector<int> input_values = { 2, 3, 5, 1, 3 };
		vector<bool> expected = { true, true, true, false, true };
		int extraCandies = 3;
		ASSERT_EQ(sol_obj.kidsWithCandies(input_values, extraCandies), expected);

		input_values = { 4, 2, 1, 1, 2 };
		expected = { true, false, false, false, false };
		extraCandies = 1;
		ASSERT_EQ(sol_obj.kidsWithCandies(input_values, extraCandies), expected);

		input_values = { 12, 1, 12 };
		expected = { true, false, true };
		extraCandies = 10;
		ASSERT_EQ(sol_obj.kidsWithCandies(input_values, extraCandies), expected);
	}

}
