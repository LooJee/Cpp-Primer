#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(int argc, char **argv)
{
	vector<int> v1;
	vector<int> v2(10);
	vector<int> v3(10, 42);
	vector<int> v4{10};
	vector<int> v5{10, 42};
	vector<string> v6{10};
	vector<string> v7{10, "hi"};
	unsigned vecsize = 0;
	
	for (auto c : v1){
		vecsize++;
		cout << c << " ";
	}
	cout << "size : " << vecsize << endl;

	vecsize = 0;
	for (auto c : v2){
		vecsize++;
		cout << c << " ";
	}
	cout << "size : " << vecsize << endl;

	vecsize = 0;
	for (auto c : v3){
		vecsize++;
		cout << c << " ";
	}
	cout << "size : " << vecsize << endl;

	vecsize = 0;
	for (auto c : v4){
		vecsize++;
		cout << c << " ";
	}
	cout << "size : " << vecsize << endl;

	vecsize = 0;
	for (auto c : v5){
		vecsize++;
		cout << c << " ";		
	}
	cout << "size : " << vecsize << endl;

	vecsize = 0;
	for (auto c : v6){
		vecsize++;
		cout << c << " ";		
	}
	cout << "size : " << vecsize << endl;
	
	vecsize = 0;
	for (auto c : v7){
		vecsize++;
		cout << c << " ";		
	}
	cout << "size : " << vecsize << endl;

	return 0;
}
