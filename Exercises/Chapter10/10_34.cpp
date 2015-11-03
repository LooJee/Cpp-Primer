/*************************************************************************
	> File Name: 10_34.cpp
	> Author: 
	> Mail: 
	> Created Time: 二 11/ 3 23:27:32 2015
 ************************************************************************/

#include <iostream>
#include <iterator>
#include <vector>
#include <algorithm>
using namespace std;

int main(int argc, char **argv)
{
    vector<int> ivec{1,2,3,4,5,6,7,8,9,0};
    for_each(ivec.rbegin(), ivec.rend(), [](int a){cout << a << " ";});
    cout << endl;

    return 0;
}
