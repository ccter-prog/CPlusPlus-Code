#ifndef __TickeMachine_H__
#define __TickeMachine_H__

class TicketMachine
{
    public:
        TicketMachine();
        virtual ~TicketMachine();
        void showPrompt();
        void insertMoney(int money);
        void showBalance();
        void printTicket();
        void showTotal();
    private:
        const int PRICE;
        int balance;
        int total;
        int control;
};

#endif