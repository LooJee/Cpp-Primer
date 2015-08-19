#include <iostream>
#include <vector>
using namespace std;

void print(vector<int>::iterator ele, vector<int>::iterator end)
{
	if (ele != end)
	{
		cout << *ele << ' ';
		print(ele+1, end);
	}
	else
	{
		cout << endl;
	}
}

int main(int argc, char **argv)
{
	vector<int> ivec{1,2,3,4,5,6,7,8,9,0};
	print(ivec.begin(), ivec.end());

	return 0;
}
