#include "../include/node.h"

#include <utility>
#include <vector>
#include <iostream>
#include <string>
#include <cmath>


using namespace std;


Node::Node(vector<vector<int>>& state, Node* parent, int totalCost, pair<int, int> coords)
    : state(state), parent(parent), totalCost(totalCost), blankCoord(coords) {

}

//setters and getters

Node* Node::getParent() const {
    return parent;
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
        << "Cost : " << totalCost << endl;
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
    vector <Node*> listOfChildren; 
    Node child;
    
    for (auto &x : moves ) {
        
    }


}  

bool Node::isGoal(const vector<vector<int>>& goalState) const {
    return (this->state == goalState);
}

int Node::calculateManhattanDistance() {
    int distance = 0;
    int currentNum;

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            currentNum = this->state[i][j];
            if (currentNum != 0) {
                distance += abs(i - goalState.at(currentNum).first) + abs(j - goalState.at(currentNum).second);
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
