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
	Sales_data(const string &s, unsigned n, double p) : 
							bookNo(s), units_sold(n), price(p)
	{
		cout << "construct function 1" << endl;
	}
	Sales_data():Sales_data("", 0, 0)
	{
		cout << "contstruct function 2" << endl;
	}
	Sales_data(const string &s):Sales_data(s, 0, 0)
	{
		cout << "construct function 3" << endl;
	}
	Sales_data(istream &is):Sales_data()
	{
		is >> bookNo >> units_sold >> price;
		cout << "construct function 4" << endl;
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


int main(int argc, char **argv)
{
	Sales_data a("hello", 0, 0);
	cout << endl;
	Sales_data b;
	cout << endl;
	Sales_data c("hello");
	cout << endl;
	Sales_data d(cin);
	cout << endl;
	
	return 0;
}
