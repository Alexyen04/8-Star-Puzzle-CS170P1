#include "../include/search.h"

void Search::generalSearch(Problem puzzle, queue<Node> searchFunction) {
    //nodes = make-queue(make-node(problem.initial state))
    //loop do
        //if empty(nodes) then return "failure"
            //node = remove-front (nodes)
        //if problem.goal-test(node.state) succeeds then return node
            //nodes = queueueing-function(nodes, expand(node, problem.operators))
        //end
}

// Function to perform Uniform Cost Search
queue<Node> Search::uniformCost (Problem) {

}

// Function to perform A* Search with Misplaced Tiles heuristic
queue<Node> Search::aStarSearchMisplacedTiles (Problem) {

}

// Function to perform A* Search with Euclidean Distance heuristic
queue<Node> Search::aStarSearchEuclidean (Problem) {

}




