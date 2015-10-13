#include <iostream>
#include <vector>
using namespace std;

vector<int>::iterator find(vector<int>::iterator bg, vector<int>::iterator ed, int num)
{
	while (ed != bg)
	{
		cout << *bg << endl;
		if (*bg == num)
		{
			return bg;
		}
		++bg;
	}

	return ed;
}

int main(int argc, char **argv)
{
	vector<int> intvec{1,2,3,4,5,6};
	if (find(intvec.begin(), intvec.end(), 10) != intvec.end())
	{
		cout << "find it" << endl;
	}
	else
	{
		cout << "don't find it" << endl;
	}

	return 0;
}
