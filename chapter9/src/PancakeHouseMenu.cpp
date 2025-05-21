// Nueva implementacion de iterator estandarizado por libreria (No el que implementamos anteriormente)
#include "PancakeHouseMenu.h"
PancakeHouseMenu::PancakeHouseMenu()
{
    addItem(std::make_shared<MenuItem>("K&B's Pancake Breakfast", "Pancakes with scrambled eggs and toast", true, 2.99));
    addItem(std::make_shared<MenuItem>("Regular Pancake Breakfast", "Pancakes with fried eggs, sausage", false, 2.99));
    addItem(std::make_shared<MenuItem>("Blueberry Pancakes", "Pancakes made with fresh blueberries", true, 3.49));
    addItem(std::make_shared<MenuItem>("Waffles", "Waffles with your choice of blueberries or strawberries", true, 3.59));
}

void PancakeHouseMenu::addItem(std::shared_ptr<MenuItem> item)
{
    items.push_back(item);
}

void PancakeHouseMenu::print() const
{
    std::cout << "\nPANCAKE HOUSE MENU\n";
    for (const auto &item : items)
    {
        // Usar -> en lugar de . (item es shared_ptr<MenuItem>)
        std::cout << "  " << item->getName() << ", $" << item->getPrecio()
                  << " -- " << item->getDescription() << std::endl;
    }
}