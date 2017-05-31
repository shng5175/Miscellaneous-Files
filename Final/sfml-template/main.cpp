#include <iostream>
#include <fstream>
using namespace std;

#include <SFML/Graphics.hpp>
using namespace sf;

#include "Global Variables.h"
#include "Melon.h"
#include "Enemy.h"
#include "Attack.h"
#include "Background.h"
#include "Object.h"

void ChangeState(int &state, int newState);

int main() {
    int state = -1;
    // creates the window object with an 640x640 resolution window
    RenderWindow window(VideoMode(WIDTH, HEIGHT), "SFML Template");

    Melon melon(78, 99);

    // Draw loop: Each iteration of this loop draws a single frame
    while (window.isOpen()) {

        // Erase the screen with black (because space)
        window.clear();

        /***** PLACE YOUR FILE PROCESSING CODE HERE, AND ADD DRAW CALLS *****/

        // Declare and load a texture
        sf::Texture texture;
        texture.loadFromFile("MERRR.png");
        // Create a sprite
        sf::Sprite sprite;
        sprite.setTexture(texture);
        sprite.setTextureRect(sf::IntRect(0, 0, 99, 78));
        sprite.setColor(sf::Color(255, 255, 255, 200));
        sprite.setPosition(100, 25);

        // Draw it
        window.draw(sprite);

        /***** END OF FILE PROCESSING AND DRAWING	*****/

        // Apply all the draws to the screen
        window.display();

        Event event;
        while (window.pollEvent(event)) {
            if (event.type == Event::Closed)
                window.close();
            else if (event.type == Event::KeyPressed) {
                if (Keyboard::isKeyPressed(Keyboard::Q)) {
                    window.close();
                }
                else if (Keyboard::isKeyPressed(Keyboard::Left))
                {
                    // move left...
                    melon.moveLeft();
                }
                else if (Keyboard::isKeyPressed(Keyboard::Right))
                {
                    // move right...
                    melon.moveRight();

            }

        }
    }

    return EXIT_SUCCESS;
}

void ChangeState(int &state, int newState)
{
	if(state ==TITLE)
	{}
	else if(state ==MENU)
	{}
	else if(state == PLAYING)
	{
		//for(iter = objects.begin(); iter != objects.end(); ++iter)
		//{
		//	if( (*iter)->GetID() != PLAYER && (*iter)->GetID() != MISC)
		//		(*iter)->SetAlive(false);			
		//}

		//al_stop_sample_instance(songInstance);
	}
	else if(state ==WON)
	{}
	else if(state == LOST)
	{}

	state = newState;

	if(state ==TITLE)
	{}
	else if(state ==MENU)
	{}
	else if(state == PLAYING)
	{
		//melon->Init();
		//al_play_sample_instance(songInstance);
	}
	else if(state ==WON)
	{}
	else if(state == LOST)
	{}
}