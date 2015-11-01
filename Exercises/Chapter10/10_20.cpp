/*************************************************************************
	> File Name: 10_20.cpp
	> Author: 
	> Mail: 
	> Created Time: 日 11/ 1 22:18:55 2015
 ************************************************************************/

#include<iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main(int argc, char **argv)
{
    vector<string> words{"hello", "world", "c++", "beautiful", "butterfly"};

    cout << count_if(words.begin(), words.end(), 
                    [](const string &word) {return word.length() >= 6;})
     << endl;

    return 0;
}
