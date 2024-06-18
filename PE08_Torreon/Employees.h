#ifndef EMPLOYEES_H
#define EMPLOYEES_H

#include "Person.h"
#include <string>
using namespace std;

// The Employees class represents an employee, which is a type of Person
class Employees : public Person {
private:
    string empNum; // Employee number

public:
    string Position;  // Position of the employee
    string OfficeUnit; // Office or unit of the employee
    float Salary;      // Salary of the employee

    // Constructor to initialize the 'Employees' object
    Employees(string fname, string lname, string gender, string emailAdd, string cpNumber, 
              string empNum, string position, string officeUnit, float salary)
        : Person(fname, lname, gender, emailAdd, cpNumber), empNum(empNum), Position(position), OfficeUnit(officeUnit), Salary(salary) {}

    // Getter method to retrieve the value of the private attribute 'empNum'
    string getEmpNum() const {
        return empNum;
    }

    // Setter method to update the value of the private attribute 'empNum'
    void setEmpNum(string en) {
        empNum = en;
    }

    // Getter method to retrieve the position
    string getPosition() const {
        return Position;
    }

    // Setter method to set the position
    void setPosition(string pos) {
        Position = pos;
    }

    // Getter method to retrieve the office/unit
    string getOfficeUnit() const {
        return OfficeUnit;
    }

    // Setter method to set the office/unit
    void setOfficeUnit(string ou) {
        OfficeUnit = ou;
    }

    // Getter method to retrieve the salary
    float getSalary() const {
        return Salary;
    }

    // Setter method to set the salary
    void setSalary(float sal) {
        Salary = sal;
    }
};

#endif

