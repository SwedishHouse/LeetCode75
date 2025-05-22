using Sharp;

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
    }
}
