/*************************************************************************
	> File Name: 10_42.cpp
	> Author: 
	> Mail: 
	> Created Time: 三 11/ 4 17:56:06 2015
 ************************************************************************/

#include <iostream>
#include <list>
#include <algorithm>
#include <string>
using namespace std;

int main(int argc, char **argv)
{
    list<string> slst{"hello", "world", "c++", "primer","hello", "world", "c++", "primer"};
    slst.sort();
    slst.unique();

    for_each(slst.begin(), slst.end(), [](const string &str){cout << str << " ";});
    cout << endl;

    return 0;
}
