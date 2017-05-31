/* CSCI 261 HW02: Arithmetic, Cars, and Triangles
* Author: Sherry Nguyen
*
* Add more complete description here...
*/

#include <iostream>   // For cin, cout, etc.
#include <cmath>
#include <iomanip>
using namespace std;  // For standard namespace 

int main() {
    // PART I: INSERT YOUR CODE BELOW HERE

    int x, y, z;
    x = y = z = 0;
    cout << "Please enter 3 values for x , y, and z" << endl;
    cin >> x >> y >> z;
    cout << x + y << endl
        << (x + y * z) << endl //multiplies y and z then adds x
        << ((x + y) * z) << endl //adds x and y then multiplies by z
        << x / y << endl
        << x % y << endl;
    cout << static_cast<double>(x) / static_cast<double>(y) << endl
        << (x ^ 2 + (2 * y) - (6 * x * z)) << endl;

    // PART I INSERT YOUR CODE ABOVE HERE
    // PART II: INSERT YOUR CODE BELOW HERE

    double timeCar1, timeCar2, accCar1, accCar2;
    cout << "Enter the amount of seconds it takes Car 1 to reach 60mph" << endl;
    cin >> timeCar1;
    cout << "Enter the amount of seconds it takes Car 2 to reach 60mph" << endl;
    cin >> timeCar2;
    accCar1 = timeCar1 / 60;
    accCar2 = timeCar2 / 60;
    cout << "Car 1 is accelerating at " << accCar1 << " mile(s) per second squared" << endl
        << "Car 2 is accelerating at " << accCar2 << " mile)s) per second squared" << endl;

    // PART II INSERT YOUR CODE ABOVE HERE
    // PART III INSERT YOUR CODE BELOW HERE

    double x1, x2, x3, y1, y2, y3, side1, side2, side3, perimeter, s, area;
    std::cout << std::fixed;
    std::cout << setprecision(2);
    cout << "Use a space to seperate values" << endl
        << "Please enter the coordinates of the first point: " << endl;
    cin >> x1 >> y1;
    cout << "Please enter the coordinates of the second point:" << endl;
    cin >> x2 >> y2;
    cout << "Please enter the coordinates of the third point:" << endl;
    cin >> x3 >> y3;
    side1 = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
    side2 = sqrt(pow((x3 - x2), 2) + pow((y3 - y2), 2));
    side3 = sqrt(pow((x1 - x3), 2) + pow((y1 - y3), 2));
    std::cout << "The sides of the triangle are: "
        << side1 << ", "
        << side2 << ", and "
        << side3 << endl;
    perimeter = side1 + side2 + side3;
    s = 0.5 * (side1 + side2 + side3);
    area = sqrt(s * (s - side1)*(s - side2)*(s - side3));
    cout << "The perimeter of the triangle is: " << perimeter << endl
        << "The area of the triangle is: " << area << endl;

    // PART III INSERT YOUR CODE ABOVE HERE

    return 0; // signals the operating system that our program ended OK.
}
