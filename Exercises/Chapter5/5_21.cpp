#include <iostream>
#include <string>
using namespace std;

int main(int argc, char **argv)
{
	string word;
	string prev;
	bool bSame = false;

	cout << "please input a series of words: " << endl;
	while (cin >> word)
	{
		if (word[0] >= 'A' &&  word[0] <= 'Z')
		{
			if (prev == word)
			{
				bSame = true;
				break;
			}
			else
			{
				prev = word;
			}
		}
		else
		{
			prev = "";
			continue;
		}
	}

	if (bSame)
	{
		cout << "the same word is :" << prev << endl;
	}
	else
	{
		cout << "don't have same words in a row" << endl;
	}

	return 0;
}
