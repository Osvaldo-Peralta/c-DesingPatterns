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
    DinerMenuIterator(MenuItem *items[], int size);
    bool hasNext() const override;

    MenuItem *next() override;
};

#endif