#include <string>
using namespace std;

typedef srting array_str[10];
string str[10];

array_str *func1(string str);
auto func2(string str) -> string (*)[10];
decltype(str) *func3(string str);
