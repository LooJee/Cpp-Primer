/*************************************************************************
	> File Name: StrBlob.cpp
	> Author: 
	> Mail: 
	> Created Time: 二 11/10 13:57:29 2015
 ************************************************************************/

#include "StrBlob.h"

StrBlob::StrBlob() : data(make_shared<vector<string> >())
{
}

StrBlob::StrBlob(initializer_list<string> il) : data(make_shared<vector<string> >(il))
{
}

void StrBlob::check(size_type i, const string &msg) const 
{
    if (i >= data->size())
        throw out_of_range(msg);
}

void StrBlob::pop_back()
{
    check(0, "pop_back on empty StrBlob");
    data->pop_back();
}

string &StrBlob::front()
{
    check(0, "front on empty StrBlob");
    return data->front();
}

const string &StrBlob::front() const
{
    check(0, "front on empty StrBlob");
    return data->front();
}

string &StrBlob::back()
{
    check(0, "back on empty StrBlob");
    return data->back();
}

const string &StrBlob::back() const
{
    check(0, "back on empty StrBlob");
    return data->back();
}

