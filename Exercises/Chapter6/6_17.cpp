#include <iostream>
using namespace std;

bool haveUpper(const string &str)
{
	for(auto a : str)
		if (a >= 'A' && a <= 'Z')
			return true;

	return false;
}

void myLower(string &str)
{
	for (auto &a : str)
		a = (a >= 'A' && a <= 'Z') ? (a - 'A' + 'a') : a;
}

int main(int argc, char **argv)
{
	string str("Hello World");
	
	if (haveUpper(str))
		cout << "string has upper case" << endl;
	else
		cout << "string doesn't have upper case" << endl;

	cout << "before my lower function :" << str << endl;
	myLower(str);
	cout << "after my lower function :" << str << endl;

	return 0;
}
