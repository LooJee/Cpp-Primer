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
	unsigned ffCnt = 0;
	unsigned flCnt = 0;
	unsigned fiCnt = 0;
	char prev = 0;

	while (cin >> ch)
	{
		switch (ch)
		{
			case 'a':
			case 'A':
				++aCnt;
				break;
			case 'i':
				{
					if (prev == 'f')
					{
						++fiCnt;
					}
				}
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
			case 'f':
				{
					if (prev == 'f')
					{
						++ffCnt;
					}
				}
				break;
			case 'l':
				{
					if (prev == 'f')
					{
						++flCnt;
					}
				}
				break;
			default:
				++otherCnt;
				break;
		}
		prev = ch;
	}
	cout << "a:" << aCnt << endl;
	cout << "e:" << eCnt << endl;
	cout << "i:" << iCnt << endl;
	cout << "o:" << oCnt << endl;
	cout << "u:" << uCnt << endl;
	cout << "ff:" << ffCnt << endl;
	cout << "fl:" << flCnt << endl;
	cout << "fi:" << fiCnt << endl;
	cout << "other:" << otherCnt << endl;
	
	return 0;
}
