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

	for (decltype(ivec.size()) i = 0; i < ivec.size()-1; i++)
	{
		cout << ivec[i] + ivec[i+1] << endl;
	}
	cout << endl;

	for (decltype(ivec.size()) i = 0, j = ivec.size()-1; i < j; i++, j--)
	{
		cout << ivec[i] + ivec[j] << endl;
	}
	if (ivec.size()%2)
	{
		cout << ivec[ivec.size()/2] << endl;
	}
	cout << endl;

	return 0;
}
