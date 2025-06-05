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

bool Solution::canPlaceFlowers(vector<int>& flowerbed, int n) {

    unsigned int counter = 0;

    for(size_t i = 0; i !=flowerbed.size(); ++i)
    {
        if (!flowerbed[i])
        {
            if ((i == 0 || flowerbed[i - 1] == 0) && (i == flowerbed.size() - 1 || flowerbed[i + 1] == 0))
            {
                flowerbed[i] = 1;
                if (++counter >= n)
                    return true;

            }
        }
    }
    return counter >= n;
}

string Solution::reverseVowels(string s) {
    if (s.empty() || s.size() < 2)
    {
        return s;
    }
    auto is_vowels = [](char x) {
        return  x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u' ||
                x == 'A' || x == 'E' || x == 'I' || x == 'O' || x == 'U'; };

    int start = 0, end = s.size() - 1;
    while (start < end)
    {
        while (start < end && !is_vowels(s[start]))
            start++;

        while (start < end && !is_vowels(s[end]))
            end--;

        {
            char temp = s[start];

            s[start] = s[end];
            s[end] = temp;
        }

        start++;
        end--;

    }
    return s;
}

string Solution::reverseWords(string s) {
    if (s.empty())
        return s;

    std::vector<std::string> back_order_words;
    std::string res;
    std::string::iterator start , end;
    start = end = s.begin();
    const std::string sep = std::string(" ");
    while (end < s.end())
    {
        while (start < s.end() && *start == ' ') start++;

        end = start;

        while (end < s.end() && *end != ' ') end++;

        if (end - start > 0)
            back_order_words.push_back(std::string(start, end));
        start = end;
    }
    
    for (std::vector<string>::reverse_iterator i = back_order_words.rbegin(); i < back_order_words.rend() - 1; i++)
        res += *i + " ";
    res += *(back_order_words.rend() - 1);
    back_order_words.clear();
    return res;
}
