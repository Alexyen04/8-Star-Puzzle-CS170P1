#include "../include/node.h"

#include <utility>
#include <vector>
#include <iostream>
#include <string>
#include <cmath>


using namespace std;

//constructors

Node::Node(const vector<vector<int>>& state, Node* parent) 
    : state(state), parent(parent), g(0), h(0), totalCost(g + h), blankCoord({0, 0}) {}

Node::Node(const vector<vector<int>>& state, Node* parent, int totalCost, pair<int, int> coords) 
    : state(state), parent(parent), g(0), h(0), totalCost(totalCost), blankCoord(coords) {}



//setters and getters

Node* Node::getParent() const {
    return parent;
}

void Node::setState(vector <vector<int> > s) {
    state = s;
}

void Node::setParent(Node* p) {
    parent = p;
}

int Node::getG() const {
    return g;
}

void Node::setG(int gValue) {
    g = gValue;
}

int Node::getH() const {
    return h;
}

void Node::setH(int hValue) {
    h = hValue;
}

int Node::getTotalCost() const {
    return totalCost;
}

void Node::setTotalCost(int cost) {
    totalCost = cost;
}


//functions 

void Node::printState() const{
    for (auto &x : state) {
        for (auto &y : x) { 
            cout << y << " ";
        }
        cout << endl;
    }
    cout << "Depth : " << g << endl
        << "Heuristic : " << h << endl
        << "Total Cost : " << g + h << endl;
}

void Node::findBlank() {
    for (int i = 0; i < state.size(); ++i) {
        for (int j = 0; j < state[i].size(); ++j) {
            if (state[i][j] == 0) {
                blankCoord = make_pair(i,j);
            }
        }
    }
}

vector <Node*> Node::generateChildren() {
    findBlank();
    vector <Node*> listOfChildren; 

    //UP
    if (blankCoord.first - 1 >= 0) {
        vector <vector <int> > newState = cloneState();
        swap(newState[blankCoord.first][blankCoord.second], newState[blankCoord.first - 1][blankCoord.second]); //swaps blank UP 1
        Node* child = new Node(newState, this); //creates a child node
        child->setG(this->getG() + 1); //increases depth by 1
        //child->setH(child->calculateManhattanDistance()); //calculates the manhattan for the newly generated child
        listOfChildren.push_back(child); 
    }

    //DOWN
    if (blankCoord.first + 1 <= 2) {
        vector <vector <int> > newState = cloneState();
        swap(newState[blankCoord.first][blankCoord.second], newState[blankCoord.first + 1][blankCoord.second]); //swaps blank DOWN 1
        Node* child = new Node(newState, this); //creates a child node
        child->setG(this->getG() + 1); //increases depth by 1
        //child->setH(child->calculateManhattanDistance()); //calculates the manhattan for the newly generated child
        listOfChildren.push_back(child); 
    }

    //LEFT
    if (blankCoord.second - 1 >= 0) {
        vector <vector <int> > newState = cloneState();
        swap(newState[blankCoord.first][blankCoord.second], newState[blankCoord.first][blankCoord.second - 1]); //swaps blank LEFT 1
        Node* child = new Node(newState, this); //creates a child node
        child->setG(this->getG() + 1); //increases depth by 1
        //child->setH(child->calculateManhattanDistance()); //calculates the manhattan for the newly generated child
        listOfChildren.push_back(child); 
    }

    //RIGHT
    if (blankCoord.second + 1 <= 2) {
        vector <vector <int> > newState = cloneState();
        swap(newState[blankCoord.first][blankCoord.second], newState[blankCoord.first][blankCoord.second + 1]); //swaps blank RIGHT 1
        Node* child = new Node(newState, this); //creates a child node
        child->setG(this->getG() + 1); //increases depth by 1
        //child->setH(child->calculateManhattanDistance()); //calculates the manhattan for the newly generated child
        listOfChildren.push_back(child); 
    }

    return listOfChildren;
}  

bool Node::isGoal(const vector<vector<int>>& goalState) const {
    return (this->state == goalState);
}

/*
int Node::calculateManhattanDistance() {
    int distance = 0;
    int currentNum;

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            currentNum = this->state[i][j];
            if (currentNum != 0) {
                distance += abs(i - GOALMAP.at(currentNum).first) + abs(j - GOALMAP.at(currentNum).second);
            }
        }
    }

    return distance;
}
*/

int Node::calculateMisplacedTiles() {
    int count = 0;
    for (int i = 0; i < state.size(); ++i) {
        for (int j = 0; j < state[i].size(); ++j) {
            // Check that tile is not the blank tile (0)
            if (state[i][j] != 0) {
                auto tilePosition = GOALMAP.at(state[i][j]); // Get goal position as a pair
                //if the tile is not in its goal position, add one to misplace tiles count 
                if (tilePosition.first != i || tilePosition.second != j) {
                    count++;
                }
            }
        }
    }
    return count;
} 

int Node::calculateEuclideanDistance() {
    double distance = 0.0;
    for (int i = 0; i < state.size(); ++i) {
        for (int j = 0; j < state[i].size(); ++j) {
            int currNum = state[i][j];
            if (currNum != 0) { // Ignore the blank tile
                //gets positions of the goal tile location
                int goalI = GOALMAP.at(currNum).first;
                int goalJ = GOALMAP.at(currNum).second; 
                // Calculate Euclidean distance
                distance += sqrt(pow(i - goalI, 2) + pow(j - goalJ, 2));
            }
        }
    }
    return distance;
}

vector<vector<int>> Node::cloneState() const {
    return this->state;
}

bool Node::operator==(const Node& other) const {
    return (this->state == other.state);
}
