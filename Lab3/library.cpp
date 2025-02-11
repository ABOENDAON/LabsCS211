#include "library.h"
#include <iostream>
#include <string>
#include <cctype>
using namespace std;


bool valid_identifier(const string& str)

{


    // Check if string is empty
    if(str.empty()) 
    {
        return true;
        
    }
    // Check if first character is a number
    if(isdigit(str[0]))
    {
        return false;
    }
    // Loop through the string and finds if the character is a letter, digit, or underscore
    for (char ch : str) 
    {
    if (!(isalnum(ch) || ch == '_')) 
        {
        return false;
        }
    }
    return true;
}


string shortened_date(const string& full_date)

{
    size_t first_comma = full_date.find(',');
    string shorten_weekday = full_date.substr(0, 3);  // Extract first 3 letters of weekday

    // Find the position of the second comma after weekday

    size_t second_comma = full_date.find(',', first_comma + 1);


    // Extract the first three letters of the month

    size_t month_start = first_comma + 2;  // Skip the comma and space

    string shorten_month = full_date.substr(month_start, 3); // First 3 letters of month

    // Find year
    string year = full_date.substr(second_comma + 2); // Skip the comma and space, extract year


    // Return the formatted shortened date

    return shorten_weekday + ", " + shorten_month + ", " + year;

}



void find_replace(string& text, const string& find_str, const string& replace_str)

{
    size_t pos = text.find(find_str);

    while (pos != string ::npos ) 
    {
        text.replace(pos, find_str.length(), replace_str);

        pos = text.find(find_str, pos + replace_str.length());
    }

}
