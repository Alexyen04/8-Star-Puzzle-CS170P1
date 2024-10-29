#ifndef PROBLEM_H
#define PROBLEM_H

#include <vector>
#include <iostream>
#include <unordered_set>
#include <cmath>
#include <queue>
#include <algorithm>

using namespace std;

class Problem {
    private : 
        vector <vector <int> > initialState;
        vector <vector<int> > goalState;

    public : 

        Problem() : 
            initialState({{1, 2, 3}, {4, 8, 0}, {7, 6, 5}}), 
            goalState({{1, 2, 3}, {4, 5, 6}, {7, 8, 0}})
        {}
        
        Problem (const vector <vector <int> > &intialState);

        void setUserState (const vector <vector <int> > &);

        void setDefaultState (); 

        vector <vector <int> > getInitialState() const;

        vector <vector <int> > getGoalState() const;

};
#endif