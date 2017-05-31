/*
Sherry Nguyen
Homework #4
Elle Boese
*/
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include "MovieTree.hpp"
#include "MovieTree.cpp"
using namespace std;

int main(int argc, char* argv[])
{
    ifstream inFile;
    string data;
    int rank;
    string title;
    int releaseYear;
    int num;
    MovieTree merp;
    string movie;

    inFile.open(argv[1]);
    //inFile.open("HW4-Movies.txt");
    while (!inFile.eof())
    {
        //cout << "opened successfully" << endl;
        getline(inFile, data, ',');
        stringstream ss(data);
        ss >> rank;
        getline(inFile, title, ',');
        stringstream mer(title);
        getline(inFile, data, ',');
        stringstream marp(data);
        marp >> releaseYear;
        getline(inFile, data);
        stringstream meh(data);
        meh >> num;
        //cout << rank << title << releaseYear << num << endl;
        merp.addMovieNode(rank, title, releaseYear, num);
    }

    inFile.close();//close the file

    bool quit = false;
    string s_input;
    int input;

    // loop until the user quits
    while (!quit)
    {
        cout << "======Main Menu======" << endl;
        cout << "1. Find a movie" << endl;
        cout << "2. Rent a movie" << endl;
        cout << "3. Print the inventory" << endl;
        cout << "4. Quit" << endl;

        // read in input, assuming a number comes in
        getline(cin, s_input);
        input = stoi(s_input);
        switch (input)
        {
        case 1: 	//find a movie
            cout << "Enter title:" << endl;
            getline(cin, movie);
            merp.findMovie(movie);
            break;

        case 2:		// rent a movie
            cout << "Enter title:" << endl;
            getline(cin, movie);
            merp.rentMovie(movie);
            break;

        case 3: //print the inventory
            merp.printMovieInventory();
            break;

        case 4: 	// quit
            quit = true;
            cout << "Goodbye!" << endl;
            return 0;
            break;

        default: 	// invalid input
            cout << "Invalid Input" << endl;
            break;
        }
    }
}