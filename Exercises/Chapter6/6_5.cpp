#include <iostream>
using namespace std;

int myabs(int num)
{
	return num < 0 ? -num : num;
}

int main(int argc, char **argv)
{
	int i = 0;
	cout << "please input a number:";
	cin >> i;
	cout << "absolute value of " << i << " is " << myabs(i) << endl;

	return 0;
}
