/*************************************************************************
	> File Name: 11_12.cpp
	> Author: 
	> Mail: 
	> Created Time: 四 11/ 5 15:54:55 2015
 ************************************************************************/

#include <iostream>
#include <utility>
#include <vector>
#include <string>
using namespace std;

int main(int argc, char **argv)
{
    string word;
    int count;
    vector<pair<string, int> > wordCntVec;

    while (cin >> word >> count)
    {
        wordCntVec.push_back({word, count});
        wordCntVec.push_back(make_pair(word, count));
        wordCntVec.push_back(pair<string, int>(word, count));
    }

    for (auto item : wordCntVec)
    {
        cout << "word: " << item.first << " count: " << item.second << endl;
    }

    return 0;
}
