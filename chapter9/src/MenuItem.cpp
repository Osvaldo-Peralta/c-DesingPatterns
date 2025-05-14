#include "MenuItem.h"

// Inicializamos el constructor

MenuItem::MenuItem(string name, string description, bool vegetarian, double precio)
{
    this->name = name;
    this->description = description;
    this->vegetarian = vegetarian;
    this->precio = precio;
}

// Los getters nos permiten acceder a los datos

string MenuItem::getName() const
{
    return name;
}

string MenuItem::getDescription() const
{
    return description;
}

bool MenuItem::isVegetarian() const
{
    return vegetarian;
}

double MenuItem::getPrecio() const
{
    return precio;
}