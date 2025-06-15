#ifndef __GuessNumberGame_H__
#define __GuessNumberGame_H__

#include <iostream>

class GuessNumberGame
{
    public:
        GuessNumberGame(int max);
        void startGame(void);
        virtual ~GuessNumberGame();
    private:
        int secretNumber;
        int attempts;
        int maxNumber;
        void generateSecretNumber(void);
};

inline GuessNumberGame::GuessNumberGame(int max) : maxNumber(max), attempts(0)
{
    generateSecretNumber();
}

inline void GuessNumberGame::generateSecretNumber(void)
{
    std::srand(static_cast<unsigned int>(std::time(nullptr)));
    secretNumber = std::rand() % maxNumber + 1;
}

inline GuessNumberGame::~GuessNumberGame()
{}

#endif