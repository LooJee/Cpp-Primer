#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char **argv)
{
	vector<int> vi{0,1,2,3,4,5,6};

	auto iter = vi.begin();
	while (iter != vi.end())	//if *iter is a odd, the loop will never over
	{
		if (*iter % 2)
			iter = vi.insert(iter, *iter);
		++iter;
	}

	return 0;
}
