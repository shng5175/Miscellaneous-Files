#include <iostream>
#include <fstream>
#include "Global Variables.h"
#include "Melon.h"
#include "Enemy.h"
#include <cstdlib>
#include <ctime>
using namespace std;

#include <SFML/Graphics.hpp>
using namespace sf;

int main() {
    
    // creates the window object with an 640x640 resolution window
    RenderWindow window(VideoMode(WIDTH, HEIGHT), "The Elemelons");

    // Draw loop: Each iteration of this loop draws a single frame
    while (window.isOpen()) {

        // Erase the screen with black (because space)
        window.clear();

        /***** PLACE YOUR FILE PROCESSING CODE HERE, AND ADD DRAW CALLS *****/
        
        int score = 0;
        int lives = 5;

        Melon new_melon(100, 400);
        Enemy new_enemy(0, 12);

        /***** END OF FILE PROCESSING AND DRAWING	*****/

        // Apply all the draws to the screen
        window.display();

        Event event;
        while (window.pollEvent(event)) {
            if (event.type == Event::Closed)
                window.close();
        }
        if (Keyboard::isKeyPressed(Keyboard::Up))
        {
            new_melon.Up();
        }
        else if (Keyboard::isKeyPressed(Keyboard::Down))
        {
            new_melon.Down();
        }
        else if (Keyboard::isKeyPressed(Keyboard::Right))
        {
            new_melon.Right();
        }
        else if (Keyboard::isKeyPressed(Keyboard::Left))
        {
            new_melon.Left();
        }
        else if (Keyboard::isKeyPressed(sf::Keyboard::Escape))
        {
            window.close();
        }
        new_melon.Update();
        window.clear(Color(26, 128, 182, 255));

        window.draw(new_melon.getShape());

        //window.draw(ball.getShape());

    }

    return EXIT_SUCCESS;
}