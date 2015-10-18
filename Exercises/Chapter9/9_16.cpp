#include <iostream>
#include <vector>
#include <list>
using namespace std;

int main(int argc, char **argv)
{
	vector<int> v1{1,2,3,4,5};
	list<int> l1{1,2,3,4,4};
	vector<int> v2(l1.begin(), l1.end());

	if (v1 == v2)
		cout << "v1 equals to l1." << endl;
	else
		cout << "v1 doesn't equal to l1." << endl;

	return 0;
}
