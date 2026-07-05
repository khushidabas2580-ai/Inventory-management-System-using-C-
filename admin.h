#ifndef ADMIN_H
#define ADMIN_H

#include <iostream>
#include <string>
#include "user.h"

using namespace std;

class Admin : public User
{
public:
    // Constructors
    Admin();
    Admin(int id, const string& name);

    // Admin Functions
    void addProduct();
    void removeProduct();
    void updateProduct();

    // Display
    void display() const override;
};

#endif // ADMIN_H