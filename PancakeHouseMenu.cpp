#include "MenuItem.h"
#include "PancakeHouseMenu.h"

PancakeHouseMenu::PancakeHouseMenu()
{
    addItem("K&B's Pancake Breakfast", "Pancakes with scrambled eggs and toast", true, 2.99);
    addItem("Regular Pancake Breakfast", "Pancakes with fried eggs, sausage", false, 2.99);
    addItem("Blueberry Pancakes", "Pancakes made with fresh blueberries", true, 3.49);
    addItem("Waffles", "Waffles with your choice of blueberries or strawberries", true, 3.59);
}

void PancakeHouseMenu::addItem(std::string name, std::string description, bool vegetarian, double precio)
{
    MenuItem menuItem(name, description, vegetarian, precio);
    menuItems.push_back(menuItem);
}

// Implementación del método createIterator
Iterator *PancakeHouseMenu::createIterator()
{
    return new PancakeHouseIterator(menuItems); // Devuelve un puntero
}

// Corrección en prinMenu() para usar el iterador correctamente
void PancakeHouseMenu::prinMenu()
{
    Iterator *iterator = createIterator(); // Usamos un puntero
    int aux = 0;

    while (iterator->hasNext())
    {
        MenuItem *item = iterator->next();
        if (item)
        {
            aux++;
            std::cout << "Nombre: " << item->getName() << std::endl;
            std::cout << "Descripcion: " << item->getDescription() << std::endl;
            std::cout << "Es vegetariano: " << (item->isVegetarian() ? "Si" : "No") << std::endl;
            std::cout << "Su precio es de $" << item->getPrecio() << std::endl;

            if (aux < 4)
            {
                std::cout << "------------------------------" << std::endl;
            }
        }
    }

    delete iterator; // Liberamos la memoria
}