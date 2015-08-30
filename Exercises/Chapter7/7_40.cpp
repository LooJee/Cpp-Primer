#include <iostream>
#include <string>
using namespace std;

class Book{
private:
	string bookName;
	string bookNo;
	string author;
	string publisher;
	double price;
public:
	Book() = default;
	Book(const string &name, const string &no, const string &at,
			const string &pl, double p):
			bookName(name), bookNo(no), author(at), publisher(pl), price(p)
	{
	}
	Book(istream &is)
	{
		cout << "please input the bookName, booknumber, author, publisher \
					and price " << endl;
		is >> bookName >> bookNo >> author >> publisher >> price;
	}
};
