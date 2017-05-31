#pragma once

#include <iostream>
#include <math.h>
#include <SFML/Graphics.hpp>
using namespace sf;
using namespace std;


class Circle {
private:
    /*
    private variables for the following
    1) current location of the circle
    2) direction of the circle
    3) color of the circle
    4) "CircleShape" object
    5) size of screen
    */
    double circle_x = 50;
    double circle_y = 50;
    CircleShape Circleshape;
    double x_direction = 5;
    double y_direction = 5;
    int Color = (255, 0, 0);

public:

    /*
    Constrctor:
    -Sets the current location, direction, color, size of screen
    */

    /*
    Update Function :
    - Updates the location of the circle based on the direction
    */

    /*
    checkAndUpdateWallCollision :
    - Updates the location of the circle based on incoming direction, if it has hit
    the edge of the screen
    */

    /*
    getters & setters for the private variables where needed
    ***** Do you need getters and setters for all of them ***
    */

    /*
    Collision Check
    - a Function that checks if the callee has collided with another circle
    bool checkCollision(Circle otherCircle);
    */

    /*
    Collision with circle
    - Updates the direction of the circle if it has collided with another circle
    ** you can do the direction changes for both from one function
    or call the same function twice for the different objects

    void changeDirection(Circle& otherCircle);
    vs
    void changeDirection(Circle otherCircle);

    */
    

    Circle(double x, double y, int color);

    void update();

    bool checkCollision(Circle otherCircle);
    void changeDirection(Circle& otherCircle);

    void checkAndUpdateWallCollision();

    double getX();
    double getY();

    void setDirection(double x, double y);
    double getXDirection();
    double getYDirection();


};