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