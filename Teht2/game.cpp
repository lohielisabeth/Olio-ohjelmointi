#include "game.h"

Game::Game(int value)
{   srand(time(NULL));
    maxNumber = value;
    cout<<maxNumber<<endl;
    cout<<"GAME CONSTRUCTOR : object initialized with "<<maxNumber<<" as maxinum value"<<endl;
    randomNumber = rand() %maxNumber;
}

Game::~Game()
{
    cout<<"GAME DESTRUCTOR: object cleared from stack memory"<<endl;
}

void Game::printGameResult()
{
    cout<<"You guessed the right anwser = "<<randomNumber<<" with "<<numOfGuesses<<" guesses"<<endl;
}



void Game::play(){

    cout<<"Play"<<endl;
    while(randomNumber != playerGuess) {
    cout<<"Give your guess between 1-" <<maxNumber<<endl;
        cin>>playerGuess;

        if(playerGuess == randomNumber) {
            numOfGuesses++;
            cout<<"Your guess is right = "<<randomNumber<<endl;
            printGameResult();
        }
         else if(playerGuess < randomNumber){
            cout<<"Your guess is smaller than the answer"<<endl;
         }
        else if(playerGuess > randomNumber){
            cout<<"Your answer is bigger than the answer"<<endl;
        }
         numOfGuesses++;

}
}
