#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
	int i = 0;

	while (cin >> i && i != 42)
	{
		cout << i << ' ';
	}

	cout << endl;

	return 0;
}
