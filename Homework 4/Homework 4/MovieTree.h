#pragma once
#ifndef MOVIETREE_HPP
#define MOVIETREE_HPP

#include <iostream>
#include <string>
using namespace std;

struct MovieNode
{
    int ranking;
    std::string title;
    int year;
    int quantity;
    MovieNode *parent;
    MovieNode *leftChild;
    MovieNode *rightChild;

    MovieNode() {};

    MovieNode(int in_ranking, std::string in_title, int in_year, int in_quantity)
    {
        ranking = in_ranking;
        title = in_title;
        year = in_year;
        quantity = in_quantity;
    }

};

class MovieTree
{
public:
    MovieTree();
    ~MovieTree();
    void printMovieInventory();
    void addMovieNode(int ranking, std::string title, int releaseYear, int quantity);
    void findMovie(std::string title);
    void rentMovie(std::string title);

protected:
private:
    void printMovieInventory(MovieNode * node);
    MovieNode* search(std::string title);
    MovieNode *root;

};

#endif // MOVIETREE_HPP
