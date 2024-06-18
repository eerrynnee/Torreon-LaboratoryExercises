#include <iostream>
#include <string>
#include "Person.h" // Include Person.h as a library
#include "Grade.h" // Include Grade.h as a library
using namespace std;

int main() {
    int a;
    char g;
    string subject;
    float grade;

    cout << "Creating the 1st Person object (p) using the 1st Constructor" << endl;
    Person p;

    cout << "\nInput age: ";
    cin >> a;
    p.setAge(a);

    cout << "Input gender: ";
    cin >> g;
    p.setGender(g);

    cout << "Age = " << p.getAge() << endl;
    cout << "Gender = " << p.getGender() << endl;
    cout << "\nThis is an example of method overloading: \n";
    cout << "Using view 1: \n";
    p.view();
    cout << "\nUsing view 2: \n";
    p.view(a);
    cout << "\nUsing view 3: \n";
    p.view(a, g);

    cout << "\n==========================USING NEW HEADER FILE==========================" << endl;
    cout << "Creating the 1st Grade object (x)" << endl;
    float z;
    string b;
    Grades x;
    cout << "Input grade: ";
    cin >> z;
    x.setGrade(z);
    cout << "Input subject: ";
    cin >> b;
    x.setSubject(b);
    cout << "\nSubject = " << x.getSubj() << endl;
    cout << "Grade = " << x.getGrade() << endl;
    cout << "Person has a grade of " << x.getGrade() << " for his/her subject " << x.getSubj() << "." << endl;
    cout << "Grade Status: " << x.checkPassFail() << endl;

    return 0;
}