#include <iostream>
using namespace std;

void print(const int *p)
{
	cout << *p << endl;
}

void print(const int *beg, const int *end)
{
	for (const int *i = beg; i != end; ++i)
	{
		cout << *i << " ";
	}
	cout << endl;
}

int main(int argc, char **argv)
{
	int i = 0, j[2] = {0, 1};
	print(&i);
	print(begin(j), end(j));

	return 0;
}
