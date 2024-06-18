#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"
#include <string>
using namespace std;

// The Student class represents a student, which is a type of Person
class Student : public Person {
private:
    string studentNum; // Student number

public:
    string Course;     // Course of the student
    string Department; // Department of the student
    string College;    // College of the student

    // Constructor to initialize the 'Student' object
    Student(string fname, string lname, string gender, string emailAdd, string cpNumber, 
            string studentNum, string course, string department, string college)
        : Person(fname, lname, gender, emailAdd, cpNumber), studentNum(studentNum), Course(course), Department(department), College(college) {}

    // Getter method to retrieve the value of the private attribute 'studentNum'
    string getStudentNum() const {
        return studentNum;
    }

    // Setter method to update the value of the private attribute 'studentNum'
    void setStudentNum(string sn) {
        studentNum = sn;
    }

    // Getter method to retrieve the course
    string getCourse() const {
        return Course;
    }

    // Setter method to set the course
    void setCourse(string c) {
        Course = c;
    }

    // Getter method to retrieve the department
    string getDepartment() const {
        return Department;
    }

    // Setter method to set the department
    void setDepartment(string d) {
        Department = d;
    }

    // Getter method to retrieve the college
    string getCollege() const {
        return College;
    }

    // Setter method to set the college
    void setCollege(string col) {
        College = col;
    }
};

#endif
