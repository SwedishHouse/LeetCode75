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
    }
}
