#include "pch.h"

#include "Solution.h"

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
