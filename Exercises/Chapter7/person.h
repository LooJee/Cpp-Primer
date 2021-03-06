#ifndef __PERSON_H
#define __PERSON_H

#include <iostream>
#include <string>
using namespace std;

class Person{
private:
	string name;
	string address;
public:
	Person() = default;
	Person(const string &n, const string &a) : 
				name(n), address(a){}

	string GetName() const {return name;}
	string GetAddress() const {return address;}
};

istream &read(istream &is, Person &per);
ostream &print(ostream &os, const Prson &per);

#endif
