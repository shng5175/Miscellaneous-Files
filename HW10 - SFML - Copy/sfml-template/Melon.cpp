#include "Melon.h"

Melon::Melon(double x, double y)
{
    pos.x = x;
    pos.y = y;

    melon.setRadius(rad);
    melon.setPosition(pos);
}

CircleShape Melon::getShape()
{
    return melon;
}

FloatRect Melon::getPosition()
{
    return melon.getGlobalBounds();
}

void Melon::Up()
{
    if (pos.y >= rad && pos.y <= (HEIGHT - rad))
        pos.y -= speed;
    else
        pos.y = pos.y;
}

void Melon::Down() 
{
    if (pos.y >= rad && pos.y <= (HEIGHT - rad))
        pos.y += speed;
    else
        pos.y = pos.y;
}

void Melon::Left()
{
    if (pos.x >= rad && pos.x <= (WIDTH - rad))
        pos.x -= speed;
    else
        pos.x = pos.x;
}

void Melon::Right()
{
    if (pos.x >= rad && pos.x <= (WIDTH - rad))
        pos.x += speed;
    else
        pos.x = pos.x;
}

void Melon::Update()
{
    melon.setPosition(pos);
}