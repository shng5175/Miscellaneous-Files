#include <iostream>
#include <fstream>
using namespace std;

bool search(double u[], double q, int e);

int main()
{
    double x[1000];
    double y;
    ifstream data("dataFile.txt");
    while (!data.eof())
    {
        for (int i = 0; i < 1000; i++)
            data >> x[i];
    }
    //for (int i = 0; i < 1000; i++)
    //    cout << x[i] << endl;
    data.close();
    int n = 0;
    cout << "What number would you like to search for?" << endl;
    cin >> y;
    search(x, y, n);
    if (search(x, y, n) == 1)
        cout << "Found" << endl;
    else
        cout << "Not found" << endl;
    return 0;
}

bool search(double u[], double q, int e)
{
    if (u[e] == q)
        return 1;
    else if (u[e] != q && e < 1000)
        return search(u, q, e+1);
    else
        return 0;
}