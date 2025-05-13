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
    explicit PancakeHouseIterator(std::vector<MenuItem> &items);
    bool hasNext() const override;
    MenuItem *next() override;
};

#endif