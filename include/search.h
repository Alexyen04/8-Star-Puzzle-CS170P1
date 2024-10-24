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

        // Function to perform Uniform Cost Search
        void uniformCostSearch (Problem);

        // Function to perform A* Search with Misplaced Tiles heuristic
        void aStarSearchMisplacedTiles (Problem);

        // Function to perform A* Search with Euclidean Distance heuristic
        void aStarSearchEuclidean (Problem);

    
    
};

#endif