/* CSCI 261 LAB02C - ASCII Fun
* Author: Sherry Nguyen
*
* Add more complete description here...
*/

#include <iostream>
using namespace std;

int main()
{
    char a, b, c, d, e;
    cout << "Please input 5 characters\n";
    cin >> a >> b >> c >> d >> e;
    a = toupper(a);//can also be done like this: a - 32
    b = toupper(b);//both pretty much do the same thing
    c = toupper(c);//but a - 32 outputs weird things when you don't type in a letter
    d = toupper(d);
    e = toupper(e);
    cout << a << b << c << d << e << endl << "Why are you yelling?\n";

    return 0;
}