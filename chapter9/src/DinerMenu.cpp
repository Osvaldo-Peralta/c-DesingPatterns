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