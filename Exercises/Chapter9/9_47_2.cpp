#include <iostream>
#include <string>
using namespace std;

void FindChar(const string &str, const string &filter)
{
	string::size_type pos = 0;
	while ((pos = str.find_first_not_of(filter, pos)) != string::npos)
	{
		cout << "index:" << pos << " charactor:" << str[pos] << endl;
		++pos;
	}
}

int main(int argc, char **argv)
{
	string str("ab2c4d7R4E6");
	string numfilter("0123456789");
	string letterfilter("abcdefghijklmnopqrstuvwxyz" \
			"ABCDEFGHIJKLMNOPQRSTUVWXYZ");
	cout << "find letters:" << endl;
	FindChar(str, numfilter);
	cout << "find numbers:" << endl;
	FindChar(str, letterfilter);

	return 0;
}
