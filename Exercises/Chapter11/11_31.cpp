/*************************************************************************
	> File Name: 11_31.cpp
	> Author: 
	> Mail: 
	> Created Time: 五 11/ 6 16:23:24 2015
 ************************************************************************/

#include <iostream>
#include <map>
#include <string>
using namespace std;

int main(int argc, char **argv)
{
    multimap<string, string> authors{{"lu", "hello"}
                                    , {"lu", "world"}
                                    , {"jie", "c++"}
                                    , {"jie", "primer"}
                                    , {"apple", "5th"}};
    auto count = authors.count("lu");
    auto iter = authors.find("lu");

    cout << "the work of author lu is";
    cout << (count ? ": " : "empty");
    while (count--) {
        cout << iter->second << " ";
        ++iter;
    }
    cout << endl;

    return 0;
}
