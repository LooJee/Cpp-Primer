#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char **argv)
{
	vector<int> ivec{0,1,2,3,4,5};
	int ia[6] = {};
	int *p = ia;

	for (auto i = ivec.begin(); i != ivec.end() && p != end(ia); i++)
	{
		*(p++) = *i;
	}

	for (auto a : ia)
	{
		cout << a << " ";
	}
	cout << endl;

	return 0;
}
