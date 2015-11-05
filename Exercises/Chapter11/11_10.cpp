/*************************************************************************
	> File Name: 11_10.cpp
	> Author: 
	> Mail: 
	> Created Time: 四 11/ 5 13:50:57 2015
 ************************************************************************/

#include <iostream>
#include <map>
#include <vector>
#include <list>
using namespace std;

int main(int argc, char **argv)
{
    vector<int> ivec(1,2,3,4,5);
    list<int> il(ivec.begin(), ivec.end());

    //vector<int>::iterator is a random-access iterator which define a '<' operation, so we could define a map from vector<int>::iterator to int
    map<vector<int>::iterator, int> ivecMap{{ivec.begin(), 1}};

    //list<int>::iterator is a bidirectional iterator which not define a '<' operation, so we couldn't define a map from list<int>::iterator to int
    map<list<int>::iterator, int> ilMap{{il.begin(), 1}};

    return 0;
}
