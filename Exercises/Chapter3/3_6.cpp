#include <iostream>
#include <string>
using namespace std;

int main(int argc, char **argv)
{
	string str;

	cout << "please input a string" << endl;
	cin >> str;

	for (auto &c : str)
	{
		c = 'X';
	}

	cout << str << endl;

	return 0;
}
