/*************************************************************************
	> File Name: 10_19.cpp
	> Author: 
	> Mail: 
	> Created Time: 日 11/ 1 21:22:38 2015
 ************************************************************************/

#include<iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

void elimDups(vector<string> &word)
{
    sort(word.begin(), word.end());
    auto end_unique = unique(word.begin(), word.end());
    word.erase(end_unique, word.end());
}

void biggies(vector<string> &word, vector<string>::size_type sz)
{
    elimDups(word);
    stable_sort(word.begin(), word.end(), 
                [](const string &str1, const string &str2){return str1 < str2;});

    auto last_iter = stable_partition(word.begin(), word.end(), 
                             [sz](const string &str1){return str1.size() >= sz;});

    for (auto iter = word.begin(); iter != last_iter; ++iter)
    {
        cout << *iter << " ";
    }
    cout << endl;
}

int main(int argc, char **argv)
{
    vector<string> words{"hello", "world", "c++", "primer", "c"};
    biggies(words, 5);

    return 0;
}
