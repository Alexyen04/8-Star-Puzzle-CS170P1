#ifndef SEARCH_H
#define SEARCH_H

#include "problem.h"
#include "node.h"
#include <vector>
#include <queue>
#include <iostream>
#include <string>
#include <algorithm>
#include <set>

using namespace std;

class Search {
    private :
        Problem problem;
        int searchType;

    public :

        Search (const Problem &problem);

        Search(const Problem &problem, int searchType);

        void generalSearch(Problem, int);

        /*

        // Function to perform Uniform Cost Search
        queue<Node> uniformCost (Problem);

        // Function to perform A* Search with Misplaced Tiles heuristic
        queue<Node> aStarSearchMisplacedTiles (Problem);

        // Function to perform A* Search with Euclidean Distance heuristic
        queue<Node> aStarSearchEuclidean (Problem); 
        
        */
        
};

#endif