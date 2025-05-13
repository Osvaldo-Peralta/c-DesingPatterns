#ifndef DINER_MENU_ITERATOR_H
#define DINER_MENU_ITERATOR_H

#include "Iterator.h"
#include "MenuItem.h"

class DinerMenuIterator : public Iterator
{
private:
    MenuItem **items; // Arreglo de punteros a MenuItem
    int position;
    int size; // Cantidad de elementos válidos en el menú

public:
    DinerMenuIterator(MenuItem *items[], int size) : items(items), position(0), size(size) {}

    bool hasNext() const override
    {
        return (position < size) && (items[position] != nullptr);
    }

    MenuItem *next() override
    {
        return hasNext() ? items[position++] : nullptr;
    }
};

#endif // DINER_MENU_ITERATOR_H