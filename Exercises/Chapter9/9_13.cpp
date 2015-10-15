#include <iostream>
#include <vector>
#include <list>
using namespace std;

int main(int argc, char **argv)
{
	list<int> ilist(10, 1);
	vector<int> ivec(10, 1);
//	vector<double> dvec(ilist.begin(), ilist.end());
	vector<double> dvec(ivec.begin(), ivec.end());

	for (auto iter = dvec.begin(); iter != dvec.end(); ++iter)
	{
		cout << *iter << " ";
	}
	cout << endl;
}
