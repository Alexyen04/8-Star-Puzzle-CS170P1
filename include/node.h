#ifndef NODE_H
#define NODE_H

#include <vector>
#include <iostream>

using namespace std;

class Node {
    private :   
        vector <vector <int> > state;
        Node* parent;
        int depth;
        int g;
        int h;
        int totalCost;

        Node (vector<vector <int> >& state, Node* parent = nullptr, int depth = 0, int totalCost = 0);

    public :
        Node* getParent() const; 
        void setParent(Node *);

        int getDepth() const;
        void setDepth(int);

        int getG() const;
        void setG(int);

        int getH() const;
        void setH(int);

        int getTotalCost() const;
        void setTotalCost(int);

        void printState() const;

};

#endif