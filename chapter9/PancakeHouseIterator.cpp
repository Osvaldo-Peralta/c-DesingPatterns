#include "PancakeHouseIterator.h"

PancakeHouseIterator::PancakeHouseIterator(vector<MenuItem> &items)
    : menuItems(items), position(0) {}

bool PancakeHouseIterator::hasNext() const
{
    return position < menuItems.size();
}

MenuItem *PancakeHouseIterator::next()
{
    return hasNext() ? &menuItems[position++] : nullptr;
}