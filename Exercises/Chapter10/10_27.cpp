/*************************************************************************
	> File Name: 10_27.cpp
	> Author: 
	> Mail: 
	> Created Time: 一 11/ 2 09:42:30 2015
 ************************************************************************/

#include <iostream>
#include <iterator>
#include <algorithm>
#include <list>
#include <vector>
using namespace std;

int main(int argc, char **argv)
{
    vector<int> ivec{2,3,1,4,5,16,1,6,6,34};
    list<int> il;
    sort(ivec.begin(), ivec.end());
    unique_copy(ivec.begin(), ivec.end(), back_inserter(il));
    for_each(il.begin(), il.end(), [](int a){cout << a << " ";});
    cout << endl;

    return 0;
}

