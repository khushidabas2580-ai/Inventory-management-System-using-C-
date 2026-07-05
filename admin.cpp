#include "../include/admin.h"
#include <iostream>

using namespace std;

// Default Constructor
Admin::Admin() : User()
{
}

// Parameterized Constructor
Admin::Admin(int id, const string& name)
    : User(id, name)
{
}

// Add Product
void Admin::addProduct()
{
    cout << "Product added successfully." << endl;
}

// Remove Product
void Admin::removeProduct()
{
    cout << "Product removed successfully." << endl;
}

// Update Product
void Admin::updateProduct()
{
    cout << "Product updated successfully." << endl;
}

// Display Admin Information
void Admin::display() const
{
    cout << "\n===== Admin Details =====" << endl;
    cout << "Admin ID   : " << id << endl;
    cout << "Admin Name : " << name << endl;
}