#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(int argc, char **argv)
{
	vector<string> v1{"hello", "world", "c++"};	//elements: "hello", "world", "c++"
	vector<string> v2(v1); //elements is the same as v1
	vector<string> v3(v1.begin(), v1.end()); // elements is the same as v1
	vector<string> v4(10, "you"); //ten elements "you"
	vector<string> v5; // v5 is empty
	vector<string> v6 = v1; //elements is the same as v1
}
