#include "../include/node.h"

using namespace std;


Node::Node(vector<vector<int>>& state, Node* parent, int depth, int totalCost)
    : state(state), parent(parent), depth(depth), totalCost(totalCost) {

}

Node* Node::getParent() const {
    return parent;
}

void Node::setParent(Node* p) {
    parent = p;
}

int Node::getDepth() const {
    return depth;
}

void Node::setDepth(int d) {
    depth = d;
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

void Node::printState() const{
    for (auto &x : state) {
        for (auto &y : x) { 
            cout << y << " ";
        }
        cout << endl;
    }

    cout << "Depth : " << depth << endl
        << "Cost : " << totalCost << endl;
}