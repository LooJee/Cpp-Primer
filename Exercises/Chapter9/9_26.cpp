#include <iostream>
#include <vector>
#include <list>
using namespace std;

int main(int argc, char **argv)
{
	int ia[] = {0, 1, 1, 2, 3, 5, 8, 13, 21, 55, 89};
	vector<int> ivec(begin(ia), end(ia));
	list<int> il(begin(ia), end(ia));

	cout << "vector before remove:";
	for (auto iter = ivec.begin(); iter != ivec.end(); ++iter)
	{
		cout << *iter << " ";
	}
	cout << endl;

	cout << "list before remove:";
	for (auto iter = il.begin(); iter != il.end(); ++iter)
	{
		cout << *iter << " ";
	}
	cout << endl;

	auto veciter = ivec.begin();
	while (veciter != ivec.end())
	{
		if (*veciter % 2 == 0)
			veciter = ivec.erase(veciter);
		else
			++veciter;
	}

	auto liter = il.begin();
	while (liter != il.end())
	{
		if (*liter % 2 != 0)
			liter = il.erase(liter);
		else
			++liter;
	}
	cout << "vector:";
	for (auto iter = ivec.begin(); iter != ivec.end(); ++iter)
	{
		cout << *iter << " ";
	}
	cout << endl;

	cout << "lsit:";
	for (auto iter = il.begin(); iter != il.end(); ++iter)
	{
		cout << *iter << " ";
	}
	cout << endl;

	return 0;
}
