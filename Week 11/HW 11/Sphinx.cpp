/*
Charles McConnell
section E (noon)
HW 11



*/
#include"Sphinx.h"
#include <string>
#include <iostream>
using namespace std;

void Sphinx::Introduction() {
    cout << "Greetings traveler, great distances have been traveled to get you to this point" << endl;
    cout << "To get your deepest desire you must Answer me a riddle, passed down throughout the ages" << endl;
}

void Sphinx::SetName() {
    cout << "What is your name, Traveler?" << endl;
    getline(cin, name);
}

void Sphinx::setDesire() {
    cout << "And what is your deepest desire?\n";
    getline(cin, desire);
}

void Sphinx::SetUserAnswer() {
    getline(cin, userAnswer);
}

void Sphinx::TheRiddle() {
    cout << riddle;
    cout << "*Note Sphinx are fickle creatures and you must get the answer perfectly correct otherwise your doom is assured" << endl;
}

void Sphinx::CheckAnswer(){
    if (userAnswer==riddleAnswer)
    {
        answerCheck = true;
    }
    else
    {
        answerCheck = false;
    }
}

void Sphinx::JustRewards(Sphinx sphinx) {
    if (sphinx.answerCheck == true)
    {
        cout << "Well done " << name << ", The Sphinx has accepted your answer.\n";
        cout << "The creature will not grant your deepest desire, however you have earned yourself a high five, CONGRATULATIONS" << endl;
    }
    else
    {
        cout << "Wrong, the sphrinx squished you like an illiterate Bug" << endl;
    }

}
Sphinx::Sphinx()
{
    name = "Unknown Creature";
    riddle = "Tell me mortal, what is BLUE and smells like RED paint ? \n";
    riddleAnswer = "Blue Paint";
    desire = "Not a thing";
    userAnswer = "";

}
