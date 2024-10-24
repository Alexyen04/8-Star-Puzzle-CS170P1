#ifndef SEARCH_H
#define SEARCH_H

#include "problem.h"
#include "node.h"
#include <vector>
#include <queue>
#include <iostream>
#include <string>

using namespace std;

class Search {
    private :
        Problem problem;

    public :

        Search (const Problem &problem);

        void generalSearch(Problem, queue<Node>);

        // Function to perform Uniform Cost Search
        queue<Node> uniformCost (Problem);

        // Function to perform A* Search with Misplaced Tiles heuristic
        queue<Node> aStarSearchMisplacedTiles (Problem);

        // Function to perform A* Search with Euclidean Distance heuristic
        queue<Node> aStarSearchEuclidean (Problem); 
};

#endif