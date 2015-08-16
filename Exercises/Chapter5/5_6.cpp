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

	lettergrade = grade < 60 ? scores[0]
					: (scores[(grade-50)/10] + 
							(grade == 100 ? "" 
							: grade % 10 < 3 ? "-"
							: grade % 10 > 7 ? "+" : "")); 

	cout << "your letter grade is: " << lettergrade << endl;

	return 0;
}
