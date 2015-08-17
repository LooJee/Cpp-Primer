#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char **argv)
{
	vector<int> ivec1 = {0,1,1,1};
	vector<int> ivec2 = {0,1,1,2,3,5,8};

	auto iter1 = ivec1.begin();
	auto iter2 = ivec2.begin();

	for (; iter1 != ivec1.end() && iter2 != ivec2.end(); ++iter1, ++iter2)
	{
		if (*iter1 != *iter2)
		{
			cout << "false" << endl;
			return -1;
		}
	}

	cout << "true" << endl;

	return 0;
}
