#ifndef DINERMENU_H
#define DINERMENU_H

#include "Menu.h"
#include <array>
#include <memory>

class DinerMenu : public Menu
{
private:
    static const int MAX_ITEMS = 6;
    std::array<std::shared_ptr<MenuItem>, MAX_ITEMS> items;
    int numberOfItems = 0;

public:
    DinerMenu();
    void addItem(std::shared_ptr<MenuItem> item) override;
    void print() const override;
};

#endif