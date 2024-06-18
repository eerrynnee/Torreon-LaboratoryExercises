#include <iostream>
using namespace std;

class Employee {
private: 
    string ID;
    string Name;
    string Position;

public:
    Employee(string id, string name, string position){
        ID = id;
        Name = name;
        Position = position;
    }

    void display() {
        cout << "Employee ID: " << ID << endl;
        cout << "Name: " << Name << endl;
        cout << "Position: " << Position << endl;
    }
};

int main(){
    Employee employee1("29381", "John Mayer", "Manager");
    employee1.display();

    return 0;
}