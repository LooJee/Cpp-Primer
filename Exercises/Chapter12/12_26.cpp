/*************************************************************************
	> File Name: 12_26.cpp
	> Author: Jerry Lu
	> Mail: mynameislujie1992@gmail.com
	> Created Time: 四 11/12 22:45:37 2015
 ************************************************************************/

#include <iostream>
#include <memory>
#include <string>
using namespace std;

int main(int argc, char **argv)
{
    allocator<string> stralloc;
    size_t cnt;
    string word;
    cout << "How many words you wanna input: ";
    cin >> cnt;
    cout << cnt << endl;
    auto p = stralloc.allocate(cnt);
    auto const q = p;
    while (cin >> word && p != q+cnt)
    {
        stralloc.construct(p++, word);
    }
    
    while (p != q)
    {
        cout << *--p << endl;
        stralloc.destroy(p);
    }

    stralloc.deallocate(q, cnt);

    return 0;
}
