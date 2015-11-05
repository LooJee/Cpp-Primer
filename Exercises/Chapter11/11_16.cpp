/*************************************************************************
	> File Name: 11_16.cpp
	> Author: 
	> Mail: 
	> Created Time: 四 11/ 5 17:43:26 2015
 ************************************************************************/

#include <iostream>
#include <map>
using namespace std;

int main(int argc, char **argv)
{
    map<int, int> imap{{1,2}};
    auto iter = imap.begin();
    iter->second = 3;
    cout << iter->second << endl;

    return 0;
}
