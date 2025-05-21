#ifndef PANCAKEHOUSEMENU_H
#define PANCAKEHOUSEMENU_H

#include <vector>
#include "Menu.h"

class PancakeHouseMenu : public Menu
{
private:
    std::vector<std::shared_ptr<MenuItem>> items;

public:
    PancakeHouseMenu();
    void addItem(std::shared_ptr<MenuItem> item) override;
    void print() const override;
};

#endif