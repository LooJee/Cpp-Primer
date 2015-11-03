/*************************************************************************
	> File Name: 10_36.cpp
	> Author: 
	> Mail: 
	> Created Time: 二 11/ 3 23:39:07 2015
 ************************************************************************/

#include <iostream>
#include <list>
#include <iterator>
#include <algorithm>
using namespace std;

int main(int argc, char **argv)
{
    list<int> il{1,2,3,4,0,5,6,0,7,8,0,9};
    auto zero_iter = find(il.rbegin(), il.rend(), 0);
    
    if (zero_iter.base() == il.begin())
        cout << "this list doesn't has 0" << endl;
    else
        cout << "the last 0 position is :" << il.size() - (count_if(il.rbegin(), zero_iter, [](int i){return i != 0;}))  << endl;

    return 0;
}
