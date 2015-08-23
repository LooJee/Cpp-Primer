#include "person.h"

istream &read(istream &is, Person &per)
{
	is >> per.name >> per.address;
	return is;
}

ostream &print(ostream &os, const Prson &per)
{
	os << per.GetName() << " " << per.GetAddress();
	return os;
}
