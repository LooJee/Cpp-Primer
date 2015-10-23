#include <iostream>
#include <list>
using namespace std;

int main(int argc, char **argv)
{
	list<int> il{0,1,2,3,4,5,6,7,8,9};
	auto iter = il.begin();

	while (iter != il.end())
	{
		if (*iter % 2)
		{
			iter = il.insert(iter, *iter);
			iter++;
			iter++;
		}
		else
			iter = il.erase(iter);
	}

	for (auto v : il)
	{
		cout << v << " ";
	}
	cout << endl;

	return 0;
}
