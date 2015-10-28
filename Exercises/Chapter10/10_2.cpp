#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

int main(int argc, char **argv)
{
	vector<string> svec{"hello", "world", "c++", "hello"};
	int num = count(svec.begin(), svec.end(), "hello");

	cout << num << endl;

	return 0;
}
