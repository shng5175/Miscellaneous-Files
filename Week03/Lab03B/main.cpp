/* CSCI 261 Lab03B: Triangles Classifier + Options Menu
*
* Author: Sherry Nguyen
*
* The goal of this lab is to practice the use of if-else statements to classify triangles based on their sides.
* It will also teach you how to correctly compare double values for equality using a tolerance factor and
* the use of a menu of options using the switch statement.
*/

#include <iostream> // For cin, cout, etc.
#include <string>   // For string class
#include <cmath>    // For math functions

using namespace std;

const double TOLERANCE = 0.0001;

int main() {

    int option;               // to store the user's option (1-5)
    double inputA, inputB, inputC;  // to store user's side measurements
    double a, b, c;           // to copy side measurements such that c >= a and c >= b
    bool isTriangle = false;  // states whether a,b,c can be used as sides of a triangle

    do {  // we haven't learned loops yet, but you can guess what this do-while does 
          // show the menu 
        cout << "\n1. Enter measurements\n";
        cout << "2. Print measurements\n";
        cout << "3. Check triangle feasibility\n";
        cout << "4. Classify triangle\n";
        cout << "5. Exit\n";

        // read user's choice
        cout << "Please, choose an option: ";
        cin >> option;

        // ignore option if not 1-5
        if (option < 1 || option > 5) {
            cout << "Invalid option!\n";
            continue;
        }

        /******** INSERT YOUR CODE BELOW HERE ********/

        switch (option)
        {
            case 1:
                cout << "Please enter three measurements." << endl;
                cin >> inputA >> inputB >> inputC;
                if (inputA > inputB && inputA > inputC)
                {
                    c = inputA;
                    if (inputB > inputC)
                    {
                        b = inputB;
                        a = inputC;
                    }
                    else
                    {
                        a = inputB;
                        b = inputC;
                    }
                }
                else if (inputB > inputA && inputB > inputC)
                {
                    c = inputB;
                    if (inputA > inputC)
                    {
                        b = inputA;
                        a = inputC;
                    }
                    else
                    {
                        a = inputA;
                        b = inputC;
                    }
                }
                else
                {
                    c = inputC;
                    if (inputA > inputB)
                    {
                        b = inputA;
                        a = inputB;
                    }
                    else
                    {
                        a = inputA;
                        b = inputB;
                    }

                }
                break;
            case 2:
                cout << "Side 1: " << a << endl
                    << "Side 2: " << b << endl
                    << "Side 3: " << c << endl;
                break;
            case 3:
                if (a < (b + c) && b < (a + c) && c < (b + a))
                {
                    cout << "The three numbers you have entered do make a triangle" << endl;
                    isTriangle = true;
                }
                else
                    cout << "The three numbers you have entered do not make a triangle" << endl;
                break;
            case 4:
                if (isTriangle == true)
                {
                    if (abs(pow(b, 2) + pow(a, 2) - pow(c, 2)) <= TOLERANCE)
                        cout << "The triangle is a right triangle" << endl;
                    else if (pow(b, 2) + pow(a, 2) > pow(c, 2))
                        cout << "The triangle is an acute triangle" << endl;
                    else if (pow(b, 2) + pow(a, 2) < pow(c, 2))
                        cout << "The triangle is an obtuse triangle" << endl;

                }
                else
                    cout << "The three numbers you have entered do not make a triangle" << endl;
                break;
            case 5:
                return 0;
                break;
        }


        /******** INSERT YOUR CODE ABOVE HERE ********/
    } while (option != 5);

    return EXIT_SUCCESS; // signals the operating system that our program ended OK.
}