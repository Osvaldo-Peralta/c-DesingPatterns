#include "Waitress.h"
#include <iostream>

#define GREEN "\033[32m"
#define RESET "\033[0m"

Waitress::Waitress(PancakeHouseMenu &pancakeHouseMenu, DinerMenu &dinerMenu)
    : pancakeHouseMenu(pancakeHouseMenu), dinerMenu(dinerMenu) {}

void Waitress::printMenu()
{
    Iterator *pancakeIterator = pancakeHouseMenu.createIterator();
    Iterator *dinerIterator = dinerMenu.createIterator();

    cout << "MENU\n----\nBREAKFAST" << endl;
    printMenu(pancakeIterator);

    cout << "\nLUNCH" << endl;
    printMenu(dinerIterator);

    delete pancakeIterator; // Liberar memoria
    delete dinerIterator;
}

void Waitress::printMenu(Iterator *iterator)
{
    while (iterator->hasNext())
    {
        MenuItem *menuItem = iterator->next();
        if (menuItem)
        {
            cout << menuItem->getName() << ", $";
            cout << menuItem->getPrecio() << GREEN << " -- " << RESET;
            cout << menuItem->getDescription() << endl;
        }
    }
}