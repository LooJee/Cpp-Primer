#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(int argc, char **argv)
{
	vector<int> ivec{0,1,2,3,4,5,6,1,2,3,5,5};
	int num = count(ivec.begin(), ivec.end(), 5);

	cout << num << endl;

	return 0;
}
