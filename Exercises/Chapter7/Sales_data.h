#ifndef __SALES_DATA_H
#define __SALES_DATA_H

#include <iostream>
#include <string>
using namespace std;

class Sales_data{
private:
	string bookNo;				//book number
	unsigned units_sold = 0;	//total sold
	double price = 0.0;			//price of book
public:
	string isbn() const
	{
		return bookNo;
	}
	Sales_data &combine(const Sales_data &rhs);
};

#endif
