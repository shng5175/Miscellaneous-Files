/* CSCI 261 Lab03A: Triangle Classifier
*
* Author: Sherry Nguyen
*
*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double a, b, c;
    const double TOLERANCE = 0.0001;
    cout << "Please enter three values for the lengths of each side of a triangle." << endl;
    cin >> a >> b >> c;
    if (a < (b + c) && b < (a + c) && c < (b + a))
    {
        if (a > b && a > c)
        {
            if (abs(pow(b, 2) + pow(c, 2) - pow(a, 2)) <= TOLERANCE)
                cout << "The triangle is a right triangle" << endl;
            else if (pow(b, 2) + pow(c, 2) > pow(a, 2))
                cout << "The triangle is an acute triangle" << endl;
            else if (pow(b, 2) + pow(c, 2) < pow(a, 2))
                cout << "The triangle is an obtuse triangle" << endl;
        }
        else if (b > a && b > c)
        {
            if (abs(pow(a, 2) + pow(c, 2) - pow(b, 2)) <= TOLERANCE)
                cout << "The triangle is a right triangle" << endl;
            else if (pow(a, 2) + pow(c, 2) > pow(b, 2))
                cout << "The triangle is an acute triangle" << endl;
            else if (pow(a, 2) + pow(c, 2) < pow(b, 2))
                cout << "The triangle is an obtuse triangle" << endl;
        }
        else if (c > b && c > a)
        {
            if (abs(pow(b, 2) + pow(a, 2) - pow(c, 2)) <= TOLERANCE)
                cout << "The triangle is a right triangle" << endl;
            else if (pow(b, 2) + pow(a, 2) > pow(c, 2))
                cout << "The triangle is an acute triangle" << endl;
            else if (pow(b, 2) + pow(a, 2) < pow(c, 2))
                cout << "The triangle is an obtuse triangle" << endl;
        }
        
    }
    else
        cout << "The three numbers you have entered do not make a triangle" << endl;

    return 0;
}