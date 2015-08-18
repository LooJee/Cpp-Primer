#include <iostream>
using namespace std;

int func(int i)
{
	static int j = 0;
	int a = 2;
	j += i;
	return j*a;
}

int main(int argc, char **argv)
{
	int ia[] = {0, 1, 2, 3, 4, 5};

	for (auto a : ia)
		cout << func(a) << endl;
	
	return 0;
}
