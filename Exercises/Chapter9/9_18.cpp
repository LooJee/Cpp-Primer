#include <iostream>
#include <string>
#include <deque>
using namespace std;

int main(int argc, char **argv)
{
	string str;

	cin >> str;
	deque<char> cdq(str.begin(), str.end());
	for (deque<char>::iterator iter = cdq.begin(); iter != cdq.end(); ++iter)
	{
		cout << *iter;
	}
	cout << endl;

	return 0;
}
