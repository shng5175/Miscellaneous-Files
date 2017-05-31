/* CSCI261 HW 11
* Author: Sherry Nguyen
*/

#pragma once

#include <iostream>
#include <string>
using namespace std;

class TrickQuestion {
public:
    TrickQuestion();
    void Start();
    void RandomQuestion();
    bool Check();
    void Prize(TrickQuestion TrickQuestion);
    
private:
    string Question;
    int Answer;
    int Guess;
    string prize;
    bool yes;
};