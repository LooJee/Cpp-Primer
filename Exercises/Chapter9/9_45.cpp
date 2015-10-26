#include <iostream>
#include <string>
using namespace std;

void Add(string &name, const string &prefix, const string &suffix)
{
	name.insert(name.begin(), ' ');
	name.insert(name.begin(), prefix.begin(), prefix.end());
	name.append(" ");
	name.append(suffix);
}

int main(int argc, char **argv)
{
	string name("Jerry Lu");
	Add(name, "Mr.", "III");
	cout << name << endl;

	return 0;
}
