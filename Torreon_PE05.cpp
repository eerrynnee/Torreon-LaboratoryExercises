/*  Proramming Exercise 05
    This program will ask the user to input various numbers (positive or negative but not zero) and perform basic statistics on these numbers.
    Program by: Ericka Gwynne S. Torreon
*/

// Standard libraries used in the program
#include <iostream>
#include <cmath>
using namespace std;

// Function prototypes
void getUserInput(int arr[], int& size);
int highestNum(int arr[], int size);
int lowestNum(int arr[], int size);
double averageOfInt(int arr[], int n);
double variance(int arr[], int n);
double standardDev(int arr[], int n);
void Display(int largest, int smallest, double average, double stdev, double var);


int main (){
    int arr[10]; // Declare an array of size 10 to store user input
    int size = 0; // Initialize size to 0 to keep track of the number of elements inputted by the user

    getUserInput(arr, size); // Call the function to get user input
    int largest = highestNum(arr, size); // Call the function to find the largest number in the array of integers
    int smallest = lowestNum(arr, size); // Call the function to find the smallest number in the array of integers
    double average = averageOfInt(arr, size); // Calculate the average of the numbers in the array
    double var = variance(arr, size); // Calculate the variance of the numbers in the array
    double stdev = standardDev(arr, size); // Calculate the standarad deviation of the numbers in the array

    Display(largest, smallest, average, stdev, var); // Display the output

    return 0;
}

// Function to get user input
void getUserInput(int arr[], int& size){
    size = 0;

    for (int i = 0; i < 10; ++i) {
        cout << "Input an integer: ";
        cin >> arr[i];

        // If the user has inputted 0 or the maximum size of the array has been fully used, the data entry process stops
        if (arr[i] == 0 || i == 10){
            break;
        }
        size++;
  }
}

// Function to determine the highest integer in the array
int highestNum(int arr[], int size){
    int largest = arr[0]; // Set the initial value of 'largest' to the first element in the array

    // Iterate over all the elements and compare them to the current highest number
    for(int i = 1; i  < size; i++){
        if (largest < arr[i])
            largest = arr[i];
    }
    return largest;
}

// Function to determine the lowest integer in the array
int lowestNum(int arr[], int size){
    int smallest = arr[0]; // Set the initial value of 'smallest' to the first element in the array

    // Iterate over all the elements and compare them to the current lowest number
    for(int i = 1; i  < size; i++){
        if (smallest > arr[i])
            smallest = arr[i];
    }
    return smallest;
}

// Function to calculate the mean (average) of the elements in the array
double averageOfInt(int arr[], int n){
    int sum = 0; // Set the initial value of sum to 0

    for(int i = 0; i < n; i++)
        sum = sum + arr[i]; // Each element of the array is added to the 'sum'
    
    return (double)sum / n;
}

// Function to compute for the variance
double variance(int arr[], int n){
    int sum = 0;

    // Compute for the average of elements
    for (int i = 0; i < n; i++)
        sum = sum + arr[i];
    double mean = (double)sum / (double)n;
 
    // Compute sum squared differences with mean
    double squaredDiff = 0;
    for (int i = 0; i < n; i++) 
        squaredDiff = squaredDiff + (arr[i] - mean) * 
                  (arr[i] - mean);
    return squaredDiff / n;
}

// Function to compute for the standard deviation
double standardDev(int arr[], int n){
    return sqrt(variance(arr, n)); // To solve for the standard deviation, take the square root of the variance 
}

// Function to display the statistical results computed in every function
void Display(int largest, int smallest, double average, double stdev, double var){
    cout << "Largest =  " << largest << endl;
    cout << "Smallest =  " << smallest << endl;
    cout << "Average =  " << average << endl;
    cout << "Variance = " << var << endl;
    cout << "Standard Deviation = " << stdev << endl;
}
