/*************************************************************************
	> File Name: 10_33.cpp
	> Author: 
	> Mail: 
	> Created Time: 二 11/ 3 10:04:39 2015
 ************************************************************************/

#include <iostream>
#include <fstream>
#include <algorithm>
#include <iterator>
using namespace std;

int main(int argc, char **argv)
{
    ifstream in_file(argv[1]);
    ofstream odd_file(argv[2]), even_file(argv[3]);
    
    if (!in_file || !odd_file || !even_file)
    {
        cout << "file invalid." << endl;
        return -1;
    }
    istream_iterator<int> in_iter(in_file), eof;
    ostream_iterator<int> odd_iter(odd_file, " "), even_iter(even_file, " ");

    while (in_iter != eof)
    {
        if (*in_iter % 2 == 0)
        {
            odd_iter = *in_iter;
        }
        else
        {
            even_iter = *in_iter;
        }
        ++in_iter;
    }

    return 0;
}
