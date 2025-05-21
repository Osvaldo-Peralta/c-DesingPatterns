// main.cpp
#include <memory>
#include <vector>
#include "PancakeHouseMenu.h"
#include "DinerMenu.h"
#include "CafeMenu.h"
#include "Waitress.h"

int main()
{
    auto pancakeMenu = std::make_shared<PancakeHouseMenu>();
    auto dinerMenu = std::make_shared<DinerMenu>();
    auto cafeMenu = std::make_shared<CafeMenu>();

    std::vector<std::shared_ptr<Menu>> menus = {pancakeMenu, dinerMenu, cafeMenu};
    Waitress waitress(menus);
    waitress.printAllMenus();

    return 0;
}