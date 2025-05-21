/*
template <typename PancakeIter, typename DinerIter, typename CafeIter>
class Waitress
{
private:
    PancakeIter pancakeBegin;
    PancakeIter pancakeEnd;
    DinerIter dinerBegin;
    DinerIter dinerEnd;
    CafeIter cafeBegin;
    CafeIter cafeEnd;

    // Función genérica para imprimir cualquier menú
    template <typename Iter>
    void printMenu(Iter begin, Iter end)
    {
        for (auto it = begin; it != end; ++it)
        {
            // Usamos el trait con el tipo correcto
            const MenuItem &item = MenuTraits<decltype(*it)>::getItem(*it);
            cout << item.getName() << ", $" << item.getPrecio()
                 << " -- " << item.getDescription()
                 << endl;
        }
    }

public:
    Waitress(PancakeIter pBegin, PancakeIter pEnd,
             DinerIter dBegin, DinerIter dEnd,
             CafeIter cBegin = {}, CafeIter cEnd = {})
        : pancakeBegin(pBegin), pancakeEnd(pEnd),
          dinerBegin(dBegin), dinerEnd(dEnd),
          cafeBegin(cBegin), cafeEnd(cEnd) {}

    void printAllMenus()
    {
        cout << "MENU\n----\nBREAKFAST" << endl;
        printMenu(pancakeBegin, pancakeEnd);

        cout << "\nLUNCH" << endl;
        printMenu(dinerBegin, dinerEnd);

        cout << "\nDINNER" << endl;
        printMenu(cafeBegin, cafeEnd);
    }
};
*/

#include <vector>
#include <memory>
#include "Menu.h"

class Waitress
{
private:
    std::vector<std::shared_ptr<Menu>> menus;

public:
    Waitress(std::vector<std::shared_ptr<Menu>> menus);
    void printAllMenus();
};