#ifndef LIBRARY_H
#define LIBRARY_H

#include <string>

using namespace std;

bool valid_identifier(const string& str);

string shortened_date(const string& full_date);

void find_replace(string& text, const string& find_str, const string&
    replace_str);
#endif