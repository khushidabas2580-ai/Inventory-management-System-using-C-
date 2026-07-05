# # Inventory Management System
## Project Description
The Inventory Management System is a C++ console application developed using Object-Oriented Programming (OOP) concepts. It helps users manage products in an inventory by allowing them to add, remove, update, search, and display products. The system also supports saving and loading inventory data using file handling.
---
## Features
- Add Product
- Remove Product
- Update Product
- Search Product
- Display Inventory
- Update Product Stock
- Save Inventory to File
- Load Inventory from File
---
## Technologies Used
- C++
- Object-Oriented Programming (OOP)
- Inheritance
- STL (Vector)
- File Handling
- Visual Studio Code
- MinGW g++
---
## Project Structure
```
Task3/
├── include/
│   ├── admin.h
│   ├── inventory.h
│   ├── product.h
│   ├── staff.h
│   └── user.h
│
├── src/
│   ├── admin.cpp
│   ├── inventory.cpp
│   ├── main.cpp
│   ├── product.cpp
│   ├── staff.cpp
│   └── user.cpp
│
├── inventory.txt
├── README.md
└── Makefile (Optional)
```
---
## OOP Concepts Used
- Classes and Objects
- Inheritance
- Encapsulation
- Polymorphism (Virtual Functions)
- Constructors
---
## STL Used
- `vector<Product>`
The vector container is used to store and manage products in the inventory.
---
## File Handling
Inventory data is stored in:
```
inventory.txt
```
The program can:
- Save product details
- Load product details
---
## Build Instructions
Open the terminal inside the project folder and compile using:
```bash
g++ -I include src\*.cpp -o inventory.exe
```
---
## Run the Program
Windows:
```bash
.\inventory.exe
```
---
## Sample Input
```
Enter your choice: 1
Enter Product ID: 101
Enter Product Name: Laptop
Enter Category: Electronics
Enter Price: 65000
Enter Quantity: 10
```
---
## Sample Output

```
Product added successfully!
```
---
## Example Inventory File
```
101,Laptop,Electronics,65000,10
102,Mouse,Electronics,800,25
103,Keyboard,Electronics,1500,15
```
---
## Design Decisions
- Separate header (.h) and source (.cpp) files for better code organization.
- Used inheritance to create Admin and Staff classes from the User class.
- Used STL vector to manage products efficiently.
- Used file handling to save and load inventory data.
- Implemented a menu-driven interface for easy interaction.
---
## Environment
- Operating System: Windows 10/11
- Compiler: MinGW g++
- IDE: Visual Studio Code
---
## Author
**Name:** Khushi
**Course:** Diploma in Computer Engineering
**Language:** C++