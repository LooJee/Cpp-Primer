/*************************************************************************
	> File Name: 10_37.cpp
	> Author: 
	> Mail: 
	> Created Time: 二 11/ 3 23:55:25 2015
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>
#include <list>
using namespace std;

int main(int argc, char **argv)
{
    vector<int> ivec{1,2,3,4,5,6,7,8,9,0};
    list<int> il;
    copy(ivec.rbegin()+2, ivec.rbegin()+7, back_inserter(il));
    for_each(il.begin(), il.end(), [](int a){cout << a << " ";});
    cout << endl;

    return 0;
}
