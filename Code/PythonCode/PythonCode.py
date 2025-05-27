from typing import List

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

    def gcdOfStrings(self, str1: str, str2: str) -> str:
 
        def gcd(a, b):
            if a % b == 0:
                return b
            return gcd(b, a % b)

        num = gcd(len(str1), len(str2))
        str3 = str1[:num]
        for i in range(0, len(str1), num):
            sub_string = str1[i: i + num]
            if str3 != sub_string:
                return ''
        for i in range(0, len(str2), num):
            sub_string = str2[i: i + num]
            if str3 != sub_string:
                return ''
        return str3

    def kidsWithCandies(self, candies: List[int], extraCandies: int) -> List[bool]:
        greatest = max(candies)
        return [i+extraCandies>=greatest for i in candies]

    def canPlaceFlowers(self, flowerbed: List[int], n: int) -> bool:
        count = 0

        for i in range(len(flowerbed)):
            if flowerbed[i] == 0: 
                # check left
                is_empty_left = (i == 0) or (flowerbed[i - 1] == 0)
                is_empty_right = (i == len(flowerbed) - 1) or (flowerbed[i + 1] == 0)
                if is_empty_left and is_empty_right:
                    flowerbed[i] = 1
                    count += 1
                if count >= n:
                    return True
        return count >= n                 
              


