#ifndef STUDENT_H
#define STUDENT_H

#include <string>

using namespace std;

class Student {
  private:
    string name_;
    string pronouns_;
    unsigned labs_[10];
  public:
		// Constructors
    Student();
    Student(const string& name, const string& pronouns); // parameterized constructor

    // Accessors
    string to_string() const; 

    // Mutator

    // Update a lab grade
    void update_lab(unsigned pos, unsigned grade);

    // update all lab grades using string seperate comma
    void update_labs(const string& grades); 

    // updates all lab grade using an array
    void update_labs(const unsigned grades[]);  
};

#endif