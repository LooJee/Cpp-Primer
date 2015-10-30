#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

bool BiggerThanFive(const string &str)
{
	return str.size() >= 5;
}

void displayEle(vector<string> &svec)
{
	for (const auto &a : svec)
		cout << a << " ";
	cout << endl;
}

void PartEle(vector<string> &svec)
{
	auto end_part = partition(svec.begin(), svec.end(), BiggerThanFive);
	displayEle(svec);

	svec.erase(end_part, svec.end());
	displayEle(svec);
}

int main(int argc, char **argv)
{
	vector<string> svec{"hello", "world", "c++", "primer"};
	PartEle(svec);
	
	return 0;
}
