#include <iostream>
#include <initializer_list>
using namespace std;

int mySum(initializer_list<int> il)
{
	int sum = 0;
	for (auto a : il)
	{
		sum += a;
	}

	return sum;
}

int main(int argc, char **argv)
{
	cout << mySum({1,2,3,4,5,6,7,8,9,0}) << endl;

	return 0;
}
