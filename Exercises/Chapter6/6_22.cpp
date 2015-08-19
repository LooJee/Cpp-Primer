#include <iostream>
using namespace std;

void swap(int *&p1, int *&p2)
{
	int *tmp = p1;
	p1 = p2;
	p2 = tmp;
}

int main(int argc, char **argv)
{
	int i = 10, j = 20;
	int *ip1 = &i, *ip2 = &j;
	cout << "before swap: i = " << *ip1 << " j = " << *ip2 << endl;
	swap(ip1, ip2);
	cout << "after swap: i = " << *ip1 << " j = " << *ip2 << endl;
	
	return 0;
}
