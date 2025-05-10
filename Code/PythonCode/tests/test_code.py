from PythonCode import Solution
import pytest

solution = Solution()

def test_mergeAlternately():
    assert solution.mergeAlternately("abc", "pqr") == "apbqcr"
    assert solution.mergeAlternately("ab", "pqrs") == "apbqrs"
