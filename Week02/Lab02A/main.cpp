/* CSCI 261 Lab 02A: PRISM VOLUME
*
* Author: Sherry Nguyen
*
* Add more complete description here...
*/

// The include section adds extra definitions from the C++ standard library.
#include <iostream> // For cin, cout, etc.

// We will (most of the time) use the standard library namespace in our programs.
using namespace std;

// Must have a function named "main", which is the starting point of a C++ program.
int main() {

    /******** MODIFY OR INSERT CODE BELOW HERE ********/

    int length, width, height, volume;
    cout << " Please input 3 values for length, width, and height" << endl;
    cin >> length >> width >> height;
    // Volume of a box is length times width times height. 
    volume = length * width * height;
    cout << "The volume of the prism is: " << volume << endl;

    /******** MODIFY OR INSERT CODE ABOVE HERE ********/

    return 0; // signals the operating system that our program ended OK.

}
