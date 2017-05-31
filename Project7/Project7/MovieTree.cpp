/*
Sherry Nguyen
Homework #5
Elle Boese
*/
#include <iostream>
#include <string>
#include <fstream>
#include "MovieTree.h"
using namespace std;

MovieTree::MovieTree(){
    root = NULL;
}

MovieTree::~MovieTree(){
    DeleteAll(root);
}

void MovieTree::printMovieInventory() {
   return printMovieInventory(root);
}

int MovieTree::countMovieNodes() {
    int *num = 0;
    countMovieNodes(root, num);
    return *num;
}

void MovieTree::deleteMovieNode(std::string title) {
    //find the node
    MovieNode* temp = root;
        while (temp != NULL) {
            if (title < temp->title) {
                temp = temp->leftChild;
            }
            else if (title>temp->title) {
                temp = temp->rightChild;
            }
            else {
                cout << "Movie not Found." << endl;
                break;
            }
        }//we have found the node we want to delete
    if (temp != NULL) {
        //if it has no children
        if (temp->leftChild == NULL && temp->rightChild == NULL) {
            //cout << "None" << endl;
            //if the temp is a leftChild child
            if (temp->parent->leftChild == temp) {
                temp->parent->leftChild = NULL;
            }
            //if the temp is a rightChild child
            else {
                temp->parent->rightChild = NULL;
            }
            delete temp;
        }
        //if it only has a leftChild child
        else if (temp->rightChild == NULL) {
            //cout << "leftChild" << endl;
            if (temp->parent->leftChild == temp) {
                temp->parent->leftChild = temp->leftChild;
                temp->leftChild->parent = temp->parent;
            }
            else {
                temp->parent->rightChild = temp->rightChild;
                temp->rightChild->parent = temp->parent;
            }
            delete temp;
        }
        //if it only has a rightChild child
        else if (temp->leftChild == NULL) {
            //cout << "rightChild" << endl;
            if (temp->parent->leftChild == temp) {//he didn't change the first two leftChilds into rightChilds here
                temp->parent->leftChild = temp->rightChild;
                temp->rightChild->parent = temp->parent;
            }
            else {
                temp->parent->leftChild = temp->leftChild;
                temp->leftChild->parent = temp->parent;
            }
        }
        //if it has two children   
        else {
            //cout << "Two" << endl;
            MovieNode* min = temp->rightChild;
            while (min->leftChild != NULL) {
                min = min->leftChild;
            }
            temp->title = min->title;
            if (min->rightChild != NULL) {
                min->rightChild->parent = min->parent;
            }
            if (min->parent->leftChild == min) {
                min->parent->leftChild = min->rightChild;
            }
            else {
                min->parent->rightChild = min->rightChild;
            }
            delete min;
        }
    }
}

void MovieTree::addMovieNode(int ranking, std::string title, int releaseYear, int quantity) {
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

void MovieTree::findMovie(std::string title) {
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

void MovieTree::rentMovie(std::string title) {

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

void MovieTree::DeleteAll(MovieNode * node) { //use this for the post-order traversal deletion of the tree
    if (node == NULL) {
    }
    if (node->leftChild != NULL) {
        DeleteAll(node->leftChild);
    }
    if (node->rightChild != NULL) {
        DeleteAll(node->rightChild);
    }
    delete node; 
}

void MovieTree::printMovieInventory(MovieNode * node) {
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

void MovieTree::countMovieNodes(MovieNode *node, int *c) {
    c = c++;
    countMovieNodes(node->leftChild, c);
    countMovieNodes(node->rightChild, c);
}

MovieNode* MovieTree::search(std::string title) {

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

MovieNode* MovieTree::treeMinimum(MovieNode *node) {
    MovieNode *current = node;
    while (current->leftChild != NULL) {
        current = current->leftChild;
    }
    return current;
}