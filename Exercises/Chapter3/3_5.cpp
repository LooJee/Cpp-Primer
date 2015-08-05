#include <iostream>
#include <string>
using namespace std;

int main(int argc, char **argv)
{
	string str, sum;
	//add the strings without the space
	/*
	while(cin >> str)
		sum += str;
	*/
	//add the strings with the space
	while (cin >> str)
		sum = sum + " " + str;
	
	cout << sum << endl;
}	
