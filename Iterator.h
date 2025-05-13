#ifndef ITERATOT_H
#define ITERATOT_H

#include "MenuItem.h"

class Iterator
{
public:
    virtual ~Iterator() = default;
    virtual bool hasNext() const = 0; // Método abstracto
    virtual MenuItem *next() = 0;     // Método abstracto
};

#endif