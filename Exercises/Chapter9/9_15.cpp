#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char **argv)
{
	vector<int> v1{1,2,3,4,5};
	vector<int> v2{1,2,3,4,4};

	if (v1 == v2)
		cout << "v1 equals to v2." << endl;
	else
		cout << "v1 doesn't equal to v2." << endl;

	return 0;
}
