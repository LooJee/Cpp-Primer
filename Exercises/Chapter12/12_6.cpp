/*************************************************************************
	> File Name: 12_6.cpp
	> Author: Jerry Lu
	> Mail: mynameislujir1992@gmail.com
	> Created Time: 二 11/10 16:53:55 2015
 ************************************************************************/

#include <iostream>
#include <vector>
#include <memory>
using namespace std;

vector<int> *Alloc()
{
    return new vector<int>;
}

void InputData(istream &in, vector<int> *pivec)
{
    int ele;
    while (cin >> ele)
    {
        pivec->push_back(ele);
    }
}

void Display(ostream &out, vector<int> *pivec)
{
    for (auto iter = pivec->begin(); iter != pivec->end(); ++iter)
    {
        out << *iter << " ";
    }
    cout << endl;
}

int main(int argc, char **argv)
{
    vector<int> *pivec = Alloc();
    InputData(cin, pivec);
    Display(cout, pivec);
    delete pivec;
    pivec = nullptr;

    return 0;
}
