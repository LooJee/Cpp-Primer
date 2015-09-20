#include <sstream>
#include <fstream>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		cout << "Usage: ./a.out file" << endl;
		return -1;
	}

	vector<string> contentVec;
	string file_content;
	ifstream input(argv[1]);

	//read from file
	while (getline(input, file_content))
	{
		contentVec.push_back(file_content);
	}
	
	for (auto iter = contentVec.begin(); iter != contentVec.end(); ++iter)
	{
		istringstream iss(*iter);
		string word;
		while (iss >> word)
		{
			cout << word << endl;
		}
	}

	return 0;
}
