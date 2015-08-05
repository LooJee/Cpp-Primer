#include <iostream>

int main(int argc, char **argv)
{
	const int i = 42;
	auto j = i;
	const auto &k = i;
	auto *p = &i;
	const auto j2 = i, &k2 = i;

	i++;//wrong
	j++;//right
	k++;//wrong
	*p++;//wrong
	j2++;//wrong
	k2 = j;//wrong

	return 0;
}
