#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    char x;
    ifstream message("secretMessage.txt");
    ofstream deciphered("decipheredMessage.txt");
    while (!message.eof()) 
    {
        message >> x;
        if (x == 'n')
            deciphered << endl;
        else if (x == '~')
            deciphered << " ";
        else 
            deciphered << char(x+1);
    }
    message.close();
    deciphered.close();
    return 0;
}