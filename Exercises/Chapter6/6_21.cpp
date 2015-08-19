#include <iostream>
using namespace std;

int myMax(const int a, const int *b)
{
	return a > *b ? a : *b;
}

int main(int argc, char **argv)
{
	int i = 0, j = 0;

	cout << "please input two numbers:";
	cin >> i >> j;
	cout << "the biggest one is :" << myMax(i, &j) << endl;

	return 0;
}
