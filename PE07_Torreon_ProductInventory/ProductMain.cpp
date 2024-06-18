/*  File: ProductMain.cpp
    This program asks for users to input product details for clothing and electronics and creates instances of classes 'Clothing' and 'Electronics'.
    The program then displays the inputted information for each product.
*/ 

#include "ProductInventory.h" // Include 'ProductInventory.h' as a library

int main() {
    string name, brand, description, category, size, color, material, model, warranty, technicalSpecification;
    float price;
    int quantity;

    // Prompt user for input and create instances of Clothing and Electronics using user input

    cout << "Enter details for a clothing product:\n";
    cout << "Name: ";
    getline(cin, name);
    cout << "Brand: ";
    getline(cin, brand);
    cout << "Price: ₱";
    cin >> price;
    cout << "Quantity: ";
    cin >> quantity;
    cin.ignore(); // Clear the newline character from the input buffer
    cout << "Description: ";
    getline(cin, description);
    cout << "Category: ";
    getline(cin, category);
    cout << "Size: ";
    getline(cin, size);
    cout << "Color: ";
    getline(cin, color);
    cout << "Material: ";
    getline(cin, material);

    Clothing shirt(name, brand, price, quantity, description, category, size, color, material);

    cout << "\nEnter details for an electronic product:\n";
    cout << "Name: ";
    getline(cin, name);
    cout << "Brand: ";
    getline(cin, brand);
    cout << "Price: $";
    cin >> price;
    cout << "Quantity: ";
    cin >> quantity;
    cin.ignore(); // Clear the newline character from the input buffer
    cout << "Description: ";
    getline(cin, description);
    cout << "Category (Clothing or Electronics): ";
    getline(cin, category);
    cout << "Model: ";
    getline(cin, model);
    cout << "Warranty: ";
    getline(cin, warranty);
    cout << "Technical Specifications: ";
    getline(cin, technicalSpecification);

    Electronics phone(name, brand, price, quantity, description, category, model, warranty, technicalSpecification);

    // Print details of each product
    cout << "\nCLOTHING DETAILS\n";
    shirt.printDetails();

    cout << "\nELECTRONICS DETAILS\n";
    phone.printDetails();

    return 0;
}
