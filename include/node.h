#ifndef NODE_H
#define NODE_H

#include <vector>
#include <iostream>

using namespace std;

class Node {
    public: 
        vector <vector <int> > state;
        Node* parent;
        int depth;
        int gCost;
        int hCost;
        int totalCost;

        Node (vector<vector <int> >& state, Node* parent = nullptr, int depth = 0, int totalCost = 0);

        void printState() const;


    private: 


};

#endif