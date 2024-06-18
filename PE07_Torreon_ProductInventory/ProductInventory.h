/*  File: ProductInventory.h
    This program defines classes 'Product', 'Clothing', and 'Electronics' in C++ to represent products with common attributes and
    additional attributes specific to clothing and electronics. It implements methods to set and get attributes. It also prints the product details.
*/

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

// Define the base class 'Product'
// This class represents a product with common attributes
class Product {
private: // Private attributes of the class 'Product'
    string Name;
    string Brand;
    double Price;
    int Quantity;
    string Description;
    string Category;

public: 
    // Constructor to initialize the 'Product' object 
    Product(string name, string brand, double price, int quantity, string description, string category) {
        Name = name;
        Brand = brand;
        Price = price;
        Quantity = quantity;
        Description = description;
        Category = category;
    }

    // Getter methods to retrieve the values of the private attributes
    string getName() const {
        return Name;
    }

    string getBrand() const {
        return Brand;
    }

    double getPrice() const {
        return Price;
    }

    int getQuantity() const {
        return Quantity;
    }

    string getDescription() const {
        return Description;
    }

    string getCategory() const {
        return Category;
    }

    // Setter methods to update the values of private attributes
    void setName(string name) {
        Name = name;
    }

    void setBrand(string brand) {
        Brand = brand;
    }

    void setPrice(double price) {
        Price = price;
    }

    void setQuantity(int quantity) {
        Quantity = quantity;
    }

    void setDescription(string description) {
        Description = description;
    }

    void setCategory(string category) {
        Category = category;
    }

    // Method to print product details of a product
    virtual void printDetails() const {
        cout << fixed << setprecision(2); // Set fixed-notation with 2 decimal places
        cout << "Name: " << Name << "\nBrand: " << Brand << "\nPrice: ₱" << Price << "\nQuantity: " << Quantity << "\nDescription: " << Description << "\nCategory: " << Category << "\n";
    }

    // Virtual destructor to ensure proper cleanup of derived class objects
    virtual ~Product() = default;
};

// Derived the derived class 'Clothing' which inherits from class 'Product'
// This class represents a clothing product with additional attributes
class Clothing : public Product {
private: // Private attributes specific to clothing
    string Size;
    string Color;
    string Material;

public:  
    // Constructor to initialize the 'Clothing' object
    Clothing(string name, string brand, double price, int quantity, string description, string category, string size, string color, string material)
        : Product(name, brand, price, quantity, description, category), Size(size), Color(color), Material(material) {}

    // Getter methods to retrieve the values of private attributes specific to clothing
    string getSize() const {
        return Size;
    }

    string getColor() const {
        return Color;
    }

    string getMaterial() const {
        return Material;
    }

    // Setter methods to update the values of private attributes specific to clothing
    void setSize(string size) {
        Size = size;
    }

    void setColor(string color) {
        Color = color;
    }

    void setMaterial(string material) {
        Material = material;
    }

    // Method to print clothing details of a clothing product
    void printDetails() const override {
        // Call the base class method to print common attributes
        Product::printDetails();
        // Print additional attributes specific to clothing
        cout << "Size: " << Size << "\nColor: " << Color << "\nMaterial: " << Material << "\n";
    }
};

// Define the derived class 'Electronics' which inherits from class 'Product'
// This class represents an electronic product with additional attributes
class Electronics : public Product {
private: // Prive attributes specific to electronics
    string Model;
    string Warranty;
    string TechnicalSpecifications;

public:
    // Constructor to initialize the 'Electronics' object
    Electronics(string name, string brand, double price, int quantity, string description, string category, string model, string warranty, string technicalSpecifications)
        : Product(name, brand, price, quantity, description, category), Model(model), Warranty(warranty), TechnicalSpecifications(technicalSpecifications) {}

    // Getter methods to retrieve the values of private attributes specific to electronics
    string getModel() const {
        return Model;
    }

    string getWarranty() const {
        return Warranty;
    }

    string getTechnicalSpecifications() const {
        return TechnicalSpecifications;
    }

    // Setter methods to update the values of private attributes specific to electronics
    void setModel(string model) {
        Model = model;
    }

    void setWarranty(string warranty) {
        Warranty = warranty;
    }

    void setTechnicalSpecifications(string technicalSpecifications) {
        TechnicalSpecifications = technicalSpecifications;
    }

    // Method to print the details of an electronic product
    void printDetails() const override {
        // Call the base class method to print common attributes
        Product::printDetails();
        // Print additional attributes specific to electronics
        cout << "Model: " << Model << "\nWarranty: " << Warranty << "\nTechnical Specifications: " << TechnicalSpecifications << "\n";
    }
};


