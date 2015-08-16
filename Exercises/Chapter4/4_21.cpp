#include <iostream>
#include <vector>
using namespace std;

int main(int argc ,char **argv)
{
	vector<int> ivec;
	int i = 0;

	while (cin >> i)
	{
		ivec.push_back(i);
	}

	for (auto &a : ivec)
	{
		a = (a % 2) ? (a * 2) : a;
	}

	for (auto a : ivec)
	{
		cout << a << ' ';
	}
	cout << endl;

	return 0;
}
