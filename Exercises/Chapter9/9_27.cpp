#include <iostream>
#include <forward_list>
using namespace std;

int main(int argc, char **argv)
{
	forward_list<int> ifl{0,1,2,3,4,5,6,7,8,9};
	
	auto preiter = ifl.before_begin();
	auto curiter = ifl.begin();

	while (curiter != ifl.end())
	{
		if (*curiter % 2 != 0)
			curiter = ifl.erase_after(preiter);
		else
		{
			++preiter;
			++curiter;
		}
	}

	cout << "forward_lsit:";
	for (auto iter = ifl.begin(); iter != ifl.end(); ++iter)
	{
		cout << *iter << " ";
	}
	cout << endl;

	return 0;
}
