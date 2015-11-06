/*************************************************************************
	> File Name: 11_23.cpp
	> Author: 
	> Mail: 
	> Created Time: 五 11/ 6 11:15:11 2015
 ************************************************************************/

#include <iostream>
#include <map>
#include <string>
using namespace std;

int main(int argc, char **argv)
{
    multimap<string, string> familyMap;
    string lastname;
    string childname;

    while (cin >> lastname >> childname)
        familyMap.insert({lastname, childname});

    for (auto iter = familyMap.begin(); iter != familyMap.end(); ++iter)
        cout << "last name: " << iter->first << "child name: " << iter->second << endl;

    return 0;
}
