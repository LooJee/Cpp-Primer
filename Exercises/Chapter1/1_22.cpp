#include <iostream>
#include "Sales_item.h"

int main(int argc, char** argv)
{
	Sales_item book, sum;

	std::cout << "Please input a series of book records:" << std::endl;
	if (std::cin >> book)
	{
		sum = book;
		while(std::cin >> book)
		{
			if (sum.isbn() == book.isbn())
			{
				sum += book;
			}
			else
			{
				std::cout << "isbn of them are different." << std::endl;
				return -1;
			}
		}
	}
	std::cout << "sum of all records: " << sum << std::endl;
	return 0;
}
