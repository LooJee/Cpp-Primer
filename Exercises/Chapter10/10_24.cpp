/*************************************************************************
	> File Name: 10_24.cpp
	> Author: 
	> Mail: 
	> Created Time: 日 11/ 1 23:01:33 2015
 ************************************************************************/

#include<iostream>
#include <vector>
#include <string>
#include <functional>
#include <algorithm>
using namespace std;
using namespace std::placeholders;

bool check_size(const string &word, int sz)
{
    return word.length() < sz;
}

int main(int argc, char **argv)
{
    vector<int> sizes{0,1,2,3,4,5,6,7,8};
    
    auto iter = find_if(sizes.begin(), sizes.end(), bind(check_size, "hello", _1));

    cout << *iter << endl;
    return 0;
}

