#include <iostream>
using namespace std;

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
	int j = fact(5);
	cout << "5! is " << j << endl;

	return 0;
}
