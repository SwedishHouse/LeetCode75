#pragma once

#include <string>
#include <vector>


using namespace std;

class ArrayAndString
{
public:

    // 1768. Merge Strings Alternately
    static string mergeAlternately(const string &word1, const string &word2);
    // 1071. Greatest Common Divisor of Strings
	static string gcdOfStrings(const string& str1, const string& str2);
    // 1431. Kids With the Greatest Number of Candies
	static vector<bool> kidsWithCandies(const vector<int>& candies, int extraCandies);
    // 605. Can Place Flowers
	static bool canPlaceFlowers(vector<int>& flowerbed, int n);
    // 345. Reverse Vowels of a String
	static string reverseVowels(string s);
    // 151. Reverse Words in a String
	static string reverseWords(string s);
    // 238. Product of Array Except Self

    // 334. Increasing Triplet Subsequence
	static bool increasingTriplet(vector<int>& nums);
    // 443. String Compression

};

