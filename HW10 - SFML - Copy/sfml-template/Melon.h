#pragma once
#include "Global Variables.h"
#include <SFML/Graphics.hpp>
using namespace sf;

class Melon
{
public:
    Melon(double x, double y);//consrtucter that takes in position

    CircleShape getShape();
    
    FloatRect getPosition();//Gets the postion of the object

    void Update();//updates postion

    void Up();//These are pretty self explanatory
    void Down();//They're functions to move the onject
    void Left();
    void Right();

private:
    CircleShape melon;
    Vector2f pos;
    const double speed = 2.5;//How much the object moves at each key press
    const int rad = 100;//radius of the circle
};