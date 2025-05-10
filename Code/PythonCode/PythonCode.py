
class Solution:

    def mergeAlternately(self, word1: str, word2: str) -> str:
        d1 = dict(zip(range(len(word1)),list(word1)))
        d2 = dict(zip(range(len(word2)),list(word2)))
        length = min(len(d1), len(d2))
        least = d1 if length != len(d1) else d2
        res = []
        for num in range(length):
            res.append(d1[num])
            res.append(d2[num])
        for num in range(length, len(least)):
            res.append(least[num])
        return ''.join(res)
