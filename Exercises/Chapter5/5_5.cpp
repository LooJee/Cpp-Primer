#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(int argc, char **argv)
{
	const vector<string> scores = {"F", "D", "C", "B", "A", "A++"};
	int grade = 0;
	string lettergrade = {};
		
	cout << "Please input your grade: ";
	cin >> grade;
	
	if (grade < 0 || grade > 100)
	{
		cout << "illegal grade" << endl;
		return -1;
	}

	if (grade < 60)
	{
		lettergrade = scores[0];
	}
	else
	{
		lettergrade = scores[(grade-50)/10];
		if ( grade != 100)
		{
			if (grade % 10 < 3)
			{
				lettergrade += "-";
			}
			else if (grade % 10 > 7)
			{
				lettergrade += "+";
			}
		}
	}

	cout << "your letter grade is: " << lettergrade << endl;

	return 0;
}
