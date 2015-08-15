#include <iostream>
#include <cstring>
#include <vector>
using namespace std;

int main(int argc, char **argv)
{
	int a[] = {0,1,2,3,4,5};
	vector<int> ivec(a, a+6);

	for(auto a : ivec)
	{
		cout << a << " ";
	}
	cout << endl;

	return 0;
}
