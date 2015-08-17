#include <iostream>
#include <string>
using namespace std;

int main(int argc, char **argv)
{
	string prev;
	string word;
	bool isSame = false;

	cout << "please inout a series of words:" << endl;
	while (cin >> word)
	{
		if (word == prev)
		{
			isSame = true;
			break;
		}
		prev = word;
	}

	if (isSame)
	{
		cout << "the same word is :" << prev << endl;
	}
	else
	{
		cout << "don't have two same word in a row" << endl;
	}

	return 0;
}
