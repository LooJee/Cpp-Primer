/*************************************************************************
	> File Name: 12_10.cpp
	> Author: Jerry Lu
	> Mail: mynameislujie1992@gmail.com
	> Created Time: 三 11/11 15:21:00 2015
 ************************************************************************/

#include <iostream>
#include <memory>
using namespace std;

void process(shared_ptr<int> p)
{
    cout << "reference counts: " << p.use_count() << endl;
}

int main(int argc, char **argv)
{
    shared_ptr<int> p(new int(1024));
    process(p);

    return 0;
}
