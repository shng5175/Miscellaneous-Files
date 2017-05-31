/*
Sherry Nguyen
Homework #4
Elle Boese
*/
#include <iostream>
#include <string>
#include <fstream>
#include "MovieTree.hpp"
using namespace std;

MovieTree::MovieTree()
{
    root = NULL;
}

MovieTree::~MovieTree()
{

}

void MovieTree::printMovieInventory()
{
    return printMovieInventory(root);
}

void MovieTree::addMovieNode(int ranking, std::string title, int releaseYear, int quantity)
{
    MovieNode *Mer = new MovieNode;
    Mer->ranking = ranking;
    Mer->title = title;
    Mer->year = releaseYear;
    Mer->quantity = quantity;
    Mer->leftChild = NULL;
    Mer->rightChild = NULL;
    if (root == NULL) 
    {
        root = Mer;
        Mer->parent = NULL;
    }
    MovieNode *current = root;
    if (title < current->title)
    {
        while (current != NULL)
        {
            if (title < current->title)
            {
                if (current->leftChild != NULL)
                {
                    current = current->leftChild;
                }
                else
                {
                    current->leftChild = Mer;
                    Mer->parent = current;
                    return;
                }
            }
            else
            {
                if (current->rightChild != NULL)
                {
                    current = current->rightChild;
                }
                else
                {
                    current->rightChild = Mer;
                    Mer->parent = current;
                    return;
                }
            }
        }
    }
    else if (title > current->title)
    {
        while (current != NULL)
        {
            if (title < current->title)
            {
                if (current->leftChild != NULL)
                {
                    current = current->leftChild;
                }
                else
                {
                    current->leftChild = Mer;
                    Mer->parent = current;
                    return;
                }
            }
            else
            {
                if (current->rightChild != NULL)
                {
                    current = current->rightChild;
                }
                else
                {
                    current->rightChild = Mer;
                    Mer->parent = current;
                    return;
                }
            }
        }
    }

}

void MovieTree::findMovie(std::string title)
{
    MovieNode *foundMovie = search(title);
    //cout << foundMovie << endl << endl << NULL << endl;
    if (foundMovie != NULL)
    {
        cout << "Movie Info:" << endl;
        cout << "===========" << endl;
        cout << "Ranking:" << foundMovie->ranking << endl;
        cout << "Title:" << foundMovie->title << endl;
        cout << "Year:" << foundMovie->year << endl;
        cout << "Quantity:" << foundMovie->quantity << endl;
    }
    else
    {
        cout << "Movie not found." << endl;
    }
    return;
}

void MovieTree::rentMovie(std::string title)
{
    MovieNode *foundMovie = search(title);
    //cout << foundMovie << endl << endl;
    if (foundMovie != NULL)
    {
        if (foundMovie->quantity == 0)
        {
            cout << "Movie out of Stock." << endl;
        }
        else
        {
            foundMovie->quantity = foundMovie->quantity - 1;
            cout << "Movie has been rented." << endl;
            cout << "Movie Info:" << endl;
            cout << "===========" << endl;
            cout << "Ranking:" << foundMovie->ranking << endl;
            cout << "Title:" << foundMovie->title << endl;
            cout << "Year:" << foundMovie->year << endl;
            cout << "Quantity:" << foundMovie->quantity << endl;
        }
    }
    else 
    {
        cout << "Movie not found." << endl;
    }
    return;
}

void MovieTree::printMovieInventory(MovieNode * node)
{
    if (node == NULL) 
    {
        return;
    }
    else {
        printMovieInventory(node->leftChild);
        cout << "Movie: " << node->title << " " << node->quantity << endl;
        printMovieInventory(node->rightChild);
    }
}

MovieNode* MovieTree::search(std::string title)
{
    MovieNode* temp = root;
    while (temp != NULL)
    {
        if (temp->title == title)
        {
            return temp;
        }
        else if (temp->title > title)
        {
            if (temp->leftChild != NULL)
            {
                temp = temp->leftChild;
            }
            else
            {
                temp = NULL;
                return temp;
            }
        }
        else if (temp->title < title)
        {
            if (temp->rightChild != NULL)
            {
                temp = temp->rightChild;
            }
            else
            {
                temp = NULL;
                return temp;
            }
        }
    }
    temp = NULL;
    return temp;
}