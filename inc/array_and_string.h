#pragma once

#include <string>
#include <vector>


using namespace std;

class array_and_string
{
public:

    // 1768. Merge Strings Alternately
    string mergeAlternately(const string &word1, const string &word2);
    // 1071. Greatest Common Divisor of Strings
	string gcdOfStrings(string str1, string str2);
    // 1431. Kids With the Greatest Number of Candies
	vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies);
    // 605. Can Place Flowers
	bool canPlaceFlowers(vector<int>& flowerbed, int n);
    // 345. Reverse Vowels of a String
	string reverseVowels(string s);
    // 151. Reverse Words in a String
	string reverseWords(string s);
    // 238. Product of Array Except Self

    // 334. Increasing Triplet Subsequence
	bool increasingTriplet(vector<int>& nums);
    // 443. String Compression
	
public:
};

