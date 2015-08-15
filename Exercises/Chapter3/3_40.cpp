#include <iostream>
#include <cstring>

using namespace std;

int main(int argc, char **argv)
{
	char s1[] = "hello";
	char s2[] = "world";
	char s3[11] = {};
	strcpy(s3, s1);
	strcat(s3, s2);

	cout << s3 << endl;

	return 0;
}
