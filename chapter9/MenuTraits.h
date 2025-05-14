#ifndef MENUTRAITS_H
#define MENUTRAITS_H

#include <map>
#include "MenuItem.h"

/*
- En un caso general se asume que el elemento es de tipo MenuItem
+ Caso general: remueve referencias y cv-qualifiers
*/

template <typename T>
struct MenuTraits
{
    using Type = typename std::remove_reference<
        typename std::remove_cv<T>::type>::type;

    static const MenuItem &getItem(const T &element)
    {
        return MenuTraits<Type>::getItemImpl(element);
    }
};

// Especialización para MenuItem (caso base)
template <>
struct MenuTraits<MenuItem>
{
    static const MenuItem &getItemImpl(const MenuItem &item)
    {
        return item;
    }
};

// Especialización para std::pair<const std::string, MenuItem>
template <>
struct MenuTraits<std::pair<const std::string, MenuItem>>
{
    static const MenuItem &getItemImpl(const std::pair<const std::string, MenuItem> &element)
    {
        return element.second;
    }
};

// Especialización para punteros (MenuItem*)
template <>
struct MenuTraits<MenuItem *>
{
    static const MenuItem &getItemImpl(MenuItem *element)
    {
        return *element;
    }
};

#endif