#include <iostream>
#include <string>
using namespace std;

void Add(string &name, const string &prefix, const string &suffix)
{
	decltype(name.size()) pos = 0;
	name.insert(pos, " ");
	name.insert(pos, prefix);
	name.insert(name.length(), " ");
	name.insert(name.length(), suffix);
}

int main(int argc, char **argv)
{
	string name("Jerry Lu");
	Add(name, "Mr.", "III");

	cout << name << endl;

	return 0;
}
