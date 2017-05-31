#include "Enemy.h"

Enemy::Enemy(double x, double y)
{
    pos.x = x;
    pos.y = y;

    enemy.setPosition(pos);
}

CircleShape Enemy::getShape()
{
    return enemy;
}

FloatRect Enemy::getPosition()
{
    return enemy.getGlobalBounds();
}

void Enemy::Update()
{
    pos.x -= speed;
    enemy.setPosition(pos);
}