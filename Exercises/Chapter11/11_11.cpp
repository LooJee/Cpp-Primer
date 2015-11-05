/*************************************************************************
	> File Name: 11_11.cpp
	> Author: 
	> Mail: 
	> Created Time: 四 11/ 5 14:07:11 2015
 ************************************************************************/

#include <iostream>
#include <set>
using namespace std;

class Sales_data{
    public:
        int isbn() const { return 1; }
};

bool compareIsbn(const Sales_data &lhs, const Sales_data &rhs)
{
    return lhs.isbn() < rhs.isbn();
}

int main(int argc, char **argv)
{
    typedef bool (*comparefunc)(const Sales_data &, const Sales_data &);
    multiset<Sales_data, comparefunc> bookstore(compareIsbn);

    return 0;
}

