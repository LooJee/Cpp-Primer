/*************************************************************************
	> File Name: 12_25.cpp
	> Author: Jerry Lu
	> Mail: mynameislujie1992@gmail.com
	> Created Time: 四 11/12 17:46:13 2015
 ************************************************************************/

#include <iostream>
#include <memory>
using namespace std;

int main(int argc, char **argv)
{
    int *pa = new int[10];
    delete [] pa;

    return 0;
}
