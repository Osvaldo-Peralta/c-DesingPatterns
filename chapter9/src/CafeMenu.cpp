/*
CafeMenu::CafeMenu()
{
    addItem("Veggie Burger and Air Fries",
            "Veggie burger on a whole wheat bun, lettuce, tomato, and fries",
            true, 3.99);
    addItem("Soup of the day",
            "A cup of the soup of the day, with a side salad",
            false, 3.69);
    addItem("Burrito",
            "A large burrito, with whole pinto beans, salsa, guacamole",
            true, 4.29);
}

void CafeMenu::addItem(const std::string &name, const std::string &description,
                       bool vegetarian, double price)
{
    // Usamos emplace para construcción directa en el mapa
    menuItems.emplace(
        std::piecewise_construct,
        std::forward_as_tuple(name),                                // Clave
        std::forward_as_tuple(name, description, vegetarian, price) // Valor
    );
}
*/
#include "CafeMenu.h"
CafeMenu::CafeMenu()
{
    addItem(std::make_shared<MenuItem>("Veggie Burger and Air Fries", "Veggie burger on a whole wheat bun, lettuce, tomato, and fries", true, 3.99));
    addItem(std::make_shared<MenuItem>("Soup of the day", "A cup of the soup of the day, with a side salad", false, 3.69));
    addItem(std::make_shared<MenuItem>("Burrito", "A large burrito, with whole pinto beans, salsa, guacamole", true, 4.29));
}

void CafeMenu::addItem(std::shared_ptr<MenuItem> item)
{
    items.emplace(item->getName(), item);
}

void CafeMenu::print() const
{
    std::cout << "\nCAFE MENU\n";
    for (const auto &pair : items)
    { // pair es <clave, valor>
        const auto &item = pair.second;
        std::cout << "  " << item->getName() << ", $" << item->getPrecio()
                  << " -- " << item->getDescription() << std::endl;
    }
}