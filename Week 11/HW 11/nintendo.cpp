//Implementation File for Homework 11: Class Fun
//Author: Kenneth Li
//Section: C
//Note: I know this .cpp file is rediculously long, so I made a RunAll() function you can call

#include "nintendo.h"
#include <iostream>
#include <string>
using namespace std;



quiz::quiz() {
	mario = 0;
	gigamushroom = "Giga Mushroom!";
	kirby = 0;
	warpstar = "Warp Star!";
	pokemon = 0;
	pokedex = "Pokedex!";
	hyrule = 0;
	mastersword = "Master Sword!";
	corneria = 0;
	arwing = "Arwing!";
	samus = 0;
	metroid = "Metroid!";
	masterhand = "Master Hand!";
}

void quiz::In() {
	cout << "Have you ever wondered which Nintendo Universe* you would belong in?" << endl;
	cout << "Even if you haven't, this quiz will tell you anyway" << endl;
	cout << "Just answer some simple questions, and this quiz will figure out the rest!" << endl;
	cout << "*Disclaimer: Animal Crossing, F-Zero, Pikmin, and some others are not included" << endl << endl;
}

void quiz::Question1(int input) {
	cout << "It's the start of summer vacation, and a few friends invite you to go somewhere with them." << endl;
	cout << "Where do you decide to go?" << endl;
	cout << "1: Space" << endl;
	cout << "2: A Kingdom" << endl;
	cout << "3: A Forest" << endl;
	cout << "4: Anywhere outdoors" << endl;
	cout << "5: Stay Home" << endl;
	cout << "6: The Beach" << endl;
	cout << "What is your answer? (Enter 1-6): ";
	cin >> input;
	if (input > 0 && input <= 6) {
		switch (input) {
		case 1:
			SetFox();
			SetSamus();
			SetKirby();
			break;
		case 2:
			SetMario();
			SetHyrule();
			break;
		case 3:
			SetHyrule();
			SetPokemon();
			break;
		case 4:
			SetPokemon();
			SetHyrule();
			SetMario();
			SetKirby();
			break;
		case 5:
			SetPokemon();
			break;
		case 6:
			SetMario();
			SetKirby();
			SetHyrule();
			SetPokemon();
			break;
		}
	}
	else {
		do {
			cout << endl << "The number you have entered is invalid." << endl;
			cout << "Please reenter your answer: ";
			cin >> input;
		} while (input <= 0 && input > 6);
	}
	cout << endl;
}
void quiz::Question2(int input) {
	cout << endl;
	cout << "What is your favorite food?" << endl;
	cout << "1: Anything made with mushrooms...lots of mushrooms" << endl;
	cout << "2: You don't have one, you'll eat pretty much anything" << endl;
	cout << "3: Anything precooked, you don't usually have time to cook" << endl;
	cout << "4: Fruits, they're both delicious and nutritious" << endl;
	cout << "What is your answer? (Enter 1-4): ";
	cin >> input;
	if (input > 0 && input <= 4) {
		switch (input) {
		case 1:
			SetMario();
			break;
		case 2:
			SetKirby();
			SetHyrule();
			SetPokemon();
			break;
		case 3:
			SetPokemon();
			SetSamus();
			SetFox();
			break;
		case 4:
			SetHyrule();
			SetPokemon();
			break;
		}
	}
	else {
		do {
			cout << endl << "The number you have entered is invalid." << endl;
			cout << "Please reenter your answer: ";
			cin >> input;
		} while (input <= 0 && input > 4);
	}
}
void quiz::Question3(int input) {
	cout << endl;
	cout << "If you could have any vehicle, what would it be?" << endl;
	cout << "1: A go kart, you love racing other people!" << endl;
	cout << "2: A horse, you're a bit old fashioned" << endl;
	cout << "3: A boat, you always wanted to try sailing" << endl;
	cout << "4: A spaceship, to infinity and beyond!" << endl;
	cout << "5: Nothing, you can't drive" << endl;
	cout << "6. Who needs vehicles when you have Pokemon?" << endl;
	cout << "What is your answer? (Enter 1-6): ";
	cin >> input;
	if (input > 0 && input <= 6) {
		switch (input) {
		case 1:
			SetMario();
			break;
		case 2:
			SetHyrule();
			break;
		case 3:
			SetHyrule();
			break;
		case 4:
			SetFox();
			SetSamus();
			break;
		case 5:
			SetKirby();
			break;
		case 6:
			SetPokemon();
			break;
			
		}
	}
	else {
		do {
			cout << endl << "The number you have entered is invalid." << endl;
			cout << "Please reenter your answer: ";
			cin >> input;
		} while (input <= 0 && input > 6);
	}
}
void quiz::Question4(int input) {
	cout << endl;
	cout << "Last question, this one's a simple one." << endl;
	cout << "Who's your favorite Nintendo character?" << endl;
	cout << "1: Mario, everyone loves him!" << endl;
	cout << "2: Luigi, everyone knows he's the real hero." << endl;
	cout << "3: Kirby, the most adorable black hole in existence" << endl;
	cout << "4: Meta Knight, the blue puffball of an antihero" << endl;
	cout << "5: Link, the hero who's gotten tired of being called Zelda" << endl;
	cout << "6: Zelda, the most magical out of Nintendo's princesses" << endl;
	cout << "7: *insert 1/721 Pokemon here*" << endl;
	cout << "8: Fox...do a barrel/(aileron) roll" << endl;
	cout << "9: Samus, Nintendo's first female protagonist" << endl;
	cout << "What is your answer? (Enter 1-9): ";
	cin >> input;
	if (input > 0 && input <= 9) {
		switch (input) {
		case 1:
			SetMario();
			SetMario();
			break;
		case 2:
			SetMario();
			SetMario();
			break;
		case 3:
			SetKirby();
			SetKirby();
			break;
		case 4:
			SetKirby();
			SetKirby();
			break;
		case 5:
			SetHyrule();
			SetHyrule();
			break;
		case 6:
			SetHyrule();
			SetHyrule();
			break;
		case 7:
			SetPokemon();
			SetPokemon();
			break;
		case 8:
			SetFox();
			SetFox();
			break;
		case 9:
			SetSamus();
			SetSamus();
			break;
		}
	}
	else {
		do {
			cout << endl << "The number you have entered is invalid." << endl;
			cout << "Please reenter your answer: ";
			cin >> input;
		} while (input <= 0 && input > 9);
	}
}

void quiz::SetMario() {
	mario++;
}

void quiz::SetKirby() {
	kirby++;
}

void quiz::SetPokemon() {
	pokemon++;
}

void quiz::SetHyrule() {
	hyrule++;
}

void quiz::SetFox() {
	corneria++;
}

void quiz::SetSamus() {
	samus++;
}
int quiz::GetMario() {
	return mario;
}
int quiz::GetKirby() {
	return kirby;
}
int quiz::GetPokemon() {
	return pokemon;
}
int quiz::GetHyrule() {
	return hyrule;
}
int quiz::GetFox() {
	return corneria;
}

int quiz::GetSamus() {
	return samus;
}

void quiz::GetReward() {
	cout << endl;
	cout << "Final Results: " << endl;
	cout << "Super Mario: " << GetMario() << endl;
	cout << "Kirby: " << GetKirby() << endl;
	cout << "Legend of Zelda: " << GetHyrule() << endl;
	cout << "Pokemon: " << GetPokemon() << endl;
	cout << "Star Fox: " << GetFox() << endl;
	cout << "Metroid: " << GetSamus() << endl;
	if (GetMario() > GetFox() && GetMario() > GetKirby() && GetMario() > GetHyrule() && GetMario() > GetPokemon()
		&& GetMario() > GetSamus()) {
		cout << "It looks like you would be the most at home in...the Mushroom Kingdom with Mario!" << endl;
		cout << "Your reward is, the amazing: " << gigamushroom << endl;
	}
	else if (GetFox() > GetMario() && GetFox() > GetKirby() && GetFox() > GetHyrule() && GetFox() > GetPokemon()
		&& GetFox() > GetSamus()) {
		cout << "It looks like you would be the most at home in...Corneria with Fox!" << endl;
		cout << "Have fun piloting the: " << arwing << endl;
	}
	else if (GetKirby() > GetMario() && GetKirby() > GetFox() && GetKirby() > GetHyrule() && GetKirby() > GetPokemon()
		&& GetKirby() > GetSamus()) {
		cout << "It looks like you would be the most at home in...Dreamland with Kirby!" << endl;
		cout << "Have fun with Kirby's: " << warpstar << endl;
	}
	else if (GetHyrule() > GetMario() && GetHyrule() > GetFox() && GetHyrule() > GetKirby() && GetHyrule() > GetPokemon()
		&& GetHyrule() > GetSamus()) {
		cout << "It looks like you would be the most at home in...Hyrule with Link!" << endl;
		cout << "It's dangerous to go alone. Take this!: " << mastersword << endl;
	}
	else if (GetPokemon() > GetMario() && GetPokemon() > GetFox() && GetPokemon() > GetKirby() && GetPokemon() > GetHyrule()
		&& GetPokemon() > GetSamus()) {
		cout << "It looks like you would be the most at home in...the Pokemon Universe!" << endl;
		cout << "Take this with you on your journey: " << pokedex << endl;
	}
	else if (GetSamus() > GetMario() && GetSamus() > GetFox() && GetSamus() > GetKirby() && GetSamus() > GetHyrule()
		&& GetSamus() > GetPokemon()) {
		cout << "It looks like you would be the most at home in...the Metroid Universe with Samus!" << endl;
		cout << "Look out for metroids...too late. You got a: " << metroid << endl;
	}
	else {
		cout << "Well, it looks like you belong in multiple Nintendo Universes..." << endl;
		cout << "Here, I'll just give you this: " << masterhand << endl;
	}
}

void quiz::RunAll() {
	int input = 0;
	quiz Quiz;
	Quiz.In();
	Quiz.Question1(input);
	Quiz.Question2(input);
	Quiz.Question3(input);
	Quiz.Question4(input);
	Quiz.GetReward();
}