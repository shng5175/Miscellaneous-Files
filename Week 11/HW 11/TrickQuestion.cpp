/* CSCI261 HW 11
* Author: Sherry Nguyen
*/

#include "TrickQuestion.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

TrickQuestion::TrickQuestion() 
{
    srand(static_cast<unsigned int>(time(0)));
    int thing = rand();
    int x = thing % 2 + 1;
    if (x == 1) 
    {
        Question = "A gingerbread man sits in a gingerbread house.\nIs the house made of flesh or is he made of house? \n 1 - The house is made of flesh \n 2 - He is made of house \n 3 - He screams for he does not know \n 4 - They are both made of gingerbread";
        Answer = 4;
    }
    else if (x == 2)
    {
        Question = "If you divide 30 in half and add 10, what do you get? \n 1 - 25 \n 2 - 70 \n 3 - 21";
        Answer = 2;
    }

    prize = "thing!";
}

void TrickQuestion::Start()
{
    cout << "Hello there, I have prepared a random question for you." << endl
        << "Answer Correctly and you will get a prize" << endl;
}

void TrickQuestion::RandomQuestion() 
{
    cout << Question << endl;
    cin >> Guess;
}

bool TrickQuestion::Check() 
{
    if (Guess == Answer) 
        yes = true;
    else 
        yes = false;
    return yes;
}

void TrickQuestion::Prize(TrickQuestion TrickQuestion) 
{
    if (yes == true)
    {
        cout << "Congratulations! You have won a "<<prize       
            << " Use it wisely!" << endl;
    }
    else 
        cout << "How sad, you have lost. No prize for you" << endl;
}