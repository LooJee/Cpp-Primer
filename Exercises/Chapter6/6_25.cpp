#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[])
{
	if (argc == 1)
	{
		cout << "usage : ./a.out [param1] [param2]" << endl;
		return -1;
	}
		
	cout << "add the string get from command line :" 
			<< string(argv[1]) + string(argv[2]) << endl;

	return 0;
}
