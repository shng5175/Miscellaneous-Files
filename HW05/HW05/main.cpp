/* CSCI 261 HW05L Calculator
*
* Author: Sherry Nguyen
*
*/
#include <iostream>
#include <cmath>
using namespace std;

void Menu();
void PoundsToKilograms();
double DoPoundsToKilograms(double pounds);
void FeetToMeters();
double DoFeetToMeters(double feet);
void BodyMassIndex();
double DoBMI(double kilograms, double meters);
void GallonsToLiters();
double DoGallonsToLiters(double gallons);
void FahrenheightToCelsius();
double DoFahrenheightToCelsius(double Fahrenheight);


int main() {
    // DO NOT change this main function 

    Menu();

    return 0;

} // end of Main Function 

void Menu()
{
    int x = 1;
    while (x != 0)
    {
        cout << "[0] Exit" << endl
            << "[1] Convert pounds to kilograms" << endl
            << "[2] Convert feet to meters" << endl
            << "[3] Calculate body mass index" << endl
            << "[4] Convert gallons to liters" << endl
            << "[5] Convert fahrenheight to celsius" << endl;
        cin >> x;
        switch (x)
        {
        case 1:
            PoundsToKilograms();
            break;
        case 2:
            FeetToMeters();
            break;
        case 3:
            BodyMassIndex();
            break;
        case 4:
            GallonsToLiters();
            break;
        case 5:
            FahrenheightToCelsius();
            break;
        }
    }

}

void PoundsToKilograms()
{
    double p;
    cout << "Please input the number of pounds to convert to kilograms" << endl;
    cin >> p;
    cout << p << " pounds is equal to " << DoPoundsToKilograms(p) << " kilograms" << endl << endl;
}

double DoPoundsToKilograms(double pounds)
{
    pounds = pounds * 0.454;
    return pounds;
}

void FeetToMeters()
{
    double f;
    cout << "Please input the number of feet to convert to meters" << endl;
    cin >> f;
    cout << f << " feet is equal to " << DoFeetToMeters(f) << " meters" << endl << endl;
}

double DoFeetToMeters(double feet)
{
    feet = feet * 0.3048;
    return feet;
}

void BodyMassIndex()
{
    double p, f;
    cout << "Please enter a height in feet" << endl;
    cin >> f;
    cout << "Please enter a weight in pounds" << endl;
    cin >> p;
    cout << "The body mass index is " << DoBMI(DoPoundsToKilograms(p), DoFeetToMeters(f)) << endl << endl;
}

double DoBMI(double kilograms, double meters)
{
    double b;
    b = kilograms / (pow(meters, 2));
    return b;
}

void GallonsToLiters()
{
    double g;
    cout << "Please input a number of gallons to convert to liters" << endl;
    cin >> g;
    cout << g << " gallons is equal to " << DoGallonsToLiters(g) << " liters" << endl << endl;
}

double DoGallonsToLiters(double gallons)
{
    gallons = gallons * 3.78541;
    return gallons;
}

void FahrenheightToCelsius()
{
    double f;
    cout << "Please input a number of degrees fahrenheight to convert to degrees celsius" << endl;
    cin >> f;
    cout << f << " degrees fahrenheight is equal to " << DoFahrenheightToCelsius(f) << " degrees celsius" << endl << endl;
}

double DoFahrenheightToCelsius(double Fahrenheight)
{
    Fahrenheight = (Fahrenheight - 32) / 1.8;
    return Fahrenheight;
}