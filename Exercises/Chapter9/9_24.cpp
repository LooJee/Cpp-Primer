#include <iostream>
#include <vector>
using namespace std;

void getFirstEle(const vector<int> &vec)
{
	cout << vec.at(0) << endl;
	cout << vec[0] << endl;
	cout << vec.front() << endl;
	cout << *(vec.begin()) << endl;
}

int main(int argc, char **argv)
{
	vector<int> ivec(1);
	getFirstEle(ivec);

	return 0;
}
