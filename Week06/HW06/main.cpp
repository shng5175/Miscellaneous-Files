/* CSCI 261 HW06: Naive Blackjack
*
* Author: Sherry Nguyen
*
*/

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

struct Card 
{
    int rank;
    string suit;
};

Card RandomCard();
string CardSuit();

int main()
{
    string x = "Yes";
    Card Dealer;
    Card Player;
    int dealer = 0;
    int player = 0;
    int room = 1;
    while(x != "No")
    { 
        switch (room)
        {
        case 1:
            Dealer = RandomCard();
            cout << "Dealer shows the " << Dealer.rank << " of " << Dealer.suit << endl;
            dealer += Dealer.rank;
            cout << "Dealer total is: " << dealer << endl;
            room = 2;
            break;
        case 2:
            Player = RandomCard();
            cout << "You are dealt the " << Player.rank << " of " << Player.suit << endl;
            player += Player.rank;
            cout << "Your total is: " << player << endl;
            if (player <= 21)
                room = 3;
            else
                room = 4;
            break;
        case 3:
            cout << "Do you want to 'Hit' or 'Stand'?" << endl;
            cin >> x;
            if (x == "Hit")
                room = 2;
            else if (x == "Stand")
                room = 4;
            break;
        case 4:
            if (player <= 21 && dealer < 17)
                room = 5;
            else if (player > 21)
            {
                cout << "You busted! You lose" << endl;
                room = 7;
            }
            else if (dealer > 21)
            {
                cout << "Dealer busted! You win" << endl;
                room = 7;
            }
            else
                room = 6;
            break;
        case 5:
            Dealer = RandomCard();
            cout << "Dealer is dealt the " << Dealer.rank << " of " << Dealer.suit << endl;
            dealer += Dealer.rank;
            cout << "Dealer total is: " << dealer << endl;
            if (dealer > 21)
            {
                cout << "Dealer busted! You win" << endl;
                room = 7;
            }
            else
                room = 4;
            break;
        case 6:
            cout << "Your total is: " << player << endl << "Dealer total is: " << dealer << endl;
            if (player > dealer)
                cout << "You win" << endl;
            else if (player < dealer)
                cout << "You lose" << endl;
            else if (player == dealer)
                cout << "Tie" << endl;
            room = 7;
            break;
        case 7:
            cout << "Would you like to play again? 'Yes', 'No'" << endl;
            cin >> x;
            if (x == "Yes")
            {
                dealer = player = 0;
                room = 1;
            }
            else if (x == "No")
                return 0;
            break;
        }
    }
}



Card RandomCard()
{
    srand(static_cast<unsigned int>(time(NULL)));
    int randomNumber = rand();
    Card NewCard;
    NewCard.rank = randomNumber % 9 + 1;
    NewCard.suit = CardSuit();
    return NewCard;
}

string CardSuit()
{
    srand(static_cast<unsigned int>(time(NULL)));
    int randomNumber = rand();
    int y = randomNumber % 3 + 1;
        switch (y) {
        case 0:
            return "Hearts";
            break;
        case 1:
            return "Clubs";
            break;
        case 2:
            return "Diamonds";
            break;
        case 3:
            return "Spades";
            break;
    }
}