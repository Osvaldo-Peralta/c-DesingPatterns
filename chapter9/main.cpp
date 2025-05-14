#include "DinerMenu.h"
#include "PancakeHouseMenu.h"
#include "CafeMenu.h"
#include "Waitress.h"

int main()
{

    PancakeHouseMenu pancakeMenu;
    DinerMenu dinerMenu;
    CafeMenu cafeMenu;

    Waitress waiter(pancakeMenu.begin(), pancakeMenu.end(), dinerMenu.begin(), dinerMenu.end(), cafeMenu.begin(), cafeMenu.end());
    waiter.printAllMenus();

    return 0;
}