#pragma once
/*
* Charles McConnell
* Section E (noon)
* HW 11
* Shared With:
* Ryan Koenig section E
* Ben Beatty section F.
* Benjamin Jasinski section B
* Kayla Hjelmstad
* Ble Salia	Section A
* John Cornish Section E
* Joshua Edwards Section E
* Grace Halback Section B
* Robert Hudson Section F
* Patrick Lewis Humlicek
* Bryce Raymond Section D
* Brian Coleman Section C
* Madison Johnson section C
* Maddie Hamila Section E
* Kevin Pham Section B
*/
#include <string>
using namespace std;
class Sphinx
{
public:
    Sphinx();
    void Introduction();
    void SetName();
    void TheRiddle();
    void SetUserAnswer();
    void setDesire();
    void CheckAnswer();
    void JustRewards(Sphinx sphinx);


private:
    bool answerCheck;
    string name;
    string riddle;
    string userAnswer;
    string desire;
    string riddleAnswer;
};


