#include "GumballMachine.h"

GumballMachine::GumballMachine(int count)
{
    this->count = count;
    if (count > 0)
    {
        state = No_Quarter;
    }
}
// Metodo para mostrar el estatus de la maquina

void GumballMachine::printStatus()
{
    using std::cout, std::endl;
    cout << "Mighty Gumball, Inc.\n"
         << "Java-enabled Standing Gumball Model #2004" << endl;
    cout << "Inventario: " << count << "gumballs" << endl;
    cout << "Estado: " << (count > 0 ? "La maquina esta esperando una moneda" : "La maquina esta vacia.....") << endl;
    cout << "-----------------------------------------------------" << endl;
}

// Metodo si una moneda es insertada
void GumballMachine::insertQuarter()
{
    using std::cout, std::endl;
    // Si una moneda ya fue insertada se lo decimos al cliente
    if (state == Has_Quarter)
    {
        cout << "No puedes insertar otro cuarter" << endl;
    }
    //
    else if (state == No_Quarter)
    {
        // En otro caso, aceptamos la moneda y cambiamos al estado "Ya tenemos una moneda"
        state = Has_Quarter;
        cout << "Insertaste un cuarter" << endl;
    }
    else if (state == Sold_Out)
    {
        // Si la maquina esta vacia devolvemos la moneda
        cout << "No puedes insertar un cuarter, la maquina se agoto" << endl;
    }
    else if (state == Sold)
    {
        // Si ya compro un chicle, el cliente necesita saber que debe esperar
        cout << "Por favor espere, ya te estamos dando un chicle" << endl;
    }
}

// Metodo si el cliente quiere remover una moneda
void GumballMachine::ejectQuarter()
{
    using std::cout, std::endl;
    // Si tenemos una moneda, se la devolvemos y pasamos al estado No_Quarter.
    if (state == Has_Quarter)
    {
        cout << "Regresa la moneda" << endl;
        state = No_Quarter;
    }
    // Si no hay moneda insertada no le podemos devolver una.
    else if (state == No_Quarter)
    {
        cout << "No has insertado una moneda" << endl;
    }
    // Si ya activo la palanca no le podemos devolver la moneda.
    else if (state == Sold)
    {
        cout << "Lo sentimos, ya has activado la palanca" << endl;
    }
}

// Metodo si el cliente activa la palanca

void GumballMachine::turnCrank()
{
    using std::cout, std::endl;
    if (state == Sold)
    {
        cout << "Activarla 2 veces no te dara otro chicle" << endl;
    }
    else if (state == No_Quarter)
    {
        cout << "Activaste la palanca pero no hay moneda" << endl;
    }
    else if (state == Sold_Out)
    {
        cout << "Activaste la palanca pero no hay chicles" << endl;
    }
    else if (state == Has_Quarter)
    {
        cout << "Has activado la palanca..." << endl;
        state = Sold;
        dispense();
    }
}

// Metodo para despachar

void GumballMachine::dispense()
{
    using std::cout, std::endl;
    if (state == Sold)
    {
        cout << "Un chicle caera por el espacio de la banda" << endl;
        count = count - 1;
        if (count == 0)
        {
            cout << "Oops, Nos quedamos sin chicles" << endl;
            state = Sold_Out;
        }
        else
        {
            state = No_Quarter;
        }
    }
    else if (state == No_Quarter)
    {
        cout << "Necesitas pagar primero pe" << endl;
    }
    else if (state == Sold_Out)
    {
        cout << "No hay chicles para despachar" << endl;
    }
    else if (state == Has_Quarter)
    {
        cout << "Necesitas activar la palanca" << endl;
    }
}