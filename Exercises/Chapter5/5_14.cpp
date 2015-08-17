#include <iostream>
#include <string>
using namespace std;

int main(int argc, char **argv)
{
	string prev;
	string str;
	unsigned cnt = 1;
	unsigned maxcnt = 1;

	cout << "please input a series of word" << endl;
	while (cin >> str)
	{
		if (str == prev)
		{
			++cnt;
		}
		else
		{
			if (cnt > maxcnt)
			{
				maxcnt = cnt;
			}
			cnt = 1;
		}
		prev = str;
	}

	if (cnt > maxcnt)
	{
		maxcnt = cnt;
	}

	if (maxcnt > 1)
	{
		cout << "max:" << maxcnt << endl;
	}
	else
	{
		cout << "every word are different" << endl;
	}

	return 0;
}
