#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(int argc, char **argv)
{
	char a[] = "hello world";
	vector<char> cvec(begin(a), end(a));
	string str(cvec.begin(), cvec.end());

	cout << str << endl;

	return 0;
}
