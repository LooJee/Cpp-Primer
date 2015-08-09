#include <iostream>
#include <string>
using namespace std;

int main(int argc, char **argv)
{
	string str;
	
	cin >> str;
/************************
	decltype(str.size()) i = 0;
	while (str[i])
	{
		str[i] = 'X';
		i++;
	}
*************************/
	for (decltype(str.size()) i = 0; i <= str.size(); i++)
	{
		str[i] = 'X';
	}
	cout << str << endl;

	return 0;
}
