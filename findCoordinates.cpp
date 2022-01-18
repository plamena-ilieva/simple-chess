#include <vector>
#include "findCoordinates.h"
using namespace std;

int* findCoordinates(char pawn, int size, vector<vector<char>> &board) {
    int *coordinates = new int[2];
    coordinates[0] = coordinates[1] = -1;
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            if (board[i][j] == pawn){
                coordinates[0] = i;
                coordinates[1] = j;
                return coordinates;
            }
        }
    }
    return coordinates;
}
