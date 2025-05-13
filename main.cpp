#include "DinerMenu.h"
#include "PancakeHouseMenu.h"
#include "Waitress.h"

// #define GREEN "\033[32m"
// #define RESET "\033[0m"

int main()
{

    PancakeHouseMenu pancakeHouseMenu;
    DinerMenu dinerMenu;

    Waitress waitress(pancakeHouseMenu, dinerMenu);
    waitress.printMenu(); // Imprime ambos menus

    /*
    PancakeHouseMenu pancakeHouse;
    DinerMenu dinerMenu;

    cout << GREEN << "\n-----------------Menu de PancakeHouse------------------------" << RESET << endl;
    pancakeHouse.prinMenu();
    cout << GREEN << "\n-----------------Menu de Diner-------------------------\n"
         << RESET << endl;
    dinerMenu.printMenu();
    */
    return 0;
}