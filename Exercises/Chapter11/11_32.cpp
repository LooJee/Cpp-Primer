/*************************************************************************
	> File Name: 11_32.cpp
	> Author: 
	> Mail: 
	> Created Time: 五 11/ 6 16:42:46 2015
 ************************************************************************/

#include <iostream>
#include <map>
#include <set>
#include <string>
using namespace std;

int main(int argc, char **argv)
{
    multimap<string, string> authors{{"lu", "world"}
                                    , {"lu", "hello"}
                                    , {"jie", "c++"}
                                    , {"jie", "primer"}
                                    , {"apple", "5th"}};

    map<string, multiset<string> > authors_set;

    for (const auto &ele : authors)
    {
        authors_set[ele.first].insert(ele.second);
    }

    for (const auto &ele : authors_set)
    {
        cout << "author: " << ele.first << " works: ";
        for (const auto &work : ele.second)
        {
            cout << work << " ";
        }
        cout << endl;
    }

    return 0;
}
