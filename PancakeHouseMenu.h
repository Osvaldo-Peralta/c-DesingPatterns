#ifndef PANCAKEHOUSEMENU_H
#define PANCAKEHOUSEMENU_H

#include "MenuItem.h"
#include <vector>
#include "PancakeHouseIterator.h"

class PancakeHouseMenu
{
private:
    vector<MenuItem> menuItems;

public:
    PancakeHouseMenu();
    void addItem(string name, string description, bool vegetarian, double precio);
    Iterator *createIterator(); // Metodo que genera el iterador
    void prinMenu();
};

#endif