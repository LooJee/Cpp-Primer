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
	string GetName() const {return name;}
	string GetAddress() const {return address;}
};

#endif
