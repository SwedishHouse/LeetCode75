using Sharp;
using System.Numerics;

namespace SharpTests
{
    [TestClass]
    public sealed class Tests
    {
        [TestMethod]
        public void Test_MergeAlternately()
        {
            var solution = new Solution();

            Assert.AreEqual(solution.MergeAlternately("abc", "pqr"), "apbqcr");
            Assert.AreEqual(solution.MergeAlternately("ab", "pqrs"), "apbqrs");
        }

        [TestMethod]
        public void Test_GcdOfStrings()
        {
            var solution = new Solution();

            Assert.AreEqual(solution.GcdOfStrings("ABCABC", "ABC"), "ABC");
            Assert.AreEqual(solution.GcdOfStrings("ABABAB", "ABAB"), "AB");
            Assert.AreEqual(solution.GcdOfStrings("LEET", "CODE"), "");

        }


        [TestMethod]
        public void Test_KidsWithCandies()
        {
            var solution = new Solution();

            bool[] initialValues = [true, true, true, false, true];
            List<bool> expected_list = new List<bool>(initialValues); // List<T> реализует IList<T>
            List<bool> input_list = solution.KidsWithCandies([2, 3, 5, 1, 3], 3).ToList<bool>();
            CollectionAssert.AreEqual(input_list, expected_list);

            initialValues = [true, false, false, false, false];
            expected_list = new List<bool>(initialValues);
            input_list = solution.KidsWithCandies([4, 2, 1, 1, 2], 1).ToList<bool>();
            CollectionAssert.AreEqual(input_list, expected_list);

            initialValues = [true, false, true];
            expected_list = new List<bool>(initialValues);
            input_list = solution.KidsWithCandies([12, 1, 12], 10).ToList<bool>();
            CollectionAssert.AreEqual(input_list, expected_list);

        }

        [TestMethod]
        public void Test_CanPlaceFlowers()
        {
            var solution = new Solution();

            int[] input = [ 1, 0, 0, 0, 1 ];
            int n = 1;
            bool expected = true;

            Assert.AreEqual(solution.CanPlaceFlowers(input, n), expected);

            input = [ 1,0,0,0,1 ];
            n = 2;
            expected = false;

            Assert.AreEqual(solution.CanPlaceFlowers(input, n), expected);

        }

        [TestMethod]
        public void Test_ReverseVowels()
        {
            var solution = new Solution();

            string input = "IceCreAm";
            string expected = "AceCreIm";

            Assert.AreEqual(solution.ReverseVowels(input), expected);

            input = "leetcode";
            expected = "leotcede";

            Assert.AreEqual(solution.ReverseVowels(input), expected);

            input = "a.";
            expected = "a.";

            Assert.AreEqual(solution.ReverseVowels(input), expected);
        }

        [TestMethod]
        public void Test_ReverseWords()
        {
            var solution = new Solution();

            string input = "the sky is blue";
            string expected = "blue is sky the";

            Assert.AreEqual(solution.ReverseWords(input), expected);

            input = "  hello world  ";
            expected = "world hello";

            Assert.AreEqual(solution.ReverseWords(input), expected);

            input = "a good   example";
            expected = "example good a";

            Assert.AreEqual(solution.ReverseWords(input), expected);

            input = "";
            expected = "";

            Assert.AreEqual(solution.ReverseWords(input), expected);
        }
    }
}
