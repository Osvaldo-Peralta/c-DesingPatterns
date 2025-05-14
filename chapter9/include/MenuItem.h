#ifndef MENUITEM_H
#define MENUITEM_H

#include <iostream>
#include <string>
using namespace std;

class MenuItem
{
private:
    string name;
    string description;
    bool vegetarian;
    double precio;

public:
    // Constructor de la clase, pasamos todos los valores al constructor al este inicializarse
    MenuItem(string name, string description, bool vegetarian, double precio);
    string getName() const;
    string getDescription() const;
    bool isVegetarian() const;
    double getPrecio() const;
};
#endif