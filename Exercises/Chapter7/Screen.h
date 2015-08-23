#ifndef __SCREEN_H
#define __SCREEN_H

#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Screen{
private:
	unsigned height = 0;
	unsigned width = 0;
	unsigned cursor = 0;
	string contents;

public:
	Screen() = default;
	Screen(unsigned h, unsigned w) : 
				height(h), weight(w), contents(h * w, ' ') {}
	Screen(unsigned h, unsigned w, char c) : 
				height(h), weight(w), contents(h * w, c) {}
};

#endif
