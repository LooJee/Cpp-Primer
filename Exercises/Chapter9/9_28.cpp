#include <iostream>
#include <forward_list>
#include <string>
using namespace std;

void insertEle(forward_list<string> &list, const string &str1, const string &str2)
{
	auto preiter = list.before_begin();
	auto curiter = list.begin();

	while (curiter != list.end())
	{
		if (*curiter == str1)
		{
			list.insert_after(curiter, str2);
			return;
		}
		else
		{
			++preiter;
			++curiter;
		}
	}
	list.insert_after(preiter, str2);
}

int main(int argc, char **argv)
{
	forward_list<string> list{"hello", "c++"};
	insertEle(list, "hello", "world");
	insertEle(list, "no", "!");

	cout << "forward_list:";
	for (auto iter = list.begin(); iter != list.end(); ++iter)
	{
		cout << *iter << " ";
	}
	cout << endl;

	return 0;
}
