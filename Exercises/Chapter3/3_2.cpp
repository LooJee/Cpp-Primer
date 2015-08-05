#include <iostream>
#include <string>
using namespace std;

int main(int argc, char **argv)
{
	string str;
	//once read a word
	/*
	while(cin >> str)
		cout << str << endl;
	*/
	//once read a line
	while(getline(cin, str))
		cout << str << endl;
	
	return 0;
}
