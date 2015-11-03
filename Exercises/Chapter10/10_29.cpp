/*************************************************************************
	> File Name: 10_29.cpp
	> Author: 
	> Mail: 
	> Created Time: 二 11/ 3 09:28:07 2015
 ************************************************************************/

#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <iterator>
#include <algorithm>
using namespace std;

int main(int argc, char **argv)
{
    ifstream in(argv[1]);
    if (!in)
        cout << "file is invalid" << endl;
    istream_iterator<string> in_iter(in), eof;
    ostream_iterator<string> out_iter(cout, " ");
    vector<string> svec;
    copy(in_iter, eof, back_inserter(svec));
    copy(svec.begin(), svec.end(), out_iter);

    return 0;
}
