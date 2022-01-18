#include "containsObstacles.h"
#include <vector>
using namespace std;

bool containsObstacles(vector<vector<char>> &board, const int* startCoordinates, const int* endCoordinates) {
    //checking for obstacles in the current row
    if (startCoordinates[0] == endCoordinates[0]) {
        int min = (startCoordinates[1] < endCoordinates[1] ? startCoordinates[1] + 1 : endCoordinates[1]);
        int max = (startCoordinates[1] > endCoordinates[1] ? startCoordinates[1] - 1 : endCoordinates[1]);
        for (int i = min; i <= max; ++i) {
            if (board[startCoordinates[0]][i] != '_' && board[startCoordinates[0]][i] != 'P') {
                return true;
            }
        }
    }

    //checking for obstacles in the current column
    else if (startCoordinates[1] == endCoordinates[1]) {
        int min = (startCoordinates[0] < endCoordinates[0] ? startCoordinates[0] + 1 : endCoordinates[0]);
        int max = (startCoordinates[0] > endCoordinates[0] ? startCoordinates[0] - 1 : endCoordinates[0]);
        for (int i = min; i <= max; ++i) {
            if (board[i][startCoordinates[1]] != '_' && board[i][startCoordinates[1]] != 'P') {
                return true;
            }
        }
    }
    return false;
}
