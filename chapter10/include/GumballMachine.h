#ifndef GUMBALLMACHINE_H
#define GUMBALLMACHINE_H

#include <iostream>

class GumballMachine
{
private:
    static const int Sold_Out = 0;
    static const int No_Quarter = 1;
    static const int Has_Quarter = 2;
    static const int Sold = 3;
    int state = Sold_Out;
    int count = 0;

public:
    GumballMachine(int count);
    void printStatus();
    void insertQuarter();
    void ejectQuarter();
    void turnCrank();
    void dispense();
};

#endif