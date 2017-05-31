#pragma once
// Homework 11: Class Fun
// This is fun quiz that tries to match you with a Nintendo Universe
// Author: Kenneth Li
// Section: C

#include <string>
using namespace std;

class quiz {
public:
	quiz();
	void RunAll();
	void In();
	void Question1(int input);
	void Question2(int input);
	void Question3(int input);
	void Question4(int input);
	void SetMario();
	void SetKirby();
	void SetPokemon();
	void SetHyrule();
	void SetFox();
	void SetSamus();
	int GetMario();
	int GetKirby();
	int GetPokemon();
	int GetHyrule();
	int GetFox();
	int GetSamus();
	void GetReward();
private:
// Mario Universe
	int mario;
	string gigamushroom;
// Kirby Universe
	int kirby;
	string warpstar;
// Pokemon Universe
	int pokemon;
	string pokedex;
// Legend of Zelda Universe;
	int hyrule;
	string mastersword;
// Star Fox Universe;
	int corneria;
	string arwing;
// Metroid Universe;
	int samus;
	string metroid;
// Extra
	string masterhand;
};