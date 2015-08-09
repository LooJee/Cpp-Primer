#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char **argv)
{
	vector<unsigned> scores(11, 0);
	unsigned grade;
	auto beg = scores.begin();

	while (cin >> grade)
	{
		if (grade <= 100)
		{
			++*(beg + grade/10);
		}
	}

	for (auto cnt : scores)
	{
		cout << cnt << endl;
	}

	return 0;
}
