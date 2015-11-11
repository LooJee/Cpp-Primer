/*************************************************************************
	> File Name: 12_14.cpp
	> Author: Jerry Lu
	> Mail: mynameislujie1992@gmail.com
	> Created Time: 三 11/11 17:46:23 2015
 ************************************************************************/

#include <iostream>
#include <memory>
using namespace std;

struct destination{
    int a;
};

struct connection{
    int b;
};

connection connect(destination *d)
{
    shared_ptr<connection> con(new connection);
    cout << "connect." << endl;
    return *con;
}

void disconnect(connection con)
{
    cout << "disconnect:" << con.b <<  endl;
}

void end_connection(connection *p)
{
    disconnect(*p);
}

void f(destination &d)
{
    connection c = connect(&d);
    shared_ptr<connection> p(&c, end_connection);
}

int main(int argc, char **argv)
{
    destination d{1};
    f(d);

    return 0;
}
