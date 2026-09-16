#include "array_and_string.h"

string array_and_string::mergeAlternately(const string &word1, const string &word2) 
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