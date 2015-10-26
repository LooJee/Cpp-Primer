#include <iostream>
#include <string>
using namespace std;

void Replace(string &s, const string &oldVal, const string &newVal)
{
	decltype(s.size()) pos = 0;
	while (pos != s.length())
	{
		if (s[pos] == oldVal[0])
		{
			auto tmppos = pos;
			decltype(pos) i = 0;
			while (s[pos] == oldVal[i] && pos != s.length() && i != oldVal.length())
			{
				++pos;
				++i;
			}
			if (pos == s.length() && i != oldVal.length())
				return;
			if (i == oldVal.length())
			{
				s.replace(tmppos, oldVal.length(), newVal);
				pos = tmppos + newVal.length();
			}
		}
		else
			++pos;
	}
}

int main(int argc, char **argv)
{
	string str("he world, he c++, he!");
	Replace(str, "he", "hello");
	cout << str << endl;

	return 0;
}
