#include "Employees.h"
#include <iostream>
#include <iomanip> // Include the iomanip library for formatting output
using namespace std;

int main() {
    // Declare variables to hold employee information
    string fname, lname, gender, emailAdd, cpNumber, empNum, position, officeUnit;
    float salary;

    // Display introductory message
    cout << "This program prompts the user to input information about an employee, such as their first name, last name, gender, email address, contact number, employee number, position, office or unit, and salary. It then creates an Employees object with the provided information and displays a welcome message along with details of the employee's promotion." << endl;
    cout << "Programmed by: Ericka Gwynne S. Torreon\n\n" << endl;
    
    // Display the header for input section
    cout << "============================================================\n" << endl;
    cout << "||               INPUT EMPLOYEE'S INFORMATION             ||\n" << endl;
    cout << "||--------------------------------------------------------||\n" << endl;

    // Prompt user for input and read the values
    cout << "	Employee First Name: ";
    getline(cin, fname);
    cout << "	Employee Last Name: ";
    getline(cin, lname);
    cout << "	Employee Gender: ";
    getline(cin, gender);
    cout << "	Email Address: ";
    getline(cin, emailAdd);
    cout << "	Contact Number: ";
    getline(cin, cpNumber);
    cout << "	Employee Number: ";
    getline(cin, empNum);
    cout << "	Position: ";
    getline(cin, position);
    cout << "	Office/Unit: ";
    getline(cin, officeUnit);
    cout << "	Salary: "; 
    cin >> salary;
    cout << "\n||========================================================||\n" << endl;
	
    // Create an Employees object with the provided information
    Employees employee(fname, lname, gender, emailAdd, cpNumber, empNum, position, officeUnit, salary);

    // Formatting the salary to two decimal places
    cout << fixed << setprecision(2);

    // Display the welcome message with employee information
    cout << "\nHi, " << employee.getFname() << " " << employee.getLname() << "! Welcome to Amazon! "
    "We are pleased to inform you that you have been promoted to the position of " << employee.Position << " in the " << employee.OfficeUnit << ". " 
    << "Your current employee number is " << employee.getEmpNum() << " and your salary is \u20B1" << salary << "." << endl;

    return 0; 
}
