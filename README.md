# 8-Puzzle Solver

## Project Overview
A C++ implementation of the 8-Puzzle solver using advanced search algorithms for CS170 Project 1.

## Algorithms
- Uniform Cost Search
- A* Search with Misplaced Tile Heuristic
- A* Search with Euclidean Distance Heuristic

## Project Structure
### Header Files
- `goal.h`: Defines goal state mapping
- `node.h`: Node class for search tree implementation
- `problem.h`: Manages initial and goal states
- `search.h`: Implements search algorithms

### Key Classes
- `Node`: Represents puzzle states
  - Tracks state, parent node
  - Calculates heuristics
  - Generates child states
- `Problem`: Manages puzzle configuration
- `Search`: Implements search algorithms

## Features
- Flexible puzzle state input
- Multiple search algorithm options
- Heuristic-based state exploration
- Detailed state tracking

## Prerequisites
- C++ Compiler (C++11 or later)
- Standard Template Library (STL)

## Compilation
```bash
# Example compilation command (adjust as needed)
g++ -std=c++11 main.cpp node.cpp problem.cpp search.cpp -o puzzle_solver
```

## Usage
```bash
# Run the executable
./puzzle_solver
```

### Input Options
1. Use default puzzle configuration
2. Enter custom puzzle state
3. Choose search algorithm

## Heuristic Methods
- Misplaced Tiles
- Euclidean Distance
- Uniform Cost Search

## Performance Metrics
- Nodes expanded
- Solution depth
- Maximum queue size
