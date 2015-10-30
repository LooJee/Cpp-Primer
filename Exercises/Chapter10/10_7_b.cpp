#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(int argc, char **argv)
{
	vector<int> vec;
	vec.reserve(10);
	fill_n(back_inserter(vec), 10, 0);

	for (auto a : vec)
		cout << a << " ";
	cout << endl;

	return 0;
}
