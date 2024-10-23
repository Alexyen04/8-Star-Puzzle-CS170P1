#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main () {
    int input = 0;
    int algo = 0;

    cout << "Welcome to XXX 8 puzzle solver." << endl;

    while (input != 1 && input != 2) {
        cout << "Type '1' to use default puzzle or '2' to enter your own puzzle." << endl;
        cin >> input;
    }

    if (input == 2) {
        cout << "Enter your puzzle." << endl << "Format for each row should be 'x y z', space inbetween each number."
            << "Use '0' to represent a blank." << endl;

        //input here NEEDED
    }

    //Algorithm Choice 
    cout << "Enter choice of algorithm. (Enter in Number)" << endl 
        << "Uniform Cost Search (1)" << endl
        << "A* with the Misplaced Tile heuristic (2)" << endl
        << "A* with the Euclidean distance heuristic (3)" << endl;

    cin >> algo;

    


    





    return 0;
}