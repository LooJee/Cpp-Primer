#include <iostream>
#include <vector>
#include <string>
using namespace std;

int SumForInt(vector<string> &svec)
{
	int sum = 0;
	for (auto s : svec)
		sum += stoi(s);

	return sum;
}

double SumForDouble(vector<string> &svec)
{
	double sum = 0;
	for (auto s : svec)
		sum += stod(s);

	return sum;
}

int main(int argc, char **argv)
{
	vector<string> svec{"1", "2", "3", "4", "5.6", "7.8", "9"};	
	cout << "sum for int : " << SumForInt(svec) << endl;
	cout << "sum for double : " << SumForDouble(svec) << endl;

	return 0;
}
