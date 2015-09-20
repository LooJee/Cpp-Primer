#include <iostream>
#include <sstream>
#include <string>

using namespace std;

istream &Getin(istream &in)
{
	string str;

	while (in >> str)
	{
		if (in.fail())
		{
			cout << "data is wrong, try again." << endl;
			in.clear();
			continue;
		}
		cout << str << endl;
	}

	in.clear();

	return in;
}

int main(int argc, char **argv)
{
	string str;
	while (getline(cin, str))
	{
		istringstream istr(str);
		Getin(istr);
	}

	return 0;
}

