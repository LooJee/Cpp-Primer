/*************************************************************************
	> File Name: 11_3.cpp
	> Author: 
	> Mail: 
	> Created Time: 三 11/ 4 21:33:19 2015
 ************************************************************************/

#include <iostream>
#include <map>
#include <string>
#include <fstream>
#include <iterator>
using namespace std;

int main(int argc, char **argv)
{
    map<string, size_t> word_count;
    
    ifstream in(argv[1]);
    if (!in)
    {
        cout << "open file failed" << endl;
        return -1;
    }
    istream_iterator<string> in_iter(in), eof;
    while (in_iter != eof)
    {
        ++word_count[*in_iter++];
    }

    for (const auto &word : word_count)
        cout << "word:" << word.first << " count:" << word.second << endl;

    return 0;
}
