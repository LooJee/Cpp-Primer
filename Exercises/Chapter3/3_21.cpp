#include <iostream>
#include <vector>
#include <string>
using namespace std;

template <typename T>
void display(const T vec)
{
	unsigned vecsize = 0;
	
	for (auto iter = vec.cbegin(); iter != vec.cend(); iter++)
	{
		vecsize++;
		cout << *iter << " ";
	}
	cout << "size: " << vecsize << endl;
}

int main(int argc, char **argv)
{
	vector<int> v1;
	vector<int> v2(10);
	vector<int> v3(10, 42);
	vector<int> v4{10};
	vector<int> v5{10, 42};
	vector<string> v6{10};
	vector<string> v7{10, "hi"};

	display(v1);
	display(v2);
	display(v3);
	display(v4);
	display(v5);
	display(v6);
	display(v7);

	return 0;
}
