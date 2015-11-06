/*************************************************************************
	> File Name: 11_20.cpp
	> Author: 
	> Mail: 
	> Created Time: 五 11/ 6 10:44:10 2015
 ************************************************************************/

#include <iostream>
#include <map>
#include <string>
using namespace std;

int main(int argc, char **argv)
{
    map<string, size_t> word_count;
    string word;
    while (cin >> word)
    {
        auto ret = word_count.insert({word, 1});
        if (!ret.second)
            ++ret.first->second;
    }

    for (auto iter = word_count.begin(); iter != word_count.end(); ++iter)
    {
        cout << "word: " << iter->first << " count: " << iter->second << endl;
    }

    return 0;
}
