#include "Waitress.h"

Waitress::Waitress(std::vector<std::shared_ptr<Menu>> menus) : menus(menus) {}

void Waitress::printAllMenus()
{
    for (const auto &menu : menus)
    {
        menu->print(); // Acceso correcto (usando ->)
    }
}