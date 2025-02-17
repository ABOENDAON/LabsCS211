#include "Student.h"
#include <iostream>
#include <sstream>
#include <string>
#include <iomanip>


using namespace std;

Student::Student() {
    name_ = "UKNOWN";
    pronouns_ = "they/them/their";

    for (unsigned i = 0; i < 10; i++) {
        labs_[i] = 0;
    }
}

Student::Student(const string& name, const string& pronouns) {
    name_ = name;
    pronouns_ = pronouns;

    for (unsigned i = 0; i < 10; i++) {
        labs_[i] = 0;
    }
}

string Student::to_string() const {
 stringstream ss;
 ss << "The student's name is: " << name_ << " (" << pronouns_ <<  " lab grades are:" ")\n";
 ss << "Lab Grades: \n";


// Print grades in 2 rows of 5

for (unsigned i = 0; i < 10; ++i) {
    ss << setw(3) << labs_[i] << " ";
    if (i == 4) ss << "\n"; // New line after 5 grades
}
ss << "\n";

// Calculate total earned points
unsigned total = 0;
for (unsigned i = 0; i < 10; ++i) {
    total += labs_[i];
}

ss << "Overall, they earned " << total << " out of 100 points.\n";
return ss.str();
}

void Student::update_lab(unsigned pos, unsigned grade) {
    if (pos >= 10) {
        cout << "Error: Invalid lab position. Must be between 0 and 9.\n";
        return;
    }
    if (grade > 10) {
        cout << "Error: Invalid lab grade. Must be between 0 and 10.\n";
        return;
    }
    labs_[pos] = grade;
}

void Student::update_labs(const string& grades) {
    stringstream ss(grades);
    string temp;
    unsigned i = 0;

    while (getline(ss, temp, ',') && i < 10) {
        int grade = stoi(temp);
        if (grade >= 0 && grade <= 10) {
            labs_[i] = grade;
        } else {
            cout << "Error: Invalid grade " << grade << ". Must be between 0 and 10.\n";
        }
        ++i;
    }
}

void Student::update_labs(const unsigned grades[]) {
    for (unsigned i = 0; i < 10; ++i) {
        if (grades[i] <= 10) {
            labs_[i] = grades[i];
        } else {
            cout << "Error: Invalid grade " << grades[i] << ". Must be between 0 and 10.\n";
        }
    }
}
