/* CSCI 261 Lab 04B: Bottles
*
* Author: Sherry Nguyen
*
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int i, x;
    string j = " bottles";
    cout << "Hello, I'd like to sing you a song." << endl << "Enter a number: ";
    cin >> i;
    for (i; i > 0; i--)
    {
        cout << i << j << " of hand sanitizer on the wall," << endl
            << i << j << " of hand sanitizer!" << endl
            << "Take one down, pass it around," << endl;
        x = i - 1;
        if (x == 1)
            j = " bottle";
        else
            j = " bottles";
        cout << x << j << " of hand sanitizer on the wall!" << endl << endl;
    }

}