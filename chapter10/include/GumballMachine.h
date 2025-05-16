#ifndef GUMBALLMACHINE_H
#define GUMBALLMACHINE_H

#include <memory>
#include "State.h"

class GumballMachine
{
private:
    State *currentState; // Estado actual
    int count = 0;       // Inventario de chicles

    // Estados posibles
    std::unique_ptr<State> soldOutState;
    std::unique_ptr<State> noQuarterState;
    std::unique_ptr<State> hasQuarterState;
    std::unique_ptr<State> soldState;

public:
    GumballMachine(int numberGumballs);

    void setState(State &newState);

    // Acciones delegadas al estado actual
    void insertQuarter() { currentState->insertQuarter(); }
    void ejectQuarter() { currentState->ejectQuarter(); }
    void turnCrank()
    {
        currentState->turnCrank();
        currentState->dispense();
    }

    // Getters (const correctos)
    State &getNoQuarterState() { return *noQuarterState; }
    State &getHasQuarterState() { return *hasQuarterState; }
    State &getSoldOutState() { return *soldOutState; }
    State &getSoldState() { return *soldState; }

    // Versiones const para cuando se necesiten
    const State &getNoQuarterState() const { return *noQuarterState; }
    const State &getHasQuarterState() const { return *hasQuarterState; }
    const State &getSoldOutState() const { return *soldOutState; }
    const State &getSoldState() const { return *soldState; }
    // Metodos de utilidad
    void releaseBall();
    int getCount() const { return count; }
    void printStatus() const; // Metodo para mostrar el estado de la maquina
};

#endif