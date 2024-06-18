#ifndef PERSON_H
#define PERSON_H

#include <iostream>
using namespace std;

class Person {
private:
    int age;
    char gender;

public:
    // Constructors
    Person() : age(0), gender('M') {}
    Person(int newage) : age(newage), gender('M') {}
    Person(int newage, char c) : age(newage), gender(c) {}

    // Setter for age
    void setAge(int newage) {
        if (newage >= 0) {
            age = newage;
        } else {
            cout << "Invalid age!!!" << endl;
        }
    }

    // Getter for age
    int getAge() const {
        return age;
    }

    // Setter for gender
    void setGender(char c) {
        if (c == 'M' || c == 'F') {
            gender = c;
        } else {
            cout << "Invalid gender!!!" << endl;
        }
    }

    // Getter for gender
    char getGender() const {
        return gender;
    }

    // Method view is an overloaded method
    void view() const {
        cout << "Person age is = " << getAge() << endl;
        cout << "Person gender is = " << getGender() << endl;
    }

    void view(int newage) const {
        cout << "Person age is = " << newage << endl;
        cout << "Person gender is = " << getGender() << endl;
    }

    void view(int newage, char c) const {
        cout << "Person age is = " << newage << endl;
        cout << "Person gender is = " << c << endl;
    }
};

#endif // PERSON_H
