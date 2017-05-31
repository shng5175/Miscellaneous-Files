#include <iostream>
using namespace std;

#include <SFML/Graphics.hpp>
using namespace sf;

int main() {
    // creates the window object with an 640x640 resolution window
    RenderWindow window(VideoMode(640, 640), "SFML Template");

    // Draw loop: Each iteration of this loop draws a single frame
    while (window.isOpen()) {

        // Erase the screen with black (because space)
        window.clear();

        /***** PLACE YOUR FILE PROCESSING CODE HERE, AND ADD DRAW CALLS *****/

        Image flower; // creates an image object
        if (!flower.loadFromFile("data/flower.jpeg")) {    // loads the image file into the object 
            cerr << "Couldn't open image file!" << endl;
            return EXIT_FAILURE;
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
