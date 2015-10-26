#include <iostream>
#include <string>
using namespace std;

void Replace(string &s, const string &oldVal, const string &newVal)
{
	auto iter = s.begin();
	auto olditer = oldVal.begin();
	while (iter != s.end())
	{
		if (*iter == *olditer)
		{
			auto tmpiter = iter;
			while (*iter == *olditer && iter != s.end() && olditer != oldVal.end())
			{
				++iter;
				++olditer;
			}
			if (iter == s.end() && olditer != oldVal.end())
				return;
			if (olditer == oldVal.end())
			{
				iter = s.erase(tmpiter, iter);
				for (auto a : newVal)
				{
					iter = s.insert(iter, a);
					++iter;
				}
			}
			olditer = oldVal.begin();
		}
		else
			++iter;
	}
}

int main(int argc, char **argv)
{
	string str("he world,he c++, he");
	Replace(str, "he", "hello");
	cout << str << endl;

	return 0;
}
