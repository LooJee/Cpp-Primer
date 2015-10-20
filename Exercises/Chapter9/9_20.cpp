#include <iostream>
#include <list>
#include <deque>
using namespace std;

int main(int argc, char **argv)
{
	list<int> il{1,2,3,4,5,6,7,8,9};
	deque<int> idqeven, idqodd;

	for (list<int>::iterator iter = il.begin(); iter != il.end(); ++iter)
	{
		if (*iter % 2 == 0)
			idqeven.push_back(*iter);
		else
			idqodd.push_back(*iter);
	}

	cout << "the even numbers:";
	for (deque<int>::iterator iter = idqeven.begin(); iter != idqeven.end(); ++iter)
	{
		cout << *iter << " ";
	}
	cout << endl;

	cout << "the odd numbers:";
	for (deque<int>::iterator iter = idqodd.begin(); iter != idqodd.end(); ++iter)
	{
		cout << *iter << " ";
	}
	cout << endl;

	return 0;
}
