#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(int argc, char **argv)
{
	string word;
	vector<string> wordvec;

	while (cin >> word)
		wordvec.push_back(word);

	for (auto &word : wordvec){
		for (auto &c : word) {
			if (islower(c)) {
				c = toupper(c);
			}
		}
		cout << word << endl;
	}

	return 0;
}
