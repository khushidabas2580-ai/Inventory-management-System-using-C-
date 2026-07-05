#include "../include/product.h"
using namespace std;
// Default Constructor
Product::Product()
{
    productId = 0;
    productName = "";
    category = "";
    price = 0.0;
    quantity = 0;
}
// Parameterized Constructor
Product::Product(int id, const string& name, const string& cat,
                 double p, int qty)
{
    productId = id;
    productName = name;
    category = cat;
    price = p;
    quantity = qty;
}
// Getters
int Product::getProductId() const
{
    return productId;
}
string Product::getProductName() const
{
    return productName;
}
string Product::getCategory() const
{
    return category;
}
double Product::getPrice() const
{
    return price;
}
int Product::getQuantity() const
{
    return quantity;
}
// Setters
void Product::setProductName(const string& name)
{
    productName = name;
}
void Product::setCategory(const string& cat)
{
    category = cat;
}
void Product::setPrice(double p)
{
    price = p;
}
void Product::setQuantity(int qty)
{
    quantity = qty;
}
// Display Product
void Product::display() const
{
    cout << "Product ID : " << productId << endl;
    cout << "Name       : " << productName << endl;
    cout << "Category   : " << category << endl;
    cout << "Price      : " << price << endl;
    cout << "Quantity   : " << quantity << endl;
}