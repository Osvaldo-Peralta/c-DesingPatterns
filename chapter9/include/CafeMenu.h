#ifndef CAFEMENU_H
#define CAFEMENU_H

#include "MenuItem.h"
#include <map>
#include <string>

class CafeMenu
{
private:
    map<string, MenuItem> menuItems;

public:
    CafeMenu();
    void addItem(const string &name, const string &description, bool vegetarian, double price);
    // Método para obtener los items (no necesario si usamos iteradores directamente)
    map<std::string, MenuItem> &getMenuItems() { return menuItems; }

    using Iterator = map<string, MenuItem>::iterator;

    Iterator begin() { return menuItems.begin(); }
    Iterator end() { return menuItems.end(); }
};

#endif