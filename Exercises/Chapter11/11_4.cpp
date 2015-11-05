/*************************************************************************
	> File Name: 11_4.cpp
	> Author: 
	> Mail: 
	> Created Time: 三 11/ 4 21:51:12 2015
 ************************************************************************/

#include <iostream>
#include <map>
#include <fstream>
#include <string>
using namespace std;

void ChangeWord(string &word)
{
    for (int i = 0; i < word.size(); ++i)
    {
        if (word[i] >= 'A' && word[i] <= 'Z')
            word[i] -= 'A'-'a';
        else if (word[i] == '.' || word[i] == ',')
            word.erase(i);
    }
}

int main(int argc, char **argv)
{
    ifstream in(argv[1]);
    map<string, size_t> word_count;
    string word;

    while (in >> word)
    {
        cout << word << endl;
        ChangeWord(word);
        ++word_count[word];
    }

    for (const auto & a : word_count)
        cout << "word: " << a.first << " count: " << a.second << endl;

    return 0;
}
