/*************************************************************************
	> File Name: 10_22.cpp
	> Author: 
	> Mail: 
	> Created Time: 日 11/ 1 22:49:24 2015
 ************************************************************************/

#include<iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <functional>
using namespace std;
using namespace std::placeholders;

bool check_size(const string &word, int sz)
{
    return word.length() > sz;
}

int main(int argc, char **argv)
{
    vector<string> words{"hello", "c++", "beautiful", "butterfly"};
    cout << count_if(words.begin(), words.end(), bind(check_size, _1, 6)) << endl;

    return 0;
}

