#include <iostream>

int main(int argc ,char**argv)
{
	int currval;
	int val;

	if (std::cin >> val)
	{
		int cnt = 1;
		currval = val;
		while(std::cin >> val)
		{
			if (val == currval)
			{
				cnt++;
			}
			else
			{
				std::cout << currval << " occurs "
					<< cnt << " times " << std::endl;
				currval = val;
				cnt = 1;
			}
		}			
		std::cout << currval << " occurs "
			<< cnt << " times " << std::endl;
	}

	return 0;
}
