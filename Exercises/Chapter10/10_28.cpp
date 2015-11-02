/*************************************************************************
	> File Name: 10_28.cpp
	> Author: 
	> Mail: 
	> Created Time: 一 11/ 2 11:04:01 2015
 ************************************************************************/

#include <iostream>
#include <iterator>
#include <algorithm>
#include <vector>
#include <list>
#include <deque>
#include <forward_list>
using namespace std;

void display(int a)
{
    cout << a << " ";
}

int main(int argc, char **argv)
{
    vector<int> ivec{1,2,3,4,5,6,7,8,9};
    list<int> il;
    deque<int> id;
    forward_list<int> ifl;

    copy(ivec.begin(), ivec.end(), back_inserter(il));
    copy(ivec.begin(), ivec.end(), inserter(id, id.begin()));
    copy(ivec.begin(), ivec.end(), front_inserter(ifl));

    for_each(il.begin(), il.end(), display);
    cout << endl;
    
    for_each(id.begin(), id.end(), display);
    cout << endl;

    for_each(ifl.begin(), ifl.end(), display);
    cout << endl;

    return 0;
}
