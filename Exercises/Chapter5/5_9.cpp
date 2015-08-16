#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
	char ch;
	int vowelcnt = 0;

	while (cin >> ch)
	{
		if (ch == 'a')
			++vowelcnt;
		if (ch == 'e')
			++vowelcnt;
		if (ch == 'i')
			++vowelcnt;
		if (ch == 'o')
			++vowelcnt;
		if (ch == 'u')
			++vowelcnt;
	}

	cout << vowelcnt << endl;

	return 0;
}
