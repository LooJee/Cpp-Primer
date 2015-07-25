#include <iostream>
#include "Sales_item.h"

int main(int argc, char** argv)
{
	Sales_item book1, book2;

	std::cout << "Please input two books with same isbn: " << std::endl;
	std::cin >> book1 >> book2;

	if (book1.isbn() == book2.isbn())
	{
		std::cout << book1 + book2 << std::endl;
		return 0;
	}
	else
	{
		std::cout << "the isbn of these two books are different." << std::endl;
		return -1;
	}
}
