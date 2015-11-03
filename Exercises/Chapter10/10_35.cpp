/*************************************************************************
	> File Name: 10_35.cpp
	> Author: 
	> Mail: 
	> Created Time: 二 11/ 3 23:31:57 2015
 ************************************************************************/

#include <iostream>
#include <vector>
#include <iterator>
using namespace std;

int main(int argc, char **argv)
{
    vector<int> ivec{1,2,3,4,5,6,7,8,9,0};

    for (auto iter = ivec.end()-1; iter != ivec.begin(); --iter)
        cout << *iter << " ";
    cout << *(ivec.begin()) << endl;

    return 0;
}
