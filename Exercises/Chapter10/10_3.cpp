#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

int main(int argc, char **argv)
{
	vector<int> ivec{1,2,3,4,5,6,7,8,9};
	int sum = accumulate(ivec.begin(), ivec.end(), 0);

	cout << sum << endl;

	return 0;
}
