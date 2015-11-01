/*************************************************************************
	> File Name: 10_21.cpp
	> Author: 
	> Mail: 
	> Created Time: 日 11/ 1 22:25:54 2015
 ************************************************************************/

#include<iostream>
using namespace std;

int main(int argc, char **argv)
{
    int i = 10;
    auto f = [i] () mutable -> bool {if (i > 0) {--i; return true;}else return false; };

    for (int a; a < 12; ++a) 
    {
        cout << f() << endl;
    }

    return 0;
}
