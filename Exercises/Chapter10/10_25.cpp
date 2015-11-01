/*************************************************************************
	> File Name: 10_25.cpp
	> Author: 
	> Mail: 
	> Created Time: 日 11/ 1 23:07:38 2015
 ************************************************************************/

#include<iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <functional>
using namespace std;
using namespace std::placeholders;

void elimDups(vector<string> &word)
{
    sort(word.begin(), word.end());
    auto end_unique = unique(word.begin(), word.end());
    word.erase(end_unique, word.end());
}

bool check_size(const string &word, int sz)
{
    return word.size() >= sz;
}

void biggies(vector<string> &word, vector<string>::size_type sz)
{
    elimDups(word);
    stable_sort(word.begin(), word.end(), 
                [](const string &str1, const string &str2){return str1 < str2;});

    auto last_iter = partition(word.begin(), word.end(), 
                             bind(check_size, _1, 5));

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
