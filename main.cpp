#include <iostream>
#include <string>
#include "../include/inventory.h"
#include "../include/product.h"
using namespace std;
int main()
{
    Inventory inventory;
    int choice;
    do
    {
        cout << "\n=========================================\n";
        cout << "      INVENTORY MANAGEMENT SYSTEM\n";
        cout << "=========================================\n";
        cout << "1. Add Product\n";
        cout << "2. Remove Product\n";
        cout << "3. Update Product\n";
        cout << "4. Search Product\n";
        cout << "5. Display Inventory\n";
        cout << "6. Update Stock\n";
        cout << "7. Save Inventory\n";
        cout << "8. Load Inventory\n";
        cout << "9. Total Products\n";
        cout << "10. Exit\n";
        cout << "=========================================\n";
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
        {
            int id, quantity;
            string name, category;
            double price;
            cout << "\nEnter Product ID: ";
            cin >> id;
            cin.ignore();
            cout << "Enter Product Name: ";
            getline(cin, name);
            cout << "Enter Category: ";
            getline(cin, category);
            cout << "Enter Price: ";
            cin >> price;
            cout << "Enter Quantity: ";
            cin >> quantity;
            Product product(id, name, category, price, quantity);
            inventory.addProduct(product);
            break;
        }
        case 2:
        {
            int id;
            cout << "Enter Product ID to Remove: ";
            cin >> id;
            inventory.removeProduct(id);
            break;
        }
        case 3:
        {
            int id;
            cout << "Enter Product ID to Update: ";
            cin >> id;
            inventory.updateProduct(id);
            break;
        }
        case 4:
        {
            int id;
            cout << "Enter Product ID to Search: ";
            cin >> id;
            inventory.searchProduct(id);
            break;
        }
        case 5:
        {
            inventory.displayInventory();
            break;
        }
        case 6:
        {
            int id, quantity;
            cout << "Enter Product ID: ";
            cin >> id;
            cout << "Enter New Quantity: ";
            cin >> quantity;
            inventory.updateStock(id, quantity);
            break;
        }
        case 7:
        {
            inventory.saveToFile("inventory.txt");
            break;
        }
        case 8:
        {
            inventory.loadFromFile("inventory.txt");
            break;
        }
        case 9:
        {
            cout << "Total Products: "
                 << inventory.getTotalProducts()
                 << endl;
            break;
        }
        case 10:
        {
            cout << "\nThank You for Using Inventory Management System!\n";
            break;
        }
        default:
        {
            cout << "Invalid Choice! Please Try Again.\n";
        }
        }
    } while (choice != 10);
    return 0;
}