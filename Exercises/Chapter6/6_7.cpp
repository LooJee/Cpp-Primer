#include <iostream>
using namespace std;

int func()
{
	static int i = 0;
	return i++;
}

int main(int argc, char **argv)
{
	for (int i = 0; i < 10; ++i)
		cout << func() << endl;

	return 0;
}