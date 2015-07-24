#include <iostream>

int main(int argc, char** argv)
{
	int v1 = 0;
	int v2 = 0;
	int i = 0;

	std::cout << "please input two numbers:" << std::endl;
	std::cin >> v1 >> v2;
	i = v1;
	if (v1 < v2)
	{
		while(i <= v2)
		{
			std::cout << i++ << std::endl;
		}
	}
	else
	{
		while(i >= v2)
		{
			std::cout << i--  << std::endl;
		}
	}

	return 0;
}
