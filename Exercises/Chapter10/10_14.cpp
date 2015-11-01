/*************************************************************************
	> File Name: 10_14.cpp
	> Author: 
	> Mail: 
	> Created Time: 日 11/ 1 20:27:22 2015
 ************************************************************************/

#include<iostream>
using namespace std;

int main(int argc, char **argv)
{
    auto f = [](int a, int b) {return a + b;}; 
    cout << f(1,2) << endl;

    return 0;
}
