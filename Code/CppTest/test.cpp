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

}
