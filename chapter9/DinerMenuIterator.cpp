#include "DinerMenuIterator.h"

DinerMenuIterator::DinerMenuIterator(MenuItem *items[], int size) : items(items), position(0), size(size) {}
bool DinerMenuIterator::hasNext() const
{
    return (position < size) && (items[position] != nullptr);
}

MenuItem *DinerMenuIterator::next()
{
    return hasNext() ? items[position++] : nullptr;
}
