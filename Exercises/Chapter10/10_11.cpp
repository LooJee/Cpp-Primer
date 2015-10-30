#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

bool isShorter(const string &s1, const string &s2)
{
	return s1.size() < s2.size();
}

void displayEle(vector<string> &vec)
{
	for (auto a : vec)
		cout << a << " ";
	cout << endl;
}

void elimDups(vector<string> &vec)
{
	sort(vec.begin(), vec.end());
	displayEle(vec);

	auto end_unique = unique(vec.begin(), vec.end());
	displayEle(vec);

	vec.erase(end_unique, vec.end());
	displayEle(vec);

	stable_sort(vec.begin(), vec.end(), isShorter);
	displayEle(vec);
}

int main(int argc, char **argv)
{
	vector<string> svec{"hello", "world", "c++", "hello", "c", "world"};
	elimDups(svec);

	return 0;
}
