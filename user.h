#ifndef USER_H
#define USER_H
#include <iostream>
#include <string>
using namespace std;
class User
{
protected:
    int id;
    string name;
public:
    User();
    User(int id, const string& name);
    virtual ~User();
    int getId() const;
    string getName() const;
    void setId(int id);
    void setName(const string& name);
    virtual void display() const;
};
#endif // USER_H