#ifndef WAITRESS_H
#define WAITRESS_H

#include "PancakeHouseMenu.h"
#include "DinerMenu.h"
#include "Iterator.h"

class Waitress
{
private:
    PancakeHouseMenu &pancakeHouseMenu;
    DinerMenu &dinerMenu;
    void printMenu(Iterator *iterator);

public:
    Waitress(PancakeHouseMenu &pancakeHouseMenu, DinerMenu &dinerMenu);
    void printMenu();
};

#endif