#include <iostream>
using namespace std;

istream &Getin(istream &in)
{
	int num;
	auto oldstate = in.rdstate();
	in.clear();
	
	while (in >> num && !in.eof())
	{
		if (in.fail())
		{
			cout << "data is wrong, try again." << endl;
			in.clear();
			continue;
		}
		cout << num << endl;
	}

	in.clear();
	in.setstate(oldstate);

	return in;
}

int main(int argc, char **argv)
{
	Getin(cin);

	return 0;
}

