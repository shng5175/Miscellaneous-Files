/* CSCI261 HW 11: Class Fun
*
* Description: CPP for Riddler class
*
* Author: Bryce Raymond
*/

#include "Riddler.h"
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;


Riddler::Riddler() {
	int riddlenumber = 0;
	srand(time(0));
	riddlenumber = (rand() % 5) + 1;
	switch (riddlenumber) {
	case 1:
		riddle = "What walks on 4 legs in the morning, 2 legs midday, and 3 legs at night?";
		answer = "Person";
		break;
	case 2:
		riddle = "Of the king I am blue. Of the peasant I am red. Of the frog I am cold. Of the dog I am hot. What am I?";
		answer = "Blood";
		break;
	case 3:
		riddle = "I am taller when I'm younger, I'm smaller when I'm old. What am I?";
		answer = "Candle";
		break;
	case 4:
		riddle = "I'm where yesterday follows today, and tomorrow's in the middle. I am a...?";
		answer = "Dictionary";
		break;
	case 5:
		riddle = "I can run but not walk, and wherever I go thought folows close behind. I am a...?";
		answer = "Nose";
		break;
	}
	
	reward = "Gotham, safe and sound";
	Intro();
}
void Riddler::Intro() {
	cout << "Hello Batman, puzzled are we?" << endl;
	cout << "Well answer my riddle and you may just save your precious city." << endl << endl;
	cout << "Waddaya say? Let's play a game!" << endl;
	cout << "(Remember : the answer is always a single, non composed word," << endl;
	cout << " beginning with a capital letter,and always the simplest possible answer.)" << endl << endl;
	cout << endl;
	cout << "Here is your test." << endl << endl;
	cout << "Riddle: ";
	return;
}
void Riddler::GetRiddle() {
	cout << riddle << endl;
	
	getline(cin, guess);
	cout << endl;
	return;
}
void Riddler::GetReward() {
	cout << reward ;
	return;
}
void Riddler::Verify() {
	if (guess == answer) {
		check = 1;
	}
	else {
		check = 0;
	}
	return;
}
	
	
void Riddler::Rewards(Riddler riddler) {
	if (check == 1) {
		cout << "Congrats to the Bats! Looks like once again you've won ";
		riddler.GetReward();
		cout << endl;
	}
	else{
		cout << "That's too bad Bats! Looks like the Riddler wins this round!" << endl;
	}
	 return;
}