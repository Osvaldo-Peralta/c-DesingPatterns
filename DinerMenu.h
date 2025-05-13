#ifndef DINERMENU_H
#define DINERMENU_H

#include "MenuItem.h"
#include "Iterator.h"
#include "DinerMenuIterator.h"

class DinerMenu
{
private:
    static const int MAX_ITEMS = 6;
    int numberOfItems = 0;
    MenuItem *menuItems[MAX_ITEMS]; // Arreglo de punteros a MenuItem

public:
    DinerMenu();
    ~DinerMenu(); // Destructor para liberar memoria

    void addItem(string name, string description, bool vegetarian, double precio);
    Iterator *createIterator() const; // Metodo que generara el Iterador
    void printMenu() const;
};

#endif