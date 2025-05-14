#include "MenuItem.h"
#include "PancakeHouseMenu.h"

PancakeHouseMenu::PancakeHouseMenu()
{
    addItem("K&B's Pancake Breakfast", "Pancakes with scrambled eggs and toast", true, 2.99);
    addItem("Regular Pancake Breakfast", "Pancakes with fried eggs, sausage", false, 2.99);
    addItem("Blueberry Pancakes", "Pancakes made with fresh blueberries", true, 3.49);
    addItem("Waffles", "Waffles with your choice of blueberries or strawberries", true, 3.59);
}

void PancakeHouseMenu::addItem(string name, string description, bool vegetarian, double precio)
{
    MenuItem menuItem(name, description, vegetarian, precio);
    menuItems.push_back(menuItem);
}

// Nueva implementacion de iterator estandarizado por libreria (No el que implementamos anteriormente)