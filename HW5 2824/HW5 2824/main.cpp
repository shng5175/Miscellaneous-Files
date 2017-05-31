#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

struct thing {
    unsigned long long int value;
    unsigned long long int position;
    int D;
};

void firstDDigitLucas(thing merp);

int main() {
    thing mer;
    cout << "Input a number" << endl;
    cin >> mer.D;
    firstDDigitLucas(mer);
}

void firstDDigitLucas(thing merp) {
    vector <unsigned long long int> ln;
    ln.push_back(2);
    ln.push_back(1);
    for (int i = 2; i < 80; i++) {
        unsigned long long int n;
        n = ln[i - 1] + ln[i - 2];
        ln.push_back(n);
    }
    merp.D = merp.D - 1;
    unsigned long long int x = pow(10, merp.D);
    unsigned long long int y = 0;
    while (y < 81){
        if (ln[y] >= x) {
            merp.position = y;
            merp.value = ln[y];
            y = 81;
        }
        else 
            y = y + 1;
    }
    cout << endl << "(" << merp.position << ", " << merp.value << ")" << endl;
}

