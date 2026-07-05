#ifndef PRODUCT_H
#define PRODUCT_H
#include <iostream>
#include <string>
using namespace std;
class Product
{
private:
    int productId;
    string productName;
    string category;
    double price;
    int quantity;
public:
    // Constructors
    Product();
    Product(int id, const string& name, const string& category,
            double price, int quantity);
    // Getters
    int getProductId() const;
    string getProductName() const;
    string getCategory() const;
    double getPrice() const;
    int getQuantity() const;
    // Setters
    void setProductName(const string& name);
    void setCategory(const string& category);
    void setPrice(double price);
    void setQuantity(int quantity);
    // Display product details
    void display() const;
};
#endif // PRODUCT_H