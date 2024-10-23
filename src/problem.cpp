#include "../include/problem.h"

using namespace std;

Problem::Problem(vector <vector <int> > &intial) {
    intialState = intial;
    goalState = {   {1, 2, 3}, 
                    {4, 5, 6}, 
                    {7, 8, 0}   };
}



void Problem::setDefaultState () {
    intialState = {     {1, 0, 3}, 
                        {4, 2, 6},
                        {7, 5, 8}     };
}

