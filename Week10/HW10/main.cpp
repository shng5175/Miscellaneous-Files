#include <iostream>
#include <fstream>
using namespace std;

#include <SFML/Graphics.hpp>
using namespace sf;

void read(int e);
void count(char y, int b);
char compare();
double frequencies[26];
char i = 'a';
char j = 'A';

int main() {
    int a = 0;
    for (int q = 0; q < 26; q++)
    {
        read(a);
        a++;
    }

    cout << "Most frequent letter: " << compare();
    int u = compare() - 'A';
    
    // creates the window object with an 640x640 resolution window
    RenderWindow window(VideoMode(520, 700), "SFML Template");

    // Draw loop: Each iteration of this loop draws a single frame
    while (window.isOpen()) {

        // Erase the screen with black (because space)
        window.clear();

        /***** PLACE YOUR FILE PROCESSING CODE HERE, AND ADD DRAW CALLS *****/
        Font letters;
        letters.loadFromFile("arial.ttf");

        char p = 'A';
        Text mer;
        mer.setFont(letters);
        mer.setCharacterSize(15);
        mer.setColor(Color::Blue);

        int xvalue = 0;
        for (int d = 0; d < 26;d++)
        {
            RectangleShape thing;
            thing.setPosition(xvalue, 0+(700-(frequencies[d]/25)));
            thing.setSize(Vector2f(20, (frequencies[d]/25)));
            mer.setPosition(xvalue, 680);
            mer.setString(p);
            if (d == u)
                thing.setFillColor(Color::Red);
            else
                thing.setFillColor(Color::White);
            window.draw(thing);
            window.draw(mer);
            xvalue += 20;
            p++;

        }      

        /***** END OF FILE PROCESSING AND DRAWING	*****/

        // Apply all the draws to the screen
        window.display();

        Event event;
        while (window.pollEvent(event)) {
            if (event.type == Event::Closed)
                window.close();
        }
    }

    return EXIT_SUCCESS;
}

void read(int e)
{
    ifstream alice("alice.txt");
    char x;
    while (!alice.eof())
    {
        alice >> x;
        count(x, e);
    }
    cout << j << ": " << frequencies[e] << endl;
    e++;
    j++;
    i++;
}

void count(char y, int b)
{
    if (y == i || y == j)
        frequencies[b]++;
}

char compare()
{
    char s = 'A';
    int t = 0;
    char largest;
    int max = frequencies[0];
    for (int r = 0; r < 26; r++)
    {
        if (max < frequencies[r])
        {
            max = frequencies[r];
            t = r;
        }
    }
    largest = s + t;
    return largest;
}