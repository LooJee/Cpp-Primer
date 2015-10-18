#include <iostream>
#include <list>
#include <vector>
using namespace std;

int main(int argc, char **argv)
{
	list<char *> clist{"hello", "world", "c++"};
	vector<string> sVec(clist.begin(), clist.end());

	for (auto a : sVec)
	{
		cout << a << endl;
	}

	return 0;
}
