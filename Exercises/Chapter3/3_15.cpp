#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(int argc, char **argv)
{
	string str;
	vector<string> strvec;

	while(cin >> str)
		strvec.push_back(str);

	return 0;
}
