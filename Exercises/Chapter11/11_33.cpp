/*************************************************************************
	> File Name: 11_33.cpp
	> Author: 
	> Mail: 
	> Created Time: 一 11/ 9 11:00:52 2015
 ************************************************************************/

#include <iostream>
#include <map>
#include <string>
#include <fstream>
#include <sstream>
using namespace std;

map<string, string> buildMap(ifstream &map_file)
{
    map<string, string> word_map;
    string key;
    string word;

    while (map_file >> key && getline(map_file, word))
    {
        if (!key.size() || !word.size())
        {
            cout << "the value is invalid" << endl;
            return map<string, string>();
        }

        word_map[key] = word.substr(1);
    }
    return word_map;
}

const string &transform(const string &s, const map<string, string> &m)
{
    auto iter = m.find(s);
    if (iter == m.cend())
        return s;
    else
        return (iter->second.empty() ? iter->first : iter->second);
}

void word_transform(ifstream &map_file, ifstream &input)
{
    map<string, string> word_map = buildMap(map_file);
    if (word_map.empty())
    {
        cout << "build word map failed." << endl;
        return;
    }

    string line;
    while (getline(input, line))
    {
        istringstream inStream(line);
        string word;
        while (inStream >> word)
        {
            cout << transform(word, word_map) << " ";
        }
        cout << endl;
    }
}

int main(int argc, char **argv)
{
    if (argc != 3)
    {
        cout << "Usage: a.out map_file inputfile." << endl;
        return -1;
    }

    ifstream mapfile(argv[1]);
    if (!mapfile)
    {
        cout << "error: open map file failed" << endl;
        return -2;
    }

    ifstream inputfile(argv[2]);
    if (!inputfile)
    {
        cout << "error: open input file failed" << endl;
        return -3;
    }

    word_transform(mapfile, inputfile);

    return 0;
}
