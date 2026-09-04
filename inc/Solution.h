#pragma once
#include <string>
#include <vector>

using namespace std;

class Solution
{
public:
	string mergeAlternately(string word1, string word2);
	string gcdOfStrings(string str1, string str2);
	vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies);
	bool canPlaceFlowers(vector<int>& flowerbed, int n);
	string reverseVowels(string s);
	string reverseWords(string s);
	int* countBits(int n, int* returnSize);
	// 136. Single Number
	int singleNumber(int* nums, int numsSize);
	// 1318. Minimum Flips to Make a OR b Equal to c
	int minFlips(int a, int b, int c);
	// 392. Is Subsequence
	bool isSubsequence(string s, string t);
	// 334. Increasing Triplet Subsequence
	bool increasingTriplet(vector<int>& nums);

	// Definition for singly-linked list.
	struct ListNode 
	{
		int val;
		ListNode* next;
		ListNode() : val(0), next(nullptr) {}
		ListNode(int x) : val(x), next(nullptr) {}
		ListNode(int x, ListNode* next) : val(x), next(next) {}
	};

	// 206. Reverse Linked List
	ListNode* reverseList(ListNode* head);
};

