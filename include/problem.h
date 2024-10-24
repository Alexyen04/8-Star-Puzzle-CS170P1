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
        vector <vector <int> > intialState;
        vector <vector<int> > goalState;

    public : 
        Problem (vector <vector <int> > &intialState);

        void setDefaultState (); 


};

#endif