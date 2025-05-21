#ifndef CAFEMENU_H
#define CAFEMENU_H

#include "Menu.h"
#include <map>
#include <string>

class CafeMenu : public Menu
{
private:
    std::map<std::string, std::shared_ptr<MenuItem>> items;

public:
    CafeMenu();
    void addItem(std::shared_ptr<MenuItem> item) override;
    void print() const override;
};

#endif