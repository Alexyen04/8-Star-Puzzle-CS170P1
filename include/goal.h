#ifndef GOAL_H
#define GOAL_H

#include <unordered_map>
#include <utility>

extern const std::unordered_map<int, std::pair<int, int>> goalState = {
    //{Value, {x,y}} <- COORDS

    {0, {2, 2}}, 
    {1, {0, 0}},
    {2, {0, 1}},
    {3, {0, 2}},
    {4, {1, 0}},
    {5, {1, 1}},
    {6, {1, 2}},
    {7, {2, 0}},
    {8, {2, 1}},

};

#endif
