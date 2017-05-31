#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    double x, total(0), amount(0), average;
    ifstream data("MyData.txt");
    while (!data.eof())
    {
        data >> x;
        total += x;
        amount++;
    }
    average = total / amount;
    cout << "The average population of America's " << amount << " cities is " << average << endl;
    data.close();
    return 0;
}