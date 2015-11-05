/*************************************************************************
	> File Name: 11_7.cpp
	> Author: 
	> Mail: 
	> Created Time: 四 11/ 5 09:54:47 2015
 ************************************************************************/

#include <iostream>
#include <vector>
#include <string>
#include <map>
using namespace std;

int main(int argc, char **argv)
{
    map<string, vector<string> > family_map;
    family_map["lu"] = {"hello", "world"};
    family_map["jie"] = {"c++", "primer"};

    for (auto item : family_map)
    {
        cout << "lase name: " << item.first << " children: ";
        for (auto name : item.second)
            cout << name << " ";
        cout << endl;
    }

    return 0;
}
