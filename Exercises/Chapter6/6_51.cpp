#include <iostream>
using namespace std;

void f()
{
	cout << "i am f()" << endl;
}

void f(int a)
{
	cout << "i am f(int)" << endl;
}

void f(int a, int b)
{
	cout << "i am f(int, int)" << endl;
}

void f(double a, double b=3.14)
{
	cout << "i am f(double, double=3.14)" << endl;
}

int main(int argc, char **argv)
{
	f(2.56, 42); //wrong
	f(42);
	f(42, 0);
	f(2.56, 3.14);

	return 0;
}

