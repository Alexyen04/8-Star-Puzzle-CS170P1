#ifndef SEARCH_H
#define SEARCH_H

#include "Problem.h"
#include "Node.h"

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
        void uniformCostSearch ();

        // Function to perform A* Search with Misplaced Tiles heuristic
        void aStarSearchMisplacedTiles ();

        // Function to perform A* Search with Euclidean Distance heuristic
        void aStarSearchEuclidean ();

    
    
};

#endif