#pragma once

#include <iostream>
#include <string>
using namespace std;

class Riddler{
private:
	string riddle;
	string answer;
	string guess;
	string reward;
	int check;
	void Intro();

public:
	Riddler();
	void GetRiddle();
	void GetReward();
	void Verify();
	void Rewards(Riddler riddler);
};