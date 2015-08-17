#include <iostream>
#include <string>
using namespace std;

int main(int argc, char **argv)
{
	string resp;

	do{
		string str1, str2;
		cout << "please input two string:";
		cin >> str1 >> str2;
		cout << "the shorter one is:" 
				<< (str1.size() >= str2.size() ? str2 : str1) 
				<< endl; 
		cout << "do you want try again?(yes/no):";
		cin >> resp;
	}while(cin && resp[0] == 'y');

	return 0;
}
