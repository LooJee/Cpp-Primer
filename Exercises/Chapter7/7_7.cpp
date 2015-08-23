#include "Sales_data.h"

int main(int argc, char **argv)
{
	Sales_data total;
	cout << "please input book number, total sold and price: " << endl;
	if (read(cin, total))
	{
		Sales_data trans;
		while (read(cin, trans))
		{
			if (total.isbn() == trans.isbn())
				total.combine(trans);
			else
			{
				print(cout, total);
				cout << endl;
				total = trans;
			}
		}
		print(cout, total);
		cout << endl;
	}
	else
	{
		cerr << "No data?!" << endl;
		return -1;
	}

	return 0;
}
