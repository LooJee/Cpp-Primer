/*************************************************************************
	> File Name: 12_23.cpp
	> Author: Jerry Lu
	> Mail: mynameislujie1992@gmail.com
	> Created Time: 四 11/12 17:20:41 2015
 ************************************************************************/

#include <iostream>
#include <string>
#include <memory>
#include <cstring>
using namespace std;

int main(int argc, char **argv)
{
    char cstr1[] = "hello,";
    char cstr2[] = "world";

    size_t cstr1len = strlen(cstr1);
    size_t cstr2len = strlen(cstr2);
    char *pcstr = new char[cstr1len + cstr2len + 1]();
    strcat(pcstr, cstr1);
    strcat(pcstr, cstr2);

    cout << "string after concatenated: " << pcstr << endl;
    delete [] pcstr;

    string str1(cstr1);
    string str2(cstr2);
    string constr = str1 + str2;
    cout << "string after concatenated: " << constr << endl;

    return 0;
}
