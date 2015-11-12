/*************************************************************************
	> File Name: 12_24.cpp
	> Author: Jerry Lu
	> Mail: mynameislujie1992@gmail.com
	> Created Time: 四 11/12 17:37:18 2015
 ************************************************************************/

#include <iostream>
#include <memory>
using namespace std;

int main(int argc, char **argv)
{
    size_t length;
    cout << "tell me the length of string you wanna input: ";
    cin >> length;
    cout << "Please input the stirng : ";
    char *str = new char[length+1]();
    cin.ignore();
    cin.get(str, length+1);
    cout << "It's the string I get according to the length you tell me : " << endl;
    cout << str << endl;

    return 0;
}
