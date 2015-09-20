#include <sstream>
#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct PersonInfo {
	string name;
	vector<string> phones;
};

int main(int argc, char **argv)
{
	string line, word;
	vector<PersonInfo> people;
	istringstream record;

	while (getline(cin, line))
	{
		PersonInfo info;
		record.clear();
		record.str(line);
		record >> info.name;
		while (record >> word)
			info.phones.push_back(word);
		people.push_back(info);
	}

	cout << people.size() << endl;
	for (auto iter = people.begin(); iter != people.end(); ++iter)
	{
		cout << "user name: " << iter->name << endl;
		cout << "phones: ";
		for (auto piter = iter->phones.begin(); 
				piter != iter->phones.end();
				++piter)
		{
			cout << *piter << endl;
		}
	}

	return 0;
}
