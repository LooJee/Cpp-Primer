/*************************************************************************
	> File Name: 10_30.cpp
	> Author: 
	> Mail: 
	> Created Time: 二 11/ 3 09:40:57 2015
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <iterator>
#include <vector>
using namespace std;

int main(int argc, char **argv)
{
    istream_iterator<int> in_iter(cin), eof;
    ostream_iterator<int> out_iter(cout, " ");
    vector<int> ivec;

    copy(in_iter, eof, back_inserter(ivec));
    sort(ivec.begin(), ivec.end());
    copy(ivec.begin(), ivec.end(), out_iter);

    return 0;
}
