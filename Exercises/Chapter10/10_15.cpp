/*************************************************************************
	> File Name: 10_15.cpp
	> Author: 
	> Mail: 
	> Created Time: 日 11/ 1 20:43:52 2015
 ************************************************************************/

#include<iostream>
using namespace std;

int main(int argc, char **argv)
{
    int a = 10;
    auto f = [a](int b){return a + b;};

    cout << f(10) << endl;

    return 0;
}
