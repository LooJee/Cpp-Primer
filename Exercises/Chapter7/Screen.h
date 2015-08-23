#ifndef __SCREEN_H
#define __SCREEN_H

#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Screen;
class Window_mgr{
private:
	vector<Screen> screens;
public:
	void clear(unsigned i);
};

class Screen{
private:
	unsigned height = 0;
	unsigned width = 0;
	unsigned cursor = 0;
	string contents;

public:
	Screen() = default;
	Screen(unsigned h, unsigned w) : 
				height(h), width(w), contents(h * w, ' ') {}
	Screen(unsigned h, unsigned w, char c) : 
				height(h), width(w), contents(h * w, c) {}

	Screen &set(char c)
	{
		contents[cursor] = c;
		return *this;
	}
	
	Screen &set(unsigned r, unsigned col, char ch)
	{
		contents[r*width + col] = ch;
		return *this;
	}
	
	Screen &move(unsigned r, unsigned c)
	{
		unsigned row = r * width;
		cursor = row + c;
		return *this;
	}

	Screen &display(ostream &os)
	{
		for (int i = 0; i < height; ++i)
		{
			for (int j = 0; j < width; ++j)
			{
				os << contents[i*width+j];
			}
			cout << endl;
		}

		return *this;
	}

	friend void Window_mgr::clear(unsigned i);
};

void Window_mgr::clear(unsigned i)
{
	Screen &s = screens[i];
	s.contents = string(s.height * s.width, ' ');
}

#endif
