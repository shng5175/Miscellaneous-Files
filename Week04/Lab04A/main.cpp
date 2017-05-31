/* CSCI 261 Lab 04A: Triangle Repl
*
* Author: Sherry Nguyen
*
*/

#include <iostream>
using namespace std;

int main()
{
    bool valid = 0;
    double a, b, c;
    while (valid == 0)
    {
        cout << "Please input three values" << endl;
        cin >> a >> b >> c;
        if (a <= 0 || b <= 0 || c <= 0)
            valid = 0;
        else if (a > (b + c) || b > (a + c) || c > (b + a))
            valid = 0;
        else
        {
            cout << "Woohoo - input is valid!" << endl;
            valid = 1;
        }
    }
    return 0;
}