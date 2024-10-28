#include "../include/problem.h"


using namespace std;

Problem::Problem(const vector <vector <int> > &intial) {
    initialState = intial;

    goalState = {   {1, 2, 3}, 
                    {4, 5, 6}, 
                    {7, 8, 0}   };
}


void Problem::setUserState (const vector <vector <int> > &input) {
    initialState = input;
}

void Problem::setDefaultState () {
    initialState = {     {1, 0, 3}, 
                        {4, 2, 6},
                        {7, 5, 8}     };
}

vector <vector <int> > Problem::getInitialState() const{
    return initialState;
}

vector <vector <int> > Problem::getGoalState() const {
    return goalState;
}


