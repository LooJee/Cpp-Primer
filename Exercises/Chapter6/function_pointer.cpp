#include <iostream>
#include <vector>
using namespace std;

int myadd(int a, int b)
{
	return a+b;
}

int mymulti(int a, int b)
{
	return a*b;
}

int mysub(int a, int b)
{
	return a-b;
}

int mydiv(int a, int b)
{
	return a/b;
}

typedef int (*pf)(int, int);

int main(int argc, char **argv)
{
	vector<pf> pvec;
	pvec.push_back(myadd);
	pvec.push_back(mysub);
	pvec.push_back(mymulti);
	pvec.push_back(mydiv);

	cout << "add:" << pvec[0](1,2) << endl;
	cout << "subtraction:" << pvec[1](2,1) << endl;
	cout << "multiplication:" << pvec[2](2,1) << endl;
	cout << "division:" << pvec[3](2,1) << endl;

	return 0;

	return 0;
}
