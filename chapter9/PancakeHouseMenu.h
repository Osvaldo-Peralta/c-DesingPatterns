#ifndef PANCAKEHOUSEMENU_H
#define PANCAKEHOUSEMENU_H

#include <vector>
#include "Menu.h"
#include "MenuItem.h"

class PancakeHouseMenu : public Menu<vector<MenuItem>::iterator>
{
private:
    vector<MenuItem> menuItems;

public:
    using Iterator = vector<MenuItem>::iterator; // Alias

    PancakeHouseMenu();
    void addItem(string name, string description, bool vegetarian, double precio);

    // Implementacion de la nueva interfaz Menu
    Iterator begin() { return menuItems.begin(); }
    Iterator end() { return menuItems.end(); }
};

#endif