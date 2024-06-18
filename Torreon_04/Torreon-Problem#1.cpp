#include <iostream>
using std::cout;
using std::cin;
using std::endl;

// Function to display program description
void Display(){
    cout << "This program asks the user to input three numbers, find the highest and lowest number, and output their difference.\n";
    cout << "Program by Ericka Gwynne S. Torreon\n";
    cout << "Created on April 27, 2024\n";    
    cout << "Programming Exercise 04 in CMSC 28\n";
}

// Function to ask for user input 
void getUserInput(int &x, int &y, int &z){
    cout << "\nEnter three numbers: ";
    cin >> x >> y >> z;
}

// Function to find the highest number
int highestNum(int x, int y, int z){
    int largest = x;

    if (y >= largest) {
        largest = y;
    }
    if (z >= largest) {
        largest = z;
    }
    return largest;
}

// Function to find the lowest number
int lowestNum(int x, int y, int z){
    int smallest = x;

    if (y <= smallest) {
        smallest = y;
    }
    if (z <= smallest) {
        smallest = z;
    }
    return smallest;
}

// Function to display values
void displayValues(int x, int y, int z, int highest, int smallest, int difference){
    cout << "\nInput Values:\n";
    cout << "First Input: " << x << endl;
    cout << "Second Input: " << y << endl;
    cout << "Third Input: " << z << endl;
    cout << "\nHighest Number: " << highest << endl;
    cout << "Smallest Number: " << smallest << endl;
    cout << "Difference: " << difference << endl;
}

int main() {
    int x, y, z;
    int highest, smallest, difference;

    Display();
    getUserInput(x, y, z);

    highest = highestNum(x, y, z);
    smallest = lowestNum(x, y, z);
    difference = highest - smallest;

    displayValues(x, y, z, highest, smallest, difference);

    return 0;
}

