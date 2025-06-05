from PythonCode import Solution
import pytest

solution = Solution()

def test_mergeAlternately():
    assert solution.mergeAlternately("abc", "pqr") == "apbqcr"
    assert solution.mergeAlternately("ab", "pqrs") == "apbqrs"

def test_gcdOfStrings():
    assert solution.gcdOfStrings("ABCABC", "ABC") == "ABC"
    assert solution.gcdOfStrings("ABABAB", "ABAB") == "AB"
    assert solution.gcdOfStrings("LEET", "CODE") == ""

def test_canPlaceFlowers():

    assert solution.canPlaceFlowers([1,0,0,0,1], 1) == True
    assert solution.canPlaceFlowers([1,0,0,0,1], 2) == False

def test_reverseWords():

    assert solution.reverseWords("the sky is blue") == "blue is sky the"
    assert solution.reverseWords("  hello world  ") == "world hello"
    assert solution.reverseWords("a good   example") == "example good a"

