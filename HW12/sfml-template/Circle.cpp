#include "Circle.h"

Circle::Circle(double x, double y, int color) 
{
    x = circle_x;
    y = circle_y;
    Circleshape.setPosition(x, y);
}

void Circle::update()
{
    circle_x = circle_x += x_direction;
    circle_y = circle_y += y_direction;
    Circleshape.setPosition(circle_x, circle_y);
}

bool Circle::checkCollision(Circle otherCircle)
{
    return 0;
}
void Circle::changeDirection(Circle& otherCircle)
{
    if (checkCollision(otherCircle) == 1)
    {
        x_direction = 0 - x_direction;
        y_direction = 0 - y_direction;
    }
}

void Circle::checkAndUpdateWallCollision()
{

}

double Circle::getX()
{
    return circle_x;
}
double Circle::getY()
{
    return circle_y;
}

void Circle::setDirection(double x, double y)
{
    x = x_direction;
    y = y_direction;
}
double Circle::getXDirection()
{
    return x_direction;
}
double Circle::getYDirection()
{
    return y_direction;
}