/**
*
* Solution to course project # 12
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2021/2022
*
* @author Plamena Ilieva
* @idnumber 6MI0600020
* @compiler GCC
*
* <cpp file with a function that finds the coordinates of a given pawn>
*
*/

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
    //if pawn is not found - returns (-1, -1)
    return coordinates;
}
