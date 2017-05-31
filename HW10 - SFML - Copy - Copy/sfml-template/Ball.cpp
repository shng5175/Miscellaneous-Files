#include "Ball.h"

Ball::Ball(double x, double y)
{
    position.x = x;
    position.y = y;
    ballShape.setSize(sf::Vector2f(10, 10));
    ballShape.setPosition(position);
    ballShape.setFillColor(sf::Color(255, 0, 0));
}

FloatRect Ball::getPosition()
{
    return ballShape.getGlobalBounds();//gets bounds(x, y) of objexct
}

RectangleShape Ball::getShape()
{
    return ballShape;
}

float Ball::getV()
{
    return xV;
}

void Ball::sidecollision()
{
    xV = -xV;//chnaes direction
}

void Ball::topcollision()
{
    yV = -yV;//changes direction
}

void Ball::bottomcollision()
{
    position.y = 50;
    position.x = 17;
}

void Ball::Update()//updtae ball position
{
    position.y += yV;
    position.x += xV;
    ballShape.setPosition(position);
}