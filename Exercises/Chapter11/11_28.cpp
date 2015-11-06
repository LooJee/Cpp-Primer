/*************************************************************************
	> File Name: 11_28.cpp
	> Author: 
	> Mail: 
	> Created Time: 五 11/ 6 16:16:42 2015
 ************************************************************************/

#include <iostream>
#include <map>
#include <string>
#include <vector>
using namespace std;

int main(int argc, char **argv)
{
    map<string, vector<int> > vecMap;

    map<string, vector<int> >::iterator iter = vecMap.find("hello");

    return 0;
}
