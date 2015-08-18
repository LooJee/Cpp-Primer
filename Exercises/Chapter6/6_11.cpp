#include <iostream>
using namespace std;

void reset(int &num)
{
	num = 0;
}

int main(int argc, char **argv)
{
	int i = 10;
	cout << "before reset:" << i << endl;
	reset(i);
	cout << "after reset:" << i << endl;

	return 0;
}
