#include "library.h"
#include <iostream>
#include <string>
#include <cctype>
#include <iomanip>
using namespace std;

int main() 
{
    // PART 1:

    // Makes reading boolean 0 and 1 readable to people
    cout << boolalpha; 
    cout << "\n" << endl;
    cout << "\nPART 1: \n" << endl;
    cout << "IDENTIFIERS" << setw(15) <<  "VALID OR NOT" << endl;
    cout << "ab_CD_1" << setw(15) << valid_identifier("ab_CD_1") << endl; // true
    cout << "abCD1" << setw(17) << valid_identifier("abCD1") << endl;   // true
    cout << "_" << setw(21) << valid_identifier("_") << endl;        // true
    cout << "a" << setw(21) << valid_identifier("a") << endl;        // true
    cout << "_1" << setw(20) << valid_identifier("_1") << endl;       // true
    cout << "C_" << setw(20) << valid_identifier("C_") << endl;       // true
    cout << "ab-CD-1" <<setw(16) <<  valid_identifier("ab-CD-1") << endl;  // false
    cout << "ab CD 1" << setw(16) << valid_identifier("ab CD 1") << endl;  // false
    cout << "1a" << setw(21) <<valid_identifier("1a") << endl;       // false
    cout << "a$" << setw(21) << valid_identifier("a$") << endl;       // false
    cout << "\n" << endl;

    // PART 2:
    
    cout << "\nPART 2: \n" << endl;
    cout <<  setw(0) << "PARAMETER" << setw(35) << "RETURNED VALUE" << endl;
    cout << "Tuesday, February 8, 2024" << setw(19) << shortened_date("Tuesday, February 8, 2024") << endl;  
    cout << "Thursday, Apirl 1, 2022" <<  setw(21) << shortened_date("Thursday, Apirl 1, 2022") << endl;     
    cout << "Sunday, May 31, 2023" <<  setw(24) << shortened_date("Sunday, May 31, 2023") << endl; 
    cout << "\n" << endl;
    
    // Part 3:

    cout << "\nPART 3: \n" << endl;
    
    cout << "text BEFORE" << setw(20) << "find_str" << setw(20) << "replace_str" << setw(20) << "text AFTER" << endl;

    string text1 = "ababaab";
    string one = text1;
    find_replace(text1, "ab", "cd");
    cout << one << setw(21) << "ab" << setw(18) << "cd" << setw(24) << text1 << endl;

    string text2 = "cdcdacd";
    string two = text1;
    find_replace(text1, "da", "cc");
    cout << two << setw(21) << "da" << setw(18) << "cc" << setw(24) << text1 << endl;

    string text3 = "cdccccd";
    string three = text1;
    find_replace(text1, "cc", "ab");
    cout << three << setw(21) << "cc" << setw(18) << "ab" << setw(24) << text1 << endl;

    string text4 = "cdababd";
    string four = text1;
    find_replace(text1, "aa", "gc");
    cout << four << setw(21) << "aa" << setw(18) << "gc" << setw(24) << text1 << endl;

    cout << "\n" << endl;


    
    return 0;
}