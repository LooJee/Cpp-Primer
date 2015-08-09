#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(int argc, char **argv)
{
	int num;
	vector<int> ivec;

	while (cin >> num)
	{
		ivec.push_back(num);
	}

	if (ivec.empty())
	{
		cout << "vector is empty" << endl;
		return -1;
	}

	if (ivec.size() == 1)
	{
		cout << "only one element in vector: " << ivec[1] << endl;
		return -1;
	}

	for (auto i = ivec.begin(); i < ivec.end(); i++)
	{
		cout << *i + *(i+1) << endl;
	}
	cout << endl;

	for (auto i = ivec.begin(), j = ivec.end()-1; i < j; i++, j--)
	{
		cout << *i + *j << endl;
	}
	if (ivec.size()%2)
	{
		cout << *(ivec.begin() + (ivec.end() - ivec.begin())/2) << endl;
	}
	cout << endl;

	return 0;
}
