/*************************************************************************
	> File Name: 10_16.cpp
	> Author: 
	> Mail: 
	> Created Time: 日 11/ 1 20:45:38 2015
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

    auto first_iter = find_if(word.begin(), word.end(), 
                             [sz](const string &str1){return str1.size() >= sz;});
    auto count = word.end() - first_iter;
    
    for (auto iter = first_iter; iter != word.end(); ++iter)
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
