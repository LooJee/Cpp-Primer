#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

void Read(char *file)
{	
	vector<string> content;
	string str;

	ifstream input(file);
	while (getline(input, str))
	{
		content.push_back(str);
	}

	cout << "content of the file " << file << endl;
	for (auto iter = content.begin(); iter != content.end(); ++iter)
	{
		cout << *iter << endl;
	}
}

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		cout << "Usage: ./a.out filename." << endl;
		return -1;
	}

	Read(argv[1]);

	return 0;
}

