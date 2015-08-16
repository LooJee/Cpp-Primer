#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
	char ch;
	unsigned otherCnt = 0;
	unsigned aCnt = 0;
	unsigned eCnt = 0;
	unsigned iCnt = 0;
	unsigned oCnt = 0;
	unsigned uCnt = 0;

	while (cin >> ch)
	{
		switch (ch)
		{
			case 'a':
			case 'A':
				++aCnt;
				break;
			case 'i':
			case 'I':
				++iCnt;
				break;
			case 'e':
			case 'E':
				++eCnt;
				break;
			case 'o':
			case 'O':
				++oCnt;
				break;
			case 'u':
			case 'U':
				++uCnt;
				break;
			default:
				++otherCnt;
				break;
		}
	}
	cout << "a:" << aCnt << endl;
	cout << "e:" << eCnt << endl;
	cout << "i:" << iCnt << endl;
	cout << "o:" << oCnt << endl;
	cout << "u:" << uCnt << endl;
	cout << "other:" << otherCnt << endl;
	
	return 0;
}
