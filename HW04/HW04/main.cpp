#include <iostream>
#include <string>
#include <ctime>
using namespace std;

void printCard(string cards[], int a);

int main()
{
    const int SIZE = 52;
    string card[SIZE];
    for (int i = 0; i < SIZE; i++)
    {
        if (i <= 3)
            card[i] = 'Ace';
        else if (i > 3 & i <= 7)
            card[i] = "2";
        else if (i > 7 & i <= 11)
            card[i] = "3";
        else if (i > 11 & i <= 15)
            card[i] = "4";
        else if (i > 15 & i <= 19)
            card[i] = "5";
        else if (i > 19 & i <= 23)
            card[i] = "6";
        else if (i > 23 & i <= 27)
            card[i] = "7";
        else if (i > 27 & i <= 31)
            card[i] = "8";
        else if (i > 31 & i <= 35)
            card[i] = "9";
        else if (i > 35 & i <= 39)
            card[i] = "10";
        else if (i > 39 & i <= 43)
            card[i] = "Jack";
        else if (i > 43 & i <= 47)
            card[i] = "Queen";
        else if (i > 47 & i <= 51)
            card[i] = "King";
        if (i % 4 == 0)
            card[i].append(" of Hearts");
        else if (i % 4 == 1)
            card[i].append(" of Diamonds");
        else if (i % 4 == 2)
            card[i].append(" of Clubs");
        else if (i % 4 == 3)
            card[i].append(" of Spades");
        printCard(card, i);
    }

}

void printCard(string cards[], int a)
{
    cout << cards[a] << endl;
}
