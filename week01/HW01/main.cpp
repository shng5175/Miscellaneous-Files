/* CSCI 261 Homework 01: Hello World and ASCII Art
*
* Author: Sherry Nguyen
*
* More complete description here...
*/

// The include section adds extra definitions from the C++ standard library.
#include <iostream> // For cin, cout, etc.
#include <string>   // For string class

// We will (most of the time) use the standard library namespace in our programs.
using namespace std;

// Define any constants or global variables below this comment.

// Must have a function named "main", which is the starting point of a C++ program.
int main() {

    /******** INSERT YOUR CODE BELOW HERE ********/

    int age = 18;
    int siblings = 2;
    int food = 7;
    cout << "     \1\1\1\1\1\1\1\1\1\1\1\n"
        << "   \1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\n"
        << "  \1\1\1\2\2\1\1\1\1\1\1\1\2\2\1\1\1\n"
        << " \1\1\1\2\2\2\2\1\1\1\1\1\2\2\2\2\1\1\1\n"
        << "\1\1\1\1\2\2\2\2\1\1\1\1\1\2\2\2\2\1\1\1\1\n"
        << "\1\1\1\1\1\2\2\1\1\1\2\1\1\1\2\2\1\1\1\1\1\n"
        << "\1\1\1\1\1\1\1\1\1\2\2\2\1\1\1\1\1\1\1\1\1\n"
        << "\1\1\1\1\1\1\1\1\1\2\2\2\1\1\1\1\1\1\1\1\1\n"
        << " \1\1\1\1\1\2\2\1\1\1\1\1\2\2\1\1\1\1\1\n"
        << "  \1\1\1\1\1\2\2\2\2\2\2\2\1\1\1\1\1\n"
        << "   \1\1\1\1\1\1\2\2\2\1\1\1\1\1\1\n"
        << "     \1\1\1\1\1\1\1\1\1\1\1\n"
        << "Hello World!!\nI am " << age << " years old\nI have "
        << siblings << " older sisters\nI ate "
        << food << " muffins yesterday\nGood-bye!!\n";

    /******** INSERT YOUR CODE ABOVE HERE ********/

    return 0; // signals the operating system that our program ended OK.
}