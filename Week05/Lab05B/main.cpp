/* CSCI 261 Lab05B: Pass By Reference
*
* Author: Sherry Nguyen
*
*/

#include <iostream>
using namespace std;

double & Hamburger(double i)
{
    i = i + 4.99;
    return i;
}

double AddHamburger(double j)
{
    j = j + 4.99;
    return j;
}

double & SoftDrink(double i)
{
    i = i + 4.99;
    return i;
}

double AddSoftDrink(double j)
{
    j = j + 4.99;
    return j;
}

int main()
{
    double bill = 0;
    int x = 1;
    int y;
    cout << "Welcome to the retaurant of CSM!" << endl
        << "We offer the following items:" << endl
        << "[1] Veggie Hamburger: 4.99" << endl
        << "[2] Soft Drink:       1.99" << endl;

    while(x != 0)
    {
        cout << "What would you like to order? (press [0] to leave)" << endl;
        cin >> x;
        if (x == 1)
        {
            cout << "Your current tab is $" << bill << endl
                << "If you were to buy a Veggie Hamburger, your tab would become $"<< Hamburger(bill)
                << endl << "Would you like to purchase it? ([1] = yes, [2] = no)" << endl;
            cin >> y;
            if (y == 1)
            {
                bill = AddHamburger(bill);
            }

        }
        else if (x == 2)
        {
            cout << "Your current tab is $" << bill << endl
                << "If you were to buy a Soft Drink, your tab would become $" <<SoftDrink(bill) 
               << endl << "Would you like to purchase it? ([1] = yes, [2] = no)" << endl;
            cin >> y;
            if (y == 1)
            {
                bill = AddSoftDrink(bill);
            }
        }
    }

    cout << "Your bill comes to a total of $" << bill << endl
        << "Have a nice day!" << endl;

    return 0;
}