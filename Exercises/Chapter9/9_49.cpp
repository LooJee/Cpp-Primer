#include <iostream>
#include <fstream>
#include <string>
using namespace std;
abcdefghijklmnopqrstuvwxyz
int main(int argc, char **argv)
{
	string filter("bdfghjklpqty");

	ifstream in(argv[1]);
	
	if (!in)
		return -1;

	string word;
	string maxWord;
	while (in >> word)
	{
		if (word.find_first_of(filter) == string::npos 
				&& word.length() > maxWord.length())
		{
			maxWord = word;
		}
	}

	cout << "max word is :" << maxWord << endl;

	return 0;
}
