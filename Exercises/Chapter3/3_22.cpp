#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(int argc, char **argv)
{
	string str;
	vector<string> text;

	while (cin >> str)
		text.push_back(str);

	for (auto iter = text.begin(); iter != text.end() && !iter->empty(); iter++)
	{
		for (auto &c : *iter)
		{
			c = toupper(c);
		}

		cout << *iter << endl;
	}

	return 0;
}
