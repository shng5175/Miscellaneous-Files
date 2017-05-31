#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    string x;
    ifstream words("words.txt");
    ifstream points("points.txt");
    ofstream fout("message.txt");
    int y, total(0), l;
    while (!points.eof())
    {
        points >> y;
        //cout << y << endl;
        while (!words.eof()&&total != y)
        {
            total = 0;
            words >> x;
            l = x.length();
            for (int j = 0; j < l; j++)
            {
                //cout << j << x.at(j) << endl;
                if (x.at(j) == 'e' || x.at(j) == 't' || x.at(j) == 'a' || x.at(j) == 'o' || x.at(j) == 'n')
                    total = total + 10;
                else if (x.at(j) == 'r' || x.at(j) == 'i' || x.at(j) == 's' || x.at(j) == 'h' || x.at(j) == 'd')
                    total = total + 20;
                else if (x.at(j) == 'l' || x.at(j) == 'f' || x.at(j) == 'c' || x.at(j) == 'm' || x.at(j) == 'u')
                    total = total + 30;
                else if (x.at(j) == 'g' || x.at(j) == 'y' || x.at(j) == 'p' || x.at(j) == 'w' || x.at(j) == 'b')
                    total = total + 40;
                else if (x.at(j) == 'v' || x.at(j) == 'k' || x.at(j) == 'j' || x.at(j) == 'x' || x.at(j) == 'q')
                    total = total + 50;
                else if (x.at(j) == 'z')
                    total = total + 60;
                else
                    total = total;
            }
            if (total == y)
                fout << x << " ";
        }
    }
    words.close();
    points.close();
    fout.close();
    return 0;
}