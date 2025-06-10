#include "TickeMachine.h"
#include <iostream>
using namespace std;

int main(void)
{
    TicketMachine tm;
    int money;
    TicketMachine();
    cout << "请输入钱：";
    cin >> money;
    tm.insertMoney(money);
    tm.showBalance();
    tm.showPrompt();
    return 0;
}