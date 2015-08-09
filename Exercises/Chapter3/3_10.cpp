#include <iostream>
#include <string>
using namespace std;

int main(int arg, char **argv)
{
	string str;
	string result;

	cin >> str;

	for (auto c : str)
	{
		if (!ispunct(c)){
			result += c;
		}
 	}

	cout << result << endl;

	return 0;
}
