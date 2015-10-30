#include <iostream>
#include <algorithm>
using namespace std;

int main(int argc, char **argv)
{
	int a[10];
	fill_n(begin(a), 10, 10);

	for (auto i : a)
		cout << i << " ";
	cout << endl;

	return 0;
}
