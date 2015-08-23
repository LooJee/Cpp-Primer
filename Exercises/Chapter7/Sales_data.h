#ifndef __SALES_DATA_H
#define __SALES_DATA_H

#include <iostream>
#include <string>
using namespace std;

class Sales_data{
	friend Sales_data add(const Sales_data &book1, const Sales_data &book2);
	friend istream &read(istream &is, Sales_data &item);
	friend ostream &print(ostream &os, const Sales_data &item);

private:
	string bookNo;				//book number
	unsigned units_sold = 0;	//total sold
	double price = 0.0;			//price of book
	double revenue = 0.0;
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

	double avg_prive() const
	{
		if (units_sold)
			return revenue / units_sold;
		else
			return 0;
	}

	unsigned GetTotalSold() const {return units_sold;}
	double GetPrice() const {return price;}
	Sales_data &combine(const Sales_data &rhs);
};
Sales_data add(const Sales_data &book1, const Sales_data &book2);
istream &read(istream &is, Sales_data &item);
ostream &print(ostream &os, const Sales_data &item);

#endif
