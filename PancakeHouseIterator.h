#ifndef PANCAKEHOUSEITERATOR_H
#define PANCAKEHOUSEITERATOR_H

#include "Iterator.h"
#include "MenuItem.h"
#include <vector>

class PancakeHouseIterator : public Iterator
{
private:
    vector<MenuItem> &menuItems; // Almacenar referencia
    size_t position;

public:
    explicit PancakeHouseIterator(vector<MenuItem> &items)
        : menuItems(items), position(0) {}

    bool hasNext() const override
    {
        return position < menuItems.size();
    }

    MenuItem *next() override
    {
        if (hasNext())
        {
            return &menuItems[position++];
        }
        return nullptr;
    }
};

#endif