#ifndef NODE_H
#define NODE_H

#include "goal.h"
#include <vector>
#include <iostream>
#include <utility>
#include <algorithm>

using namespace std;

class Node {
    private :   
        vector <vector <int> > state; //state of Node
        Node* parent; 
        int manhattanD;

        // f(n) = g(n) + h(n)
        int g; //depth or g(n)
        int h;  //heuristic or h(n)
        int totalCost; //f(n)

        pair <int, int> blankCoord; //coords of the BLANK or 0  

        const vector <pair <int, int> > moves = {
            {-1,0}, //UP
            {1,0}, //DOWN
            {0,-1}, //LEFT
            {0,1} //RIGHT
        };

    public :
        Node () : state(3, vector<int>(3, 0)), parent(nullptr), manhattanD(0), g(0), h(0), totalCost(0), blankCoord({0, 0}) {}

        Node (const vector<vector<int>>& state, Node* parent); 

        Node (const vector<vector<int>>& state, Node* parent, int totalCost, pair<int, int> coords);
        
        Node* getParent() const; 

        void setState(vector <vector<int> >);
        void setParent(Node *);

        int getG() const;
        void setG(int);

        int getH() const;
        void setH(int);

        int getTotalCost() const;
        void setTotalCost(int);

        void printState() const;

        void findChildren(); 

        void findBlank();

        vector <Node*> generateChildren();  //todo

        bool isGoal(const vector<vector<int>>& goalState) const; //compares if state is the same as the GOAL

        //int calculateManhattanDistance(); //calculates manhattan distance for the grid

        int calculateMisplacedTiles(); // calculates # of misplaced tiles

        int calculateEuclideanDistance(); // calculates total eucliedean distance

        vector<vector<int>> cloneState() const; //creates a new state

        bool operator==(const Node& other) const; //compares if two Nodes have the same state

};

#endif