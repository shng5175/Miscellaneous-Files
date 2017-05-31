/* CSCI 261 HW07: Naive Blackjack
*
* Author: Sherry Nguyen
*
*/

#include <iostream>
#include <string>
#include <ctime>
using namespace std;

void printCard(string cards[], int a);
void ShuffleDeck(string cards[], int a);
void GetNextCard(string cards[], int a, int index);

int main()
{
    string x = "Yes";
    int dealer = 0;
    int player = 0;
	const int SIZE = 52;
    string card[SIZE];
	int currentCard = 0;
    for (int i = 0; i < SIZE; i++)
    {
        if (i <= 3)
            card[i] = "1";
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
            card[i] = "11";
        else if (i > 43 & i <= 47)
            card[i] = "12";
        else if (i > 47 & i <= 51)
            card[i] = "13";
        if (i % 4 == 0)
            card[i].append(" of Hearts");
        else if (i % 4 == 1)
            card[i].append(" of Diamonds");
        else if (i % 4 == 2)
            card[i].append(" of Clubs");
        else if (i % 4 == 3)
            card[i].append(" of Spades");
       // printCard(card, i);
    }
	ShuffleDeck(card, SIZE);
    while(x != "No")
    { 
		int currentcard = 0;
		cout<<"Dealer shows the ";
		GetNextCard(card, SIZE, currentcard);
		currentcard++;
		cout<<endl<<"You are dealt the ";
		GetNextCard(card, SIZE, currentcard);
		return 0;
    }
}

void printCard(string cards[], int a)
{
	if (cards[a].at(0) == '1' && cards[a].at(1) == ' ')
		cards[a].replace(0, 1, "Ace");
	else if (cards[a].at(0) == '1' && cards[a].at(1) == '1')
		cards[a].replace(0, 2, "Jack");
	else if (cards[a].at(0) == '1' && cards[a].at(1) == '2')
		cards[a].replace(0, 2, "Queen");
	else if (cards[a].at(0) == '1' && cards[a].at(1) == '3')
		cards[a].replace(0, 2, "King");
    cout << cards[a] << endl;
}

void ShuffleDeck(string cards[], int a)
{
	for(int i = 0; i < 9898; i++)
	{	
		srand(time(0)+i);
		int randomNumber = rand();
		int x = (randomNumber % a);	
		int y = ((randomNumber - x) % a);	
		string q[1];	
		q[0] = cards[y];	
		cards[y] = cards[x];
		cards[x] = q[0];
	}
}

void GetNextCard(string cards[], int a, int index)
{
	cout<<cards[index];
}