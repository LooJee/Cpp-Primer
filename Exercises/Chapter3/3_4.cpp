#include <iostream>
#include <string>
using namespace std;

int main(int argc, char **argv)
{
	string str1, str2;

	cin >> str1 >> str2;
	cout << "the two string are same or not: ";
	if (str1 == str2)
		cout << "the two string are same." << endl;
	else if(str1 > str2)
		cout << str1 << " is the biggest" << endl;
	else
		cout << str2 << " is the biggest" << endl;

	cout << "the two string have the same length? ";
	if (str1.size() == str2.size())
		cout << "the two string have the same length" << endl;
	else if (str1.size() > str2.size())
		cout << str1 << " is the biggest" << endl;
	else
		cout << str2 << " is the biggest" << endl;

	return 0;
}
