#ifndef HASCUARTERSTATE_H
#define HASQUARTERSTATE_H

#include "State.h"
#include "GumballMachine.h"
#include <iostream>

class HasQuarterState : public State
{
private:
    GumballMachine &machine;

public:
    explicit HasQuarterState(GumballMachine &machine) : machine(machine) {}
    ~HasQuarterState() override = default;

    void insertQuarter() override
    {
        std::cout << "No puedes insertar otra moneda" << std::endl;
    }

    void ejectQuarter() override
    {
        std::cout << "Moneda devuelta" << std::endl;
        machine.setState(machine.getNoQuarterState());
    }
    void turnCrank() override
    {
        std::cout << "Giraste la manivela" << std::endl;
        machine.setState(machine.getSoldState());
    }

    void dispense() override
    {
        std::cout << "No se despacha ningun chicle" << std::endl;
    }

    const char *getName() const override
    {
        return "Moneda Insertada";
    }
};
#endif