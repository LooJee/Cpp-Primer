#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(int argc, char **argv)
{
	vector<string> svec;
	string word;
	vector<string>::iterator iter = svec.begin();

	while (cin >> word)
		iter = svec.insert(iter, word);

	for (vector<string>::iterator iter = svec.begin(); iter != svec.end(); ++iter)
	{
		cout << *iter << endl;
	}

	return 0;
}
