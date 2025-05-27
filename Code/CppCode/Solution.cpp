#include "Solution.h"

string Solution::mergeAlternately(string word1, string word2) {
    const string* biggest = word1.size() >= word2.size() ? &word1 : &word2;
    const string* smallest = word1.size() < word2.size() ? &word1 : &word2;

    const size_t common_size = word1.size() + word2.size();
    char* result = new char[common_size + 1];

    unsigned int counter = 0;
    for (int i(0); i < smallest->size(); i++)
    {
        result[counter++] = word1[i];
        result[counter++] = word2[i];
    }

    for (int i(0); i < biggest->size() - smallest->size(); i++)
        result[counter++] = (*biggest)[smallest->size() + i];

    result[common_size] = '\0';
    string str_res;
    str_res.assign(result);
    return str_res;
}

string Solution::gcdOfStrings(string str1, string str2) {
    if (str1 + str2 != str2 + str1)
        return "";

    size_t len1 = str1.length();
    size_t len2 = str2.length();

    while (len1 != len2)
    {
        if (len1 > len2)
            len1 -= len2;
        else
            len2 -= len1;
    }
    return str1.substr(0, len1);
}


vector<bool> Solution::kidsWithCandies(vector<int>& candies, int extraCandies) {

    int max = candies[0];

    for(int var : candies)
        if (var > max) max = var;

    vector<bool> res;

    for(int var : candies)
        res.push_back(var + extraCandies >= max);

    return res;
}