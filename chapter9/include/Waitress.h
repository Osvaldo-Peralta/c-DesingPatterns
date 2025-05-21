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