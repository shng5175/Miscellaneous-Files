/* CSCI 261 HW03: Rock, Paper, Scissors
*
* Author: Sherry Nguyen
*
*/

#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    char x, y;
    srand(static_cast<unsigned int>(time(0)));
    int randomNumber = rand();
    int a = randomNumber % 3;
    cout << "Welcome one and all to a round of Rock, Paper, Scissors! (Enter P, R or S)" << endl;
    cin >> x;
    if (a == 0)
    {
        y = 'r';
        if (x == 'p' || x == 'P')
            cout << "Player 1: Paper\nComputer: Rock\nPaper beats rock! You win!" << endl;
        else if (x == 'r' || x == 'R')
            cout << "Player 1: Rock\nComputer: Rock\nTie!" << endl;
        else if (x == 's' || x == 'S')
            cout << "Player 1: Scissors\nComputer: Rock\nRock beats siccors! Computer wins!" << endl;
    }
    else if (a == 1)
    {
        y = 'p';
        if (x == 'p' || x == 'P')
            cout << "Player 1: Paper\nComputer: Paper\nTie!" << endl;
        else if (x == 'r' || x == 'R')
            cout << "Player 1: Rock\nComputer: Paper\nPaper beats rock! Computer wins!" << endl;
        else if (x == 's' || x == 'S')
            cout << "Player 1: Scissors\nComputer: Paper\nScissors beats paper! You win!" << endl;
    }
    else
    {
        y = 's';
        if (x == 'p' || x == 'P')
            cout << "Player 1: Paper\nComputer: Scissors\nScissors beats paper! Computer wins!" << endl;
        else if (x == 'r' || x == 'R')
            cout << "Player 1: Rock\nComputer: Scissors\nRock beats scissors! You win!" << endl;
        else if (x == 's' || x == 'S')
            cout << "Player 1: Scissors\nComputer: Scissors\nTie!" << endl;
    }
    return 0;
}