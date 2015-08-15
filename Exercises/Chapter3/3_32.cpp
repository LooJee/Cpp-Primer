#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
	constexpr size_t arraysize = 10;
	int ia[arraysize] = {0};
	int ib[arraysize] = {0};

	for (int i = 0; i < arraysize; i++)
	{
		ia[i] = i;	
	}

	for (int i = 0; i < arraysize; i++)
	{
		ib[i] = ia[i];
	}
	
	for (auto a : ib)
	{
		cout << a << " ";
	}
	cout << endl;

	return 0;
}
