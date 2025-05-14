/*
> Definimos Menu como la interfaz comun para PancakeHouseMenu y DinerMenu
*/

#ifndef MENU_H
#define MENU_H

#include <iterator>

class MenuItem;

template <typename Iter>
class Menu
{
public:
    virtual ~Menu() = default;
    virtual Iter begin() = 0;
    virtual Iter end() = 0;
};

#endif