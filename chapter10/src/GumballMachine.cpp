#include "GumballMachine.h"
#include "NoQuarterState.h"
#include "HasQuarterState.h"
#include "SoldState.h"
#include "SoldOutState.h"
#include "WinnerState.h"

GumballMachine::GumballMachine(int numberOfGumballs) : gen(rd()), count(numberOfGumballs), distribucion(1, 10)
{
    // Inicializamos todos los estados

    noQuarterState = std::make_unique<NoQuarterState>(*this);
    hasQuarterState = std::make_unique<HasQuarterState>(*this);
    soldOutState = std::make_unique<SoldOutState>(*this);
    soldState = std::make_unique<SoldState>(*this);
    winnerState = std::make_unique<WinnerState>(*this);

    // Estado actual
    currentState = (count > 0) ? noQuarterState.get() : soldOutState.get();
}

void GumballMachine::setState(State &newState)
{
    currentState = &newState;
}

void GumballMachine::releaseBall()
{
    if (count > 0)
    {
        std::cout << "Un chicle sale rodando...." << std::endl;
        count--;
    }
}

int GumballMachine::generateRandomNumber()
{
    return distribucion(gen);
}

void GumballMachine::printStatus() const
{
    using std::cout, std::endl;

    cout << "Mighty Gumball, Inc.\n"
         << "C++-enabled Standing Gumball Model #2004" << endl;
    cout << "Inventario: " << GumballMachine::getCount() << " gumballs" << endl;
    cout << "Estado: " << currentState->getName() << endl;
    cout << "----------------------------" << endl;
}
