#include "GuessNumberGame.h"

void GuessNumberGame::startGame(void)
{
    int guess;
    std::cout << "欢迎来到猜数字游戏，这是一个1-" << maxNumber << "之间的数字，可以猜猜看" << "\n";
    do
    {
        std::cout << "请输入：";
        std::cin >> guess;
        attempts++;
        if(guess < secretNumber)
        {
            std::cout << "小了，再试一次" << "\n";
        }
        else if(guess > secretNumber)
        {
            std::cout << "大了，再试一次" << "\n";
        }
        else
        {
            std::cout << "恭喜你，猜对了！\n一共用了" << attempts << "次" << "\n";
        }
    } while(guess != secretNumber);
}