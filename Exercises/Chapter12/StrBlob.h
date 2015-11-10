/*************************************************************************
	> File Name: StrBlob.h
	> Author: 
	> Mail: 
	> Created Time: 二 11/10 13:37:30 2015
 ************************************************************************/

#ifndef _STRBLOB_H
#define _STRBLOB_H

#include <vector>
#include <string>
#include <initializer_list>
#include <memory>
using namespace std;

class StrBlob{
public:
    typedef vector<string>::size_type size_type;
    StrBlob();
    StrBlob(initializer_list<string> il);

    size_type size() const {return data->size();}
    bool empty() const {return data->empty();}
    //add and remove elements
    void push_back(const string &str) { data->push_back(str); }
    void pop_back();

    //element access
    string &front();
    const string &front() const;
    string &back();
    const string &back() const;
private:
    shared_ptr<vector<string> > data;
    void check(size_type i, const string &msg) const;
};

#endif
