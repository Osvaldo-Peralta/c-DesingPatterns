#include "Waitress.h"
#include <iostream>

Waitress::Waitress(PancakeHouseMenu &pancakeHouseMenu, DinerMenu &dinerMenu)
    : pancakeHouseMenu(pancakeHouseMenu), dinerMenu(dinerMenu) {}

void Waitress::printMenu()
{
    Iterator *pancakeIterator = pancakeHouseMenu.createIterator();
    Iterator *dinerIterator = dinerMenu.createIterator();

    std::cout << "MENU\n----\nBREAKFAST" << std::endl;
    printMenu(pancakeIterator);

    std::cout << "\nLUNCH" << std::endl;
    printMenu(dinerIterator);

    delete pancakeIterator; // Liberar memoria si createIterator() usa new
    delete dinerIterator;
}

void Waitress::printMenu(Iterator *iterator)
{
    while (iterator->hasNext())
    {
        MenuItem *menuItem = iterator->next();
        if (menuItem)
        {
            std::cout << menuItem->getName() << ", $";
            std::cout << menuItem->getPrecio() << " -- ";
            std::cout << menuItem->getDescription() << std::endl;
        }
    }
}