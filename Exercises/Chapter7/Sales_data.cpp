#include "Sales_data.h"

Sales_data &Sales_data::combine(const Sales_data &rhs)
{
	units_sold += rhs.units_sold;
	
	return *this;
}

Sales_data add(const Sales_data &book1, const Sales_data &book2)
{
	Sales_data temp = book1;
	temp.combine(book2);
	return temp;
}

istream &read(istream &is, Sales_data &item)
{
	is >> item.bookNo >> item.units_sold >> item.price;
	return is;
}

ostream &print(ostream &os, const Sales_data &item)
{
	os << item.bookNo << " " << item.units_sold << " " << item.price;
	return os;
}

