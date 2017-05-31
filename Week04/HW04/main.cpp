/* CSCI 261 HW04: Number Guessing Game
*
* Author: Sherry Nguyen
*
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() 
{
    int i;
    int tries = 0;
    srand(static_cast<unsigned int>(time(0)));
    int randomNumber = rand();
    int x = randomNumber % 100 + 1;
    cout << "Hold onto your pants, we're about to play guess-the-numbah!" << endl;
    do
    {
        cout << "Pick a number between 0 and 100: ";
        cin >> i;
        if (i < 0 || i > 100)
            cout << "That is not a valid answer, try again" << endl;
        else if (i < x)
        {
            cout << "Too low!";
            if ((x - i) <= 2)
                cout << "Oooh you're close! " << endl;
            else if ((x - i) >= 20)
                cout << "Not even close!" << endl;
            else
                cout << endl;
        }
        else if (i > x)
        {
            cout << "Too high!";
            if ((i - x) <= 2)
                cout << "Oooh you're close! " << endl;
            else if ((i - x) >= 20)
                cout << "Not even close!" << endl;
            else
                cout << endl;
        }
        tries = tries + 1;
    } while (i != x);

    cout << "That's right! You won the game in " << tries << " tries!" << endl;
}