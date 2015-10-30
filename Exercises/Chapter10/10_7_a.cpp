#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
using namespace std;

int main(int argc, char **argv)
{
	list<int> lst;
	int i ;
	while (cin >> i)
		lst.push_back(i);
	vector<int> vec(lst.size());
	copy(lst.cbegin(), lst.cend(), vec.begin());

	for (auto a : vec)
		cout << a << " ";
	cout << endl;

	return 0;
}
