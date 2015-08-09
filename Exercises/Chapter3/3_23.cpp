#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char **argv)
{
	int i;
	vector<int> ivec(10);

	cout << "please input ten nums:" << endl;
	while (cin >> i)
	{
		ivec.push_back(i);
	}
	
	if (ivec.size() != 10)
	{
		cout << "size of vector isn't 10" << endl;
		return -1;
	}
	for (auto iter = ivec.begin(); iter != ivec.end(); iter++)
	{
		*iter = *iter * 2;
	}

	for (auto i : ivec)
	{
		cout << i << " ";
	}
	cout << endl;

	return 0;
}
