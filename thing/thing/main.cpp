/*#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<char>letter;
    char x = 'x';
    cout << "Enter as many letters as you like or enter ! to quit" << endl;
    while (x != '!')
    {
        cout << "Enter a letter: ";
        cin >> x;
        if (x != '!')
            letter.push_back(x);
    }
    cout << "Great, you entered: ";
    for (vector<char>::iterator a = letter.begin(); a != letter.end(); ++a)
        cout << *a;
    cout << endl << "The first character you entered was: "
        << letter.front()
        << endl << "The last character you entered was: "
        << letter.back() << endl;
}*/
#include <iostream>
using namespace std;

int main()
{
    int x;
    cout << "Please enter a number" << endl;
    cin >> x;
    cout << x << endl;
    int y = x + 2;
    cout << y << endl;
}