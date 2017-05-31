#include <iostream>
#include <string>
#include "TrickQuestion.h"
#include "Sphinx.h"
#include "Riddler.h"
#include "nintendo.h"
using namespace std;

int main()
{
    string input;
    cout << "Hello human, in order to win a prize, you must pass through several trials first" << endl;
    
    TrickQuestion mer;
    mer.Start();
    mer.RandomQuestion();
    mer.Check();
    mer.Prize(mer);
    
    Sphinx merr;
    merr.Introduction();
    merr.SetName();
    merr.setDesire();
    merr.TheRiddle();
    merr.SetUserAnswer();
    merr.CheckAnswer();
    merr.JustRewards(merr);

    Riddler merrr;
    merrr.GetRiddle();
    merrr.Verify();
    merrr.Rewards(merrr);

    quiz merrrr;
    merrrr.RunAll();

    cout << "Congratulations! You have completed all the tasks! Your prize is the satisfaction of completing the tasks!" 
        << endl << "Enjoy!" << endl;
    return 0;
}
