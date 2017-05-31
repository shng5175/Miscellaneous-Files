/* CSCI 261 Lab05B: myRand Function
*
* Author: Sherry Nguyen
*
*/

#include <iostream>
using namespace std;

int MyRand(int theSeed)
{
    return (theSeed % 3);
}

int main()
{
    int x, y;
    cout << "Please enter a number" << endl;
    cin >> x;
    y = MyRand(x);
    if (y == 0)
        cout << "Rock" << endl;
    else if (y == 1)
        cout << "Paper" << endl;
    else
        cout << "Scissors" << endl;
    return 0;
}