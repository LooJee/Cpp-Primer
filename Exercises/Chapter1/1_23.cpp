#include <iostream>
#include "Sales_item.h"

int main(int argc, char** argv)
{
	Sales_item book, cmpbook;
	int cnt = 0;
	
	if (std::cin >> book)
	{
		cmpbook = book;
		cnt++;
		while (std::cin >> book)
		{
			if (book.isbn() == cmpbook.isbn())
			{
				cnt++;
			}
			else
			{
				std::cout << cmpbook << " sales record:" << cnt << std::endl;
				cmpbook = book;
				cnt = 1;
			}
		}
		std::cout << cmpbook << " sales record:" << cnt << std::endl;
	}
}
