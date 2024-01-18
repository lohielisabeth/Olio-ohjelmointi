#ifndef GAME_H
#define GAME_H
#include <iostream>

using namespace std;


class Game
{
    private:
        int maxNumber;
        int playerGuess;
        int numOfGuesses=0;
        void printGameResult();
        int randomNumber;

    public:
        Game(int value);
        ~Game();
        void play();
};

#endif // GAME_H
