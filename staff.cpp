#include "../include/staff.h"
#include <iostream>
using namespace std;
// Default Constructor
Staff::Staff() : User()
{
}
// Parameterized Constructor
Staff::Staff(int id, const string& name)
    : User(id, name)
{
}
// Search Product
void Staff::searchProduct()
{
    cout << "Searching for product..." << endl;
}
// View Inventory
void Staff::viewInventory()
{
    cout << "Displaying inventory..." << endl;
}
// Display Staff Information
void Staff::display() const
{
    cout << "\n===== Staff Details =====" << endl;
    cout << "Staff ID   : " << id << endl;
    cout << "Staff Name : " << name << endl;
}