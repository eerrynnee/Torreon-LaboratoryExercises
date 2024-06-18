/*  File: Person.h
    This file define the 'Person' class which represents a person with attributes such as first name, last name, and gender.
    This allows for the creation and manipulation of person objects within the program.
*/
#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string>
using namespace std;

// Define class 'Person'
class Person {
private: // Private attributes of class 'Person'
    string first_name;
    string last_name;
    string gender;

public: // Public attributes of class 'Person'
    // Constructor to initialize the 'Person' object
    Person(string fname = "", string lname = "", string g = "") {
        first_name = fname;
        last_name = lname;
        gender = g;
    }

    // Setter methods
    void setFirstName(string fname) {
        first_name = fname;
    }

    void setLastName(string lname) {
        last_name = lname;
    }

    void setGender(string g) {
        gender = g;
    }

    // Getter methods
    string getFirstName() const {
        return first_name;
    }

    string getLastName() const {
        return last_name;
    }

    string getGender() const {
        return gender;
    }
};

#endif // PERSON_H
