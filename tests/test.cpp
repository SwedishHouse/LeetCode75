#include "pch.h"
#include "solution.h"
#include "array_and_string.h"




namespace Test_LeetCode
{
	class LeetCodeSolutionTest : public testing::Test
	{
	public:
		Solution sol_obj = Solution();
	};
    
	TEST_F(LeetCodeSolutionTest, canPlaceFlowers)
	{
		vector<int> input = { 1,0,0,0,1 };
		int n = 1;
		bool expected = true;

		ASSERT_EQ(sol_obj.canPlaceFlowers(input, n), expected);

		input = { 1,0,0,0,1 };
		n = 2;
		expected = false;

		ASSERT_EQ(sol_obj.canPlaceFlowers(input, n), expected);
	}

	TEST_F(LeetCodeSolutionTest, reverseVowels)
	{
		std::string input = "IceCreAm";
		std::string out = "AceCreIm";

		ASSERT_EQ(sol_obj.reverseVowels(input), out);

		input = "leetcode";
		out = "leotcede";

		ASSERT_EQ(sol_obj.reverseVowels(input), out);

		input = "a.";
		out = "a.";

		ASSERT_EQ(sol_obj.reverseVowels(input), out);
	}

	TEST_F(LeetCodeSolutionTest, reverseWords)
	{
		std::string input = "the sky is blue";
		std::string out = "blue is sky the";

		ASSERT_EQ(sol_obj.reverseWords(input), out);

		input = "  hello world  ";
		out = "world hello";

		ASSERT_EQ(sol_obj.reverseWords(input), out);

		input = "a good   example";
		out = "example good a";

		ASSERT_EQ(sol_obj.reverseWords(input), out);

		input = "";
		out = "";

		ASSERT_EQ(sol_obj.reverseWords(input), out);
	}

	TEST_F(LeetCodeSolutionTest, minFlips)
	{
		ASSERT_EQ(sol_obj.minFlips(2, 6, 5), 3);
		ASSERT_EQ(sol_obj.minFlips(4, 2, 7), 1);
		ASSERT_EQ(sol_obj.minFlips(1, 2, 3), 0);
	}

	TEST_F(LeetCodeSolutionTest, singleNumber)
	{
		int case_one[] = { 2,2,1 };
		ASSERT_EQ(sol_obj.singleNumber(case_one, sizeof(case_one) / sizeof(int)), 1);

		int case_two[] = { 4,1,2,1,2 };
		ASSERT_EQ(sol_obj.singleNumber(case_two, sizeof(case_two) / sizeof(int)), 4);

		int case_three[] = { 1 };
		ASSERT_EQ(sol_obj.singleNumber(case_three, sizeof(case_three) / sizeof(int)), 1);
	}

	TEST_F(LeetCodeSolutionTest, isSubsequence)
	{
		ASSERT_EQ(sol_obj.isSubsequence("abc", "ahbgdc"), true);

		ASSERT_EQ(sol_obj.isSubsequence("axc", "ahbgdc"), false);

		ASSERT_EQ(sol_obj.isSubsequence("a", "b"), false);

		ASSERT_EQ(sol_obj.isSubsequence("acb", "ahbgdc"), false);
	}


}
