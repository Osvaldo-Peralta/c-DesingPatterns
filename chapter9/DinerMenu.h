#ifndef DINERMENU_H
#define DINERMENU_H

#include "MenuItem.h"
#include "Menu.h"
using namespace std;

class DinerMenu : public Menu<MenuItem **>
{
private:
    static constexpr int MAX_ITEMS = 6;
    MenuItem *menuItems[MAX_ITEMS]; // Arreglo de punteros a MenuItem
    int numberOfItems = 0;

public:
    using Iterator = MenuItem **;

    ~DinerMenu(); // Destructor para liberar memoria
    DinerMenu();
    void addItem(string name, string description, bool vegetarian, double price);

    // Adaptamos los iteradores para que sean compatibles con Menu
    Iterator begin() { return &menuItems[0]; }           // Direccion del primer elemento
    Iterator end() { return &menuItems[numberOfItems]; } // Direccion de la ultima posicion
};

#endif