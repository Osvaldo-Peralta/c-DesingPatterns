/*
> Definimos Menu como la interfaz comun para PancakeHouseMenu y DinerMenu
*/
#pragma once

#include <vector>
#include <memory>
#include "MenuItem.h"

// Declaramos una interfaz Menu
class Menu
{
public:
    virtual ~Menu() = default;
    virtual void addItem(std::shared_ptr<MenuItem> item) = 0;
    virtual void print() const = 0; // ¡Asegúrate de que sea público!
};