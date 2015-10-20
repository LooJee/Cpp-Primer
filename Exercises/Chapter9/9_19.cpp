#include <iostream>
#include <string>
#include <list>
using namespace std;

int main(int argc, char **argv)
{
	string str;

	cin >> str;
	list<char> cl(str.begin(), str.end());
	for (list<char>::iterator iter = cl.begin(); iter != cl.end(); ++iter)
	{
		cout << *iter;
	}
	cout << endl;

	return 0;
}
