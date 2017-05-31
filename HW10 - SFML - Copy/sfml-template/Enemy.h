#pragma once
#include "Global Variables.h"
#include <SFML/Graphics.hpp>
using namespace sf;

class Enemy
{
public:
    Enemy(double x, double y);//consrtucter that takes in position

    CircleShape getShape();

    FloatRect Enemy::getPosition();

    void Update();//updates postion

private:
    CircleShape enemy;
    Vector2f pos;
    const double speed = 2.5;//How much the object moves at each key press
    const int rad = 39;//radius of the circle
    int x = 0;
};