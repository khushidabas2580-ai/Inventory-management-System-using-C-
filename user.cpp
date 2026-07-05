#include "../include/user.h"

using namespace std;

// Default Constructor
User::User()
{
    id = 0;
    name = "";
}

// Parameterized Constructor
User::User(int id, const string& name)
{
    this->id = id;
    this->name = name;
}

// Destructor
User::~User()
{
}

// Getter for ID
int User::getId() const
{
    return id;
}

// Getter for Name
string User::getName() const
{
    return name;
}

// Setter for ID
void User::setId(int id)
{
    this->id = id;
}

// Setter for Name
void User::setName(const string& name)
{
    this->name = name;
}

// Display User Information
void User::display() const
{
    cout << "User ID   : " << id << endl;
    cout << "User Name : " << name << endl;
}