#include <iostream>
using namespace std;

// Function to display program description
void Display(){
    cout << "This program asks the user to input an integer and convert this number to its binary equivalent.\n";
    cout << "Created on April 27, 2024\n";
    cout << "Program by Ericka Gwynne S. Torreon\n";
    cout << "Programming Exercise 04 in CMSC 28\n";
}

// Function to ask for user input
void getUserInput(int &n){
    cout << "\nEnter an integer: ";
    cin >> n;
}

// Function to convert the user input (decimal) to binary
void decToBinary(int n){
    if (n == 0) {
        cout << "Binary equivalent of 0 is: 0\n";
        return;
    }

    int binaryNum[32]; // Array to store binary number
    int i = 0; // Counter for binary array

    while(n > 0){
        binaryNum[i] = n % 2; // Store remainder in binary array
        n = n / 2;
        i++;
    }
    cout << "Binary equivalent: ";
    for (int j = i - 1; j >= 0; j--) // Print binary array in reverse order
        cout << binaryNum[j];
}

int main(){
    int n;

    Display();
    getUserInput(n);
    decToBinary(n);

    return 0;
}