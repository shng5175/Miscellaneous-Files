/* CSCI 261 LAB02B: Variable Practice
* Author: Sherry Nguyen
*
* Add more complete description here...
*/

#include <iostream>   // For cin, cout, etc.
using namespace std;  // For standard namespace 

int main() {

    /******** MODIFY OR INSERT CODE BELOW HERE ********/

    const double PI = 3.14159;
    double radius, area;

    cout << "Enter the radius of your circle" << endl;
    cin >> radius;
    area = (radius * radius) * PI;
    cout << "The area of circle with radius " << radius << " is " << area << endl;

    /******** MODIFY OR INSERT CODE ABOVE HERE ********/

    return 0; // program ended fine 

}