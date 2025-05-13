#include "DinerMenu.h"

DinerMenu::DinerMenu()
{
    for (int i = 0; i < MAX_ITEMS; i++)
    {
        menuItems[i] = nullptr; // Inicializamos todos los punteros a nullptr
    }

    addItem("Vegetarian BLT", "(Fakin') Bacon with lettuce & tomato on whole wheat", true, 2.99);
    addItem("BLT", "Bacon with lettuce & tomato on whole wheat", false, 2.99);
    addItem("Soup of the day", "Soup of the day, with a side of potato salad", false, 3.29);
    addItem("Hotdog", "A hot dog, with sauerkraut, relish, onions, topped with cheese", false, 3.05);
    addItem("Steamed Veggies and Brown Rice", "Steamed vegetables over brown rice", true, 39.9);
    addItem("Pasta", "Spaghetti with marinara sauce, and a slice of sourdough bread", false, 3.89);
}

DinerMenu::~DinerMenu()
{
    for (int i = 0; i < numberOfItems; i++)
    {
        if (menuItems[i] != nullptr)
        { // Verificamos que no sea nullptr antes de eliminar
            delete menuItems[i];
            menuItems[i] = nullptr; // Evitar accesos posteriores a memoria liberada
        }
    }
}

void DinerMenu::addItem(string name, string description, bool isVegetarian, double precio)
{
    if (numberOfItems >= MAX_ITEMS)
    {
        cerr << "Lo sentimos, el menu esta lleno" << endl;
    }
    else
    {
        menuItems[numberOfItems] = new MenuItem(name, description, isVegetarian, precio);
        numberOfItems++;
    }
}

Iterator *DinerMenu::createIterator() const
{
    return new DinerMenuIterator((MenuItem **)menuItems, numberOfItems);
}

// Recorremos y mostramos el menu ahora implementanto createIterator
void DinerMenu::printMenu() const
{
    Iterator *it = createIterator();
    while (it->hasNext())
    {
        MenuItem *item = it->next();
        if (item)
        {
            cout << "Nombre: " << item->getName() << endl;
            cout << "Descripción: " << item->getDescription() << endl;
            cout << "Es Vegetariano: " << (item->isVegetarian() ? "Sí" : "No") << endl;
            cout << "Precio: $" << item->getPrecio() << endl;
            cout << "------------------------------" << endl;
        }
    }
    delete it; // Liberamos memoria
}