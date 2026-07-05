#ifndef STAFF_H
#define STAFF_H
#include <iostream>
#include <string>
#include "user.h"
using namespace std;
class Staff : public User
{
public:
    // Constructors
    Staff();
    Staff(int id, const string& name);
    // Staff Functions
    void searchProduct();
    void viewInventory();
    // Override display function
    void display() const override;
};
#endif // STAFF_H