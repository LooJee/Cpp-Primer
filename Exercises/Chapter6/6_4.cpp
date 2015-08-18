#include <iostream>
using namespace std;

void getNum(int &num)
{
	cout << "please input a number:";
	cin >> num;
}

int fact(int val)
{
	int ret = 1;
	for (int i = 1; i <= val; ++i)
	{
		ret *= i;
	}
	return ret;
}

int main(int argc, char **argv)
{
	int i;
	getNum(i);
	int j = fact(i);
	cout << i << "! is " << j << endl;

	return 0;
}
