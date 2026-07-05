#include "../include/inventory.h"
#include <iostream>
#include <fstream>
using namespace std;
// Constructor
Inventory::Inventory()
{
}
// Add Product
void Inventory::addProduct(const Product& product)
{
    products.push_back(product);
    cout << "Product added successfully!" << endl;
}
// Remove Product
void Inventory::removeProduct(int productId)
{
    for (auto it = products.begin(); it != products.end(); ++it)
    {
        if (it->getProductId() == productId)
        {
            products.erase(it);
            cout << "Product removed successfully!" << endl;
            return;
        }
    }
    cout << "Product not found!" << endl;
}
// Update Product
void Inventory::updateProduct(int productId)
{
    for (auto &product : products)
    {
        if (product.getProductId() == productId)
        {
            string name, category;
            double price;
            int quantity;
            cin.ignore();
            cout << "Enter New Product Name: ";
            getline(cin, name);
            cout << "Enter New Category: ";
            getline(cin, category);
            cout << "Enter New Price: ";
            cin >> price;
            cout << "Enter New Quantity: ";
            cin >> quantity;
            product.setProductName(name);
            product.setCategory(category);
            product.setPrice(price);
            product.setQuantity(quantity);
            cout << "Product updated successfully!" << endl;
            return;
        }
    }
    cout << "Product not found!" << endl;
}
// Search Product
void Inventory::searchProduct(int productId) const
{
    for (const auto &product : products)
    {
        if (product.getProductId() == productId)
        {
            cout << "\nProduct Found\n";
            product.display();
            return;
        }
    }
    cout << "Product not found!" << endl;
}
// Display Inventory
void Inventory::displayInventory() const
{
    if (products.empty())
    {
        cout << "Inventory is empty." << endl;
        return;
    }
    cout << "\n========== INVENTORY ==========\n";
    for (const auto &product : products)
    {
        product.display();
        cout << "------------------------------" << endl;
    }
}
// Update Stock
void Inventory::updateStock(int productId, int quantity)
{
    for (auto &product : products)
    {
        if (product.getProductId() == productId)
        {
            product.setQuantity(quantity);
            cout << "Stock updated successfully!" << endl;
            return;
        }
    }
    cout << "Product not found!" << endl;
}
// Save to File
void Inventory::saveToFile(const string& filename) const
{
    ofstream file(filename);
    if (!file)
    {
        cout << "Unable to open file!" << endl;
        return;
    }
    for (const auto &product : products)
    {
        file << product.getProductId() << ","
             << product.getProductName() << ","
             << product.getCategory() << ","
             << product.getPrice() << ","
             << product.getQuantity() << endl;
    }
    file.close();
    cout << "Inventory saved successfully!" << endl;
}
// Load from File
void Inventory::loadFromFile(const string& filename)
{
    ifstream file(filename);
    if (!file)
    {
        cout << "Unable to open file!" << endl;
        return;
    }
    products.clear();
    int id;
    string name;
    string category;
    double price;
    int quantity;
    char comma;
    while (file >> id >> comma)
    {
        getline(file, name, ',');
        getline(file, category, ',');
        file >> price >> comma >> quantity;
        file.ignore();
        Product product(id, name, category, price, quantity);
        products.push_back(product);
    }
    file.close();
    cout << "Inventory loaded successfully!" << endl;
}
// Total Products
int Inventory::getTotalProducts() const
{
    return products.size();
}