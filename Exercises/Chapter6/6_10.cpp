#include <iostream>
using namespace std;

void swap(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

int main(int argc, char **argv)
{
	int i = 1, j = 2;
	swap(&i, &j);
	cout << "after swap:" << endl;;
	cout << "i:" << i << " j:" << j << endl;

	return 0;
}
