/*
*Sherry Nguyen - Final Project
*
*
*/
#include <iostream>
#include "Melon.h"
#include "ball.h"
#include <sstream>
#include <cstdlib>
#include <SFML/Graphics.hpp>
using namespace std;
using namespace sf;

int main()
{
    // creates the window object
    RenderWindow window(VideoMode(WIDTH, HEIGHT), "Final");
    Font letters;
    letters.loadFromFile("arial.ttf");
    int data[2] = { 0, 10 };//[1]-score 2- lives
    int radius = 200;
    //create the bad melon
    CircleShape redmelon(radius);
    sf::Texture texture;
    if (!texture.loadFromFile("Firemelon.png"))
    {
        cout << "ERROR: Could Not Load From File" << endl;
    }
    redmelon.setTexture(&texture);
    redmelon.setTextureRect(sf::IntRect(0, 0, 79, 79));

    // create a Melon
    Melon melon(WIDTH / 2, HEIGHT - 78);

    // create the balls
    Ball ball(50, 40);
    Ball ball1(85, 80);
    Ball ball2(860, 10);
    
    // Draw loop: Each iteration of this loop draws a single frame
    while (window.isOpen())
    {
        //Handles all the events
        Event event;
        while (window.pollEvent(event))
        {
            if (event.type == Event::Closed)//closes the program
                window.close();
        }
        if (Keyboard::isKeyPressed(Keyboard::Up))//moves the melon up
        {
            melon.Up();
        }
        else if (Keyboard::isKeyPressed(Keyboard::Down))//moves the melon down
        {
            melon.Down();
        }
        else if (Keyboard::isKeyPressed(Keyboard::Left))//moves the melon left
        {
            melon.Left();
        }
        else if (Keyboard::isKeyPressed(Keyboard::Right))//movs the melon right
        {
            melon.Right();
        }
        else if (Keyboard::isKeyPressed(sf::Keyboard::Escape))//another button that closes the program
        {
            window.close();
        }


        if (ball.getPosition().top > HEIGHT)//When ball hits bottom of screen
        {
            ball.bottomcollision();

            data[1]--;
            

        }
        if (ball1.getPosition().top > HEIGHT)
        {
            ball1.bottomcollision();

            data[1]--;

        }
        if (ball2.getPosition().top > HEIGHT)
        {
            ball2.bottomcollision();
            data[1]--;
            
        }

        if (ball.getPosition().top < 0) //When ball hits the top of the screen 
        {
            ball.topcollision();
            data[0]++;
        }
        if (ball1.getPosition().top < 0) 
        {
            ball1.topcollision();
            data[0]++;
        }if (ball2.getPosition().top < 0) 
        {
            ball2.topcollision();
            data[0]++;
        }

        if (ball.getPosition().left < 0 || ball.getPosition().left + 10 > WIDTH)//When ball hits sides of melon
        {
            ball.sidecollision();
        }
        if (ball1.getPosition().left < 0 || ball.getPosition().left + 10 > WIDTH)
        {
            ball1.sidecollision();
        }
        if (ball2.getPosition().left < 0 || ball.getPosition().left + 10 > WIDTH)
        {
            ball2.sidecollision();
        }

        if (ball.getPosition().intersects(melon.getPosition()))//detects colliosion on top of melon
        {
            ball.topcollision();
        }
        if (ball1.getPosition().intersects(melon.getPosition()))
        {
            ball1.topcollision();
        }
        if (ball2.getPosition().intersects(melon.getPosition()))
        {
            ball2.topcollision();
        }

        ball.Update();//updates positions of objects
        ball1.Update();
        ball2.Update();
        melon.Update();
        Text merr;
        merr.setFont(letters);
        merr.setCharacterSize(45);
        merr.setColor(Color::Blue);
        merr.setPosition(400, 100);
        stringstream thing;
        thing << "Use the arrow keys to use \nthe green melon to bounce \nback the red melon's attacks" << endl << "Score: " << data[0] << "    Lives: " << data[1];
        merr.setString(thing.str());

        window.clear();//Clears everything

        //Draws objects
        if (data[0] >= 10)
        {
            window.clear();
            cout << "You Won!!!" << endl;
            return 0;
        }
        else if (data[1] <= 0)
        {
            window.clear();
            cout << "You Lost!!!!" << endl;
            return 0;
        }
        window.draw(melon.getShape());
        window.draw(ball.getShape());
        window.draw(ball1.getShape());
        window.draw(ball2.getShape());
        window.draw(redmelon);
        window.draw(merr);
        window.display();//displays the objects
    }

    return EXIT_SUCCESS;
}