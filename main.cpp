#include <iostream>
#include <cstdlib>
#include <time.h>
#include <windows.h>

using namespace std;

int main()
{
    srand(time(0));
    int userChoice;
    int wins = 0;
    int losses = 0;
    int ties = 0;
    char playAgain;

    do{

        int min = 1, max = 3;
        int computerPlay = rand()%(max-min+1)+min;

        system("cls");
        cout << "Welcome to the Rock Paper Scissors Game!" << endl;
        cout << "========================================" << endl;

        cout << "Wins: " << wins << ", Losses: " << losses << ", Ties: "  << ties << endl;

        cout << "1. Rock" << endl;
        cout << "2. Paper" << endl;
        cout << "3. Scissors" << endl;

         do
        {
            if(!cin.good())
            {
                cin.clear();
                string trash;
                cin >> trash;
            }
            cout << "What is your choice: ";
            cin >> userChoice;
        }while(userChoice < 1 || userChoice > 3 || !cin.good());

        if(userChoice == 1)
            cout << "You chose ROCK!" << endl;
        else if(userChoice == 2)
            cout << "You chose PAPER!" << endl;
        else if(userChoice == 3)
            cout << "You chose SCISSORS!" << endl;

        if(computerPlay == 1)
            cout << "The Computer chose ROCK!" << endl;
        else if(computerPlay == 2)
            cout << "The Computer chose PAPER!" << endl;
        else if(computerPlay == 3)
            cout << "The Computer chose SCISSORS!" << endl;

        if(userChoice == computerPlay)
        {
            cout << "It's a tie." << endl;
            ties++;
        }
        else if(userChoice == 1 && computerPlay == 2)
        {
            cout << "You Lost." << endl;
            losses++;
        }
        else if(userChoice == 1 && computerPlay == 3)
        {
            cout << "You Won!" << endl;
            wins++;
        }
        else if(userChoice == 2 && computerPlay == 1)
        {
            cout << "You Won!" << endl;
            wins++;
        }
        else if(userChoice == 2 && computerPlay == 3)
        {
            cout << "You Lost." << endl;
            losses++;
        }
        else if(userChoice == 3 && computerPlay == 1)
        {
            cout << "You Lost." << endl;
            losses++;
        }
        else if(userChoice == 3 && computerPlay == 2)
        {
            cout << "You Won!" << endl;
            wins++;
        }

        cout << "Would you like to play again (y/n): ";
        cin >> playAgain;
    }while(playAgain == 'y' || playAgain == 'Y');

    return 0;
}

