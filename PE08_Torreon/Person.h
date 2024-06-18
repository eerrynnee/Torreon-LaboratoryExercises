#ifndef PERSON_H
#define PERSON_H

#include <string>
using namespace std;

// The Person class represents a generic person with basic attributes
class Person {
private:
    string fname;  // First name of the person
    string lname;  // Last name of the person
    string gender; // Gender of the person

public:
    string emailAdd;   // Email address of the person
    string cpNumber;   // Contact number of the person

    // Constructor to initialize the 'Person' object
    Person(string fname, string lname, string gender, string emailAdd, string cpNumber)
        : fname(fname), lname(lname), gender(gender), emailAdd(emailAdd), cpNumber(cpNumber) {}

    // Getter method to retrieve the first name
    string getFname() const {
        return fname;
    }

    // Setter method to set the first name
    void setFname(string fn) {
        fname = fn;
    }

    // Getter method to retrieve the last name
    string getLname() const {
        return lname;
    }

    // Setter method to set the last name
    void setLname(string ln) {
        lname = ln;
    }

    // Getter method to retrieve the gender
    string getGender() const {
        return gender;
    }

    // Setter method to set the gender
    void setGender(string g) {
        gender = g;
    }

    // Getter method to retrieve the email address
    string getEmailAdd() const {
        return emailAdd;
    }

    // Setter method to set the email address
    void setEmailAdd(string email) {
        emailAdd = email;
    }

    // Getter method to retrieve the contact number
    string getCpNumber() const {
        return cpNumber;
    }

    // Setter method to set the contact number
    void setCpNumber(string cp) {
        cpNumber = cp;
    }
};

#endif

