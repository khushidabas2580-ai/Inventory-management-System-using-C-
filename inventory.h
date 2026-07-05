#ifndef INVENTORY_H
#define INVENTORY_H
#include <vector>
#include <string>
#include "product.h"
using namespace std;
class Inventory
{
private:
    vector<Product> products;
public:
    // Constructor
    Inventory();
    // Product Management
    void addProduct(const Product& product);
    void removeProduct(int productId);
    void updateProduct(int productId);
    void searchProduct(int productId) const;
    void displayInventory() const;
    // Stock Management
    void updateStock(int productId, int quantity);
    // File Handling
    void saveToFile(const string& filename) const;
    void loadFromFile(const string& filename);
    // Utility Function
    int getTotalProducts() const;
};
#endif // INVENTORY_H