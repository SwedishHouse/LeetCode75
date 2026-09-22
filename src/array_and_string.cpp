#include "array_and_string.h"


string ArrayAndString::mergeAlternately(const string &word1, const string &word2) 
{
    std::string res(word1.size() + word2.size(), '\0');

    const auto& biggest = word1.size() >= word2.size() ? word1 : word2;
    const auto& smallest = word1.size() < word2.size() ? word1 : word2;

    unsigned int counter = 0;
    for (int i(0); i < smallest.size(); i++)
    {
        res[counter++] = word1[i];
        res[counter++] = word2[i];
    }

    for (int i(0); i < biggest.size() - smallest.size(); i++)
        res[counter++] = biggest[smallest.size() + i];

    return res;
}

string ArrayAndString::gcdOfStrings(const string& str1, const string& str2)
{
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

vector<bool> ArrayAndString::kidsWithCandies(const vector<int>& candies, int extraCandies) 
{
    int max = candies[0];

    for(int var : candies)
        if (var > max) max = var;

    vector<bool> res;

    for(int var : candies)
        res.push_back(var + extraCandies >= max);

    return res;
}


