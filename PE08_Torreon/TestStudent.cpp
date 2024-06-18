#include "Student.h"
#include <iostream>
using namespace std;

int main() {
    // Declare variables to hold student information
    string fname, lname, gender, emailAdd, cpNumber, studentNum, course, department, college;

    // Display introductory message
	cout << "This program prompts the user to input information about a student, such as their first name, last name, gender, email address, contact number, student number, course, department, and college. Then, it creates a Student object with the provided information and displays a welcome message along with the details of the student's admission." << endl;
	cout << "Programmed by: Ericka Gwynne S. Torreon\n\n" << endl;
	
	// Display the header for input section
	cout << "============================================================\n" << endl;
	cout << "||               INPUT STUDENT'S INFORMATION              ||\n" << endl;
	cout << "||--------------------------------------------------------||\n" << endl;

    // Prompt user for input and read the values
    cout << "	Student First Name: ";
    getline(cin, fname);
    cout << "	Student Last Name: ";
    getline(cin, lname);
    cout << "	Student Gender: ";
    getline(cin, gender);
    cout << "	Email Address: ";
    getline(cin, emailAdd);
    cout << "	Contact Number: ";
    getline(cin, cpNumber);
    cout << "	Student Number: ";
    getline(cin, studentNum);
    cout << "	Course: ";
    getline(cin, course);
    cout << "	Department: ";
    getline(cin, department);
    cout << "	College: ";
    getline(cin, college);
    cout << "\n||========================================================||\n" << endl;
	
    // Create a Student object with the provided information
    Student student(fname, lname, gender, emailAdd, cpNumber, studentNum, course, department, college);

	// Display the welcome message with student information
    cout << "\nHi, " << student.getFname() << " " << student.getLname() << "! Welcome to the University of the Philippines-Mindanao and congratulations! "
    << "We are pleased to inform you that you are admitted in the " << student.Course << " program under the Department of " << student.Department << ", College of " << student.College << ". "
    << "Your student number is " << student.getStudentNum() << ".\n";
    
    return 0; 
}

