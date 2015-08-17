#include <iostream>
#include <string>
#include <stdexcept>
using namespace std;

int main(int argc, char **argv)
{
	int i, j;
	string str;

	do {
		cout << "please input two numbers:";
		try {
			cin >> i >> j;
			if (j == 0)
				throw runtime_error("the second number is 0");
			cout << "i/j = " << i/j << endl;
			break;
		}
		catch(runtime_error err){
			cout << err.what() << endl;
			cout << "do you want try again?(yes/no):";
			cin >> str;
			if (cin && str[0] == 'y')
				continue;
			else
				break;
		}
	} while (true);

	return 0;
}
