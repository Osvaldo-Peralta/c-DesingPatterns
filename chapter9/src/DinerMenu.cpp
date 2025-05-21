/*
DinerMenu::DinerMenu()
{
    for (int i = 0; i < MAX_ITEMS; i++)
    {
        menuItems[i] = nullptr; // Inicializamos todos los punteros a nullptr
    }

    addItem("Vegetarian BLT", "(Fakin') Bacon with lettuce & tomato on whole wheat", true, 2.99);
    addItem("BLT", "Bacon with lettuce & tomato on whole wheat", false, 2.99);
    addItem("Soup of the day", "Soup of the day, with a side of potato salad", false, 3.29);
    addItem("Hotdog", "A hot dog, with sauerkraut, relish, onions, topped with cheese", false, 3.05);
    addItem("Steamed Veggies and Brown Rice", "Steamed vegetables over brown rice", true, 39.9);
    addItem("Pasta", "Spaghetti with marinara sauce, and a slice of sourdough bread", false, 3.89);
}

DinerMenu::~DinerMenu()
{
    for (int i = 0; i < numberOfItems; i++)
    {
        if (menuItems[i] != nullptr)
        { // Verificamos que no sea nullptr antes de eliminar
            delete menuItems[i];
            menuItems[i] = nullptr; // Evitar accesos posteriores a memoria liberada
        }
    }
}

void DinerMenu::addItem(string name, string description, bool isVegetarian, double precio)
{
    if (numberOfItems >= MAX_ITEMS)
    {
        cerr << "Lo sentimos, el menu esta lleno" << endl;
    }
    else
    {
        menuItems[numberOfItems] = new MenuItem(name, description, isVegetarian, precio);
        numberOfItems++;
    }
}
*/
#include "DinerMenu.h"
DinerMenu::DinerMenu()
{
    addItem(std::make_shared<MenuItem>("Vegetarian BLT", "(Fakin') Bacon with lettuce & tomato on whole wheat", true, 2.99));
    addItem(std::make_shared<MenuItem>("BLT", "Bacon with lettuce & tomato on whole wheat", false, 2.99));
    addItem(std::make_shared<MenuItem>("Soup of the day", "Soup of the day, with a side of potato salad", false, 3.29));
    addItem(std::make_shared<MenuItem>("Hotdog", "A hot dog, with sauerkraut, relish, onions, topped with cheese", false, 3.05));
    addItem(std::make_shared<MenuItem>("Steamed Veggies and Brown Rice", "Steamed vegetables over brown rice", true, 3.99));
    addItem(std::make_shared<MenuItem>("Pasta", "Spaghetti with marinara sauce, and a slice of sourdough bread", false, 3.89));
}

void DinerMenu::addItem(std::shared_ptr<MenuItem> item)
{
    if (numberOfItems >= MAX_ITEMS)
    {
        std::cerr << "¡Menú lleno! No se puede añadir más ítems." << std::endl;
        return;
    }
    items[numberOfItems++] = item; // Añade al arreglo
}

void DinerMenu::print() const
{
    std::cout << "\nDINER MENU\n";
    for (const auto &item : items)
    {
        if (item)
        { // Verificar que el puntero no sea nullptr
            std::cout << "  " << item->getName() << ", $" << item->getPrecio()
                      << " -- " << item->getDescription() << std::endl;
        }
    }
}