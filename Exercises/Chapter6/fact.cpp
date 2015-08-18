#include "Chapter6.h"

int fact(int num)
{
	int ret = 1;
	for (int i = 1; i <= num; ++i)
		ret *= i;

	return ret;
}
