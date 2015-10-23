#include <iostream>
#include <forward_list>
using namespace std;

int main(int argc, char **argv)
{
	forward_list<int> il{0,1,2,3,4,5,6,7,8,9};
	auto iter = il.begin();
	auto preiter = il.before_begin();

	while (iter != il.end())
	{
		if (*iter % 2)
		{
			iter = il.insert_after(iter, *iter);
			++iter;
			++preiter;
			++preiter;
		}
		else
			iter = il.erase_after(preiter);
	}

	for (auto v : il)
	{
		cout << v << " ";
	}
	cout << endl;

	return 0;
}
