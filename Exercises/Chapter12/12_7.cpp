/*************************************************************************
	> File Name: 12_7.cpp
	> Author: Jerry Lu
	> Mail: mynameislujir1992@gmail.com
	> Created Time: 二 11/10 16:59:55 2015
 ************************************************************************/

#include <iostream>
#include <vector>
#include <memory>
using namespace std;

shared_ptr<vector<int> > Alloc()
{
    return make_shared<vector<int> >();
}

void InputData(istream &in, shared_ptr<vector<int> > pivec)
{
    int ele;
    while (cin >> ele)
    {
        pivec->push_back(ele);
    }
}

void Display(ostream &out, shared_ptr<vector<int> > pivec)
{
    for (auto iter = pivec->begin(); iter != pivec->end(); ++iter)
    {
        out << *iter << " ";
    }
    cout << endl;
}

int main(int argc, char **argv)
{
    shared_ptr<vector<int> > pivec = Alloc();
    InputData(cin, pivec);
    Display(cout, pivec);

    return 0;
}
