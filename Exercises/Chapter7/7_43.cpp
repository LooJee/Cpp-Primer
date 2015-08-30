#include <iostream>
using namespace std;

class NoDefault{
private:
	int i = 0;

public:
	NoDefault(int j) : i(j) {}
	ostream &print() const {return cout << i;}
};

class C{
private:
	NoDefault nd;
public:
	C(int i=0) : nd(i){}
	const NoDefault &GetValue() const {return nd;}
};

int main(int argc, char **argv)
{
	C c;
	c.GetValue().print() << endl;

	return 0;
}
