#include <iostream>
using namespace std;

int main(int argc ,char **argv)
{
	int ia[3][4] = {
		{0,1,2,3},
		{1,2,3,4},
		{2,3,4,5}
	};

	cout << "使用范围for语句管理迭代过程" << endl;
	for (int (&p)[4] : ia)
	{
		for (int i : p)
		{
			cout << i << ' ';
		}
		cout << endl;
	}
	cout << endl;

	cout << "use index" << endl;
	for (int i = 0; i != 3; i++)
	{
		for (int j = 0; j != 4; j++)
		{
			cout << ia[i][j] << ' ';
		}
		cout << endl;
	}
	cout << endl;

	cout << "use pointer" << endl;
	for (int (*i)[4] = begin(ia); i != end(ia); i++)
	{
		for (int *j = begin(*i); j != end(*i); j++)
		{
			cout << *j << ' ';
		}
		cout << endl;
	}
	cout << endl;
	return 0;
}
