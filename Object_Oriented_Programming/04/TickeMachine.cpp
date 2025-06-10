#include "TickeMachine.h"
#include <iostream>
using namespace std;

TicketMachine::TicketMachine() : PRICE(2), control(1)
{}

TicketMachine::~TicketMachine()
{}

void TicketMachine::showPrompt()
{
    if(control == 0)
    {
        cout << "something." << "\n";
    }
    else
    {
        cout << "Error!" << "\n";
    }
}

void TicketMachine::insertMoney(int money)
{
    if(money >= PRICE)
    {
        balance = money - PRICE;
        control = 0;
    }
    else
    {
        cout << "钱不够！" << "\n";
    }
}

void TicketMachine::showBalance()
{
    if(control == 0)
    {
        cout << "剩余" << balance << "\n";
    }
}