#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
	int grade;

	cout << "please input grade: ";
	cin >> grade;
	cout << "只使用条件运算符。" << endl;
	cout << ((grade > 90) ? "high pass"
				: (grade >= 60 && grade < 75) ? "low pass"
				: (grade < 60) ? "fail" : "pass") << endl;

	cout << "使用if语句" << endl;
	if (grade > 90)
		cout << "high pass";
	else if (grade >= 60 && grade < 75)
		cout << "low pass";
	else if (grade < 60)
		cout << "fail";
	else
		cout << "pass";
	cout << endl;

	return 0;
}
