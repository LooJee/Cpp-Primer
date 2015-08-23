#ifndef __SALES_DATA_H
#define __SALES_DATA_H

#include <iostream>
#include <string>
using namespace std;

class Sales_data{
public:
	string bookNo;				//book number
	unsigned units_sold = 0;	//total sold
	double price = 0.0;			//price of book
public:
	Sales_data() = default;
	Sales_data(const string &s) : bookNo(s){}
	Sales_data(const string &s, unsigned n, double p) : 
							bookNo(s), units_sold(n), price(p){}
	Sales_data(istream &is)
	{
		is >> bookNo >> units_sold >> price;
	}

	string isbn() const
	{
		return bookNo;
	}
	unsigned GetTotalSold() const {return units_sold;}
	double GetPrice() const {return price;}
	Sales_data &combine(const Sales_data &rhs);
};
Sales_data add(const Sales_data &book1, const Sales_data &book2);
istream &read(istream &is, Sales_data &item);
ostream &print(ostream &os, const Sales_data &item);

#endif
