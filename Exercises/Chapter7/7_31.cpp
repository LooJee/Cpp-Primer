#include <iostream>
class Y;
class X{
	Y *y;
};

class Y{
	X x;
};

int main(int argc ,char **argv)
{
	return 0;
}
