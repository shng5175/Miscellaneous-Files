/* CSCI 261 Homework 12: Job Interview
*
* Author: Sherry Nguyen
*
* ADD_DETAILS_HERE ON ALL BELLS/WHISTLES YOU HAVE CODED
* ADD_DETAILS_HERE ON ALL BELLS/WHISTLES YOU HAVE CODED
* ADD_DETAILS_HERE ON ALL BELLS/WHISTLES YOU HAVE CODED
* ADD_DETAILS_HERE ON ALL BELLS/WHISTLES YOU HAVE CODED
* ADD_DETAILS_HERE ON ALL BELLS/WHISTLES YOU HAVE CODED
* ADD_DETAILS_HERE ON ALL BELLS/WHISTLES YOU HAVE CODED
* ADD_DETAILS_HERE ON ALL BELLS/WHISTLES YOU HAVE CODED
*
*/



#include <iostream>
#include "Circle.h";
#include <random>
using namespace std;

#include <SFML/Graphics.hpp>
using namespace sf;

const int NUMBER_OF_CIRCLES = 10;
const int WINDOW_X = 1280;
const int WINDOW_Y = 1280;

// vector of Circle objects 
vector<Circle> allCircles;

void createCircleObject() {
    /*
    -----------------------------------------------------------------------
    OBJECTIVE 1
    --------------------------------------------------------------------
    In this function you should create two random numbers for the
    initial location of the circle( x, y); you should check to make
    sure this does not overlap with other circles already created.

    If the location is on the screen[(WINDOW_X) x (WINDOW_Y)] and
    not overlapping with other circles instantiate the object by
    calling the right constructor.

    Once instantiated, add the object to the vector

    The number of circles is going to grow as you add ojbects to the
    vector (thus, using NUMBER_OF_CIRCLES is NOT a good idea here)
    ----------------------------------------------------------------------
    */
    srand(time(NULL));
    int randomNumber = rand();
    int x, y;
    x = randomNumber % WINDOW_X;
    y = randomNumber % WINDOW_Y;
}

int main() {
    srand(time(NULL));

    /*
    -----------------------------------------------------------------------
    OBJECTIVE 2
    --------------------------------------------------------------------
    In this section you should create 10 (NUMBER_OF_CIRCLES) circle objects

    ** a good function to use here would be "createCircleObject()" **

    ----------------------------------------------------------------------
    */
    Circle thing(50, 50, 7);

    // creates the window object with an (WINDOW_X) x (WINDOW_Y) resolution window
    RenderWindow window(VideoMode(WINDOW_X, WINDOW_Y), "SFML Template");

    // Draw loop: Each iteration of this loop draws a single frame
    while (window.isOpen()) {

        // Erase the screen with black (because space)
        window.clear();


        /*
        -----------------------------------------------------------------------
        OBJECTIVE 3
        --------------------------------------------------------------------
        Use this section to check if the circles are close enough to each other
        that they need to change direction.

        What are your options ?
        1) create a "CheckCollision" function in the Circle class, which would need to
        have another circle class object as a parameter to compare
        2) create a function that returns a boolean if the two are close enough


        IF the two circles are colliding, change their directions.
        - This should call a function in the circle class, which (depending
        on the impact on the other circle) changes the direction
        hint : void Circle::changeDirection(Circle& otherCircle){}
        */

        /*
        -----------------------------------------------------------------------
        OBJECTIVE 4
        --------------------------------------------------------------------
        Check for a wall collision
        each circle instance should be calling its "checkWallCollision function";
        - What happens if we change the size of the WINDOW_X, WINDOW_Y variables .
        - Should this be added into the constructor ?

        */

        /*
        -----------------------------------------------------------------------
        OBJECTIVE 5
        --------------------------------------------------------------------
        Update the location of all of the circles.
        */
        thing.update();
        /*
        -----------------------------------------------------------------------
        OBJECTIVE 6
        --------------------------------------------------------------------
        Each circle should have a CircleShape object.
        reference that object from every instance to draw the
        circle
        */



        /***** END OF FILE PROCESSING AND DRAWING	*****/

        // Apply all the draws to the screen
        window.draw(thing);
        window.display();


        Event event;
        while (window.pollEvent(event)) {
            if (event.type == Event::Closed)
                window.close();
        }
    }

    return EXIT_SUCCESS;
}
