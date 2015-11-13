/*************************************************************************
	> File Name: 13_8.cpp
	> Author: Jerry Lu
	> Mail: mynameislujie1992@gmail.com
	> Created Time: 五 11/13 16:16:28 2015
 ************************************************************************/

#include <iostream>
#include <string>
#include <memory>
using namespace std;

class HasPtr{
public:
    HasPtr(const string &s = string()) : ps(new string(s)), i(0) {}
    HasPtr(const HasPtr &hp) : ps(hp.ps), i(hp.i) {}
    HasPtr &operator=(const HasPtr &hp)
    {
        ps = hp.ps;
        i = hp.i;
        return *this;
    }
private:
    string *ps;
    int i;
};

