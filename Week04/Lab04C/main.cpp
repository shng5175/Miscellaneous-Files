/* CSCI 261 Lab 04C: Fix Loop Errors
*
* Author: Sherry Nguyen
*
*    This program illustrates a variety of common loop errors.
*    Fix the errors in each section.
*/

#include <iostream>
using namespace std;

int main() {
    cout << "Welcome to Loop World" << endl;

    // SECTION I: update comment below on how you fixed this section's code, and tests run
    // FIX = set sum = 0, change i<5 to i<6 because 5 needs to be included
    // TESTS: 

    cout << endl << "Section I" << endl;

    int sum = 0;  // Accumulates the total 
    int i;    // Used as loop control variable
    for (i = 1; i < 6; ++i) {
        sum += i;
    }
    cout << "The sum of the numbers from 1 to 5 (inclusive) is: " << sum << endl;

    // SECTION II: update comment below on how you fixed this section's code, and tests run
    // FIX = set total =  0 at beginning outside of loop and change what is in the while from (counter < num_items) to (counter <= num_items)
    // TESTS: 

    cout << endl << "Section II" << endl;

    double total = 0;     // Accumulates total
    double price;    // Gets next price from user
    int num_items;     // Number of items
    int counter = 1;  // Loop control counter

    cout << "How many items do you have? ";
    cin >> num_items;

    while (counter <= num_items) {
        cout << "Enter the price of item " << counter << ": ";
        cin >> price;
        total += price;
        counter++;
    }
    cout << "The total price is: " << total << endl;

    // SECTION III: update comment below on how you fixed this section's code, and tests run 
    // FIX = change the && in the loop to ||
    // TESTS: 

    cout << endl << "Section III" << endl;

    char reply;  // loop control variable 
    do {
        cout << "Enter the price of the next item: ";
        cin >> price;
        total += price;

        cout << "Do you have more items? (y or n) ";
        cin >> reply;
    } while (reply == 'y' || reply == 'Y');

    cout << "The total price is: " << total << endl;

    // SECTION IV: update comment below on how you fixed this section's code, and tests run 
    // FIX = 
    // TESTS: 

    cout << endl << "Section IV" << endl;

    cout << "I will now calculate ";
    cout << "the sum of numbers from 1 to 4 (inclusive)" << endl;

    sum = 0;
    counter = 1;

    do {
        sum += counter;
        counter++;
        cout << "Sum so far: " << sum << endl;
    } while (counter <= 4);

    // SECTION V: update comment below on how you fixed this section's code, and tests run 
    // FIX = 
    // TESTS: 

    cout << endl << "Section V" << endl;

    cout << "I will now calculate ";
    cout << "the sum of squares from 1 to 4 (inclusive)" << endl;

    sum = 0;
    for (i = 1; i<5; i++) {
        sum += i*i;
    }

    cout << "The sum of squares from 1 to 4 is: " << sum << endl;

    // SECTION VI: update comment below on how you fixed this section's code, and tests run 
    // FIX = 
    // TESTS: 

    cout << endl << "Section VI" << endl;

    cout << "I will now calculate ";
    cout << "the sum of cubes from 1 to 4 (inclusive)" << endl;

    sum = 0;
    counter = 1;

    while (counter < 5) {
        sum += (counter * counter * counter);
        counter++;
    }

    cout << "The sum of cubes from 1 to 4 is: " << sum << endl;

    // SECTION VII: update comment below on how you fixed this section's code, and tests run 
    // FIX = 
    // TESTS: 

    cout << endl << "Section VII" << endl;

    cout << "I can calculate the sum of 1 to 5 using a for loop" << endl;
    sum = 0;
    for (counter = 0; counter <= 5; counter++) {
        sum += counter;
    }

    cout << "The sum of numbers from 1 to 5 (inclusive) is: " << sum << endl;

    // SECTION VIII: update comment below on how you fixed this section's code, and tests run 
    // FIX = 
    // TESTS: 

    cout << endl << "Section VIII" << endl;

    cout << "I can print all the odd numbers from 1 to 9" << endl;

    for (counter = 1; counter <= 9; counter = counter + 2)
        cout << counter << endl;

    return 0;
}