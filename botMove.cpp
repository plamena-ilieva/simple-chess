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
* <cpp file with functions that calculate the bot's moves>
*
*/

#include "botMove.h"
#include "findCoordinates.h"
#include "printBoard.h"
#include "containsObstacles.h"
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

void remove (char *positions, int index, int &count) {
    positions[index] = positions[count-1];
    positions[count-1] = '\0';
    --count;
}

bool botMove (int size, vector<vector<char>> &board) {
    int* coordinates1 = findCoordinates('1', size, board);
    int* coordinates2 = findCoordinates('2', size, board);
    int* coordinatesK = findCoordinates('K', size, board);
    int* coordinatesP = findCoordinates('P', size, board);

    char positions[8] = {'0', '1', '2', '3', '4', '5', '6', '7'};
    int count = 8;

    //checking for invalid moves - in the range of the player's king
    // or out of the board
    if ((abs(coordinatesP[0] + 1 - coordinatesK[0]) <= 1 &&
            abs(coordinatesP[1] + 1 - coordinatesK[1]) <= 1) ||
            (coordinatesP[0] + 1 >= size || coordinatesP[1] + 1 >= size)) {
        remove(positions, 7, count);
    }

    if ((abs(coordinatesP[0] + 1 - coordinatesK[0]) <= 1 &&
            abs(coordinatesP[1] - coordinatesK[1]) <= 1) ||
            (coordinatesP[0] + 1 >= size)) {
        remove(positions, 6, count);
    }

    if ((abs(coordinatesP[0] + 1 - coordinatesK[0]) <= 1 &&
            abs(coordinatesP[1] - 1 - coordinatesK[1]) <= 1) ||
            (coordinatesP[0] + 1 >= size || coordinatesP[1] - 1 < 0)) {
        remove(positions, 5, count);
    }

    if ((abs(coordinatesP[0] - coordinatesK[0]) <= 1 &&
            abs(coordinatesP[1] + 1 - coordinatesK[1]) <= 1) ||
            (coordinatesP[1] + 1 >= size)) {
        remove(positions, 4, count);
    }

    if ((abs(coordinatesP[0] - coordinatesK[0]) <= 1 &&
            abs(coordinatesP[1] - 1 - coordinatesK[1]) <= 1) ||
            (coordinatesP[1] - 1 < 0)) {
        remove(positions, 3, count);
    }

    if ((abs(coordinatesP[0] - 1 - coordinatesK[0]) <= 1 &&
            abs(coordinatesP[1] + 1 - coordinatesK[1]) <= 1) ||
            (coordinatesP[0] - 1 < 0 || coordinatesP[1] + 1 >= size)) {
        remove(positions, 2, count);
    }

    if ((abs(coordinatesP[0] - 1 - coordinatesK[0]) <= 1 &&
            abs(coordinatesP[1] - coordinatesK[1]) <= 1) ||
            (coordinatesP[0] - 1 < 0)) {
        remove(positions, 1, count);
    }

    if ((abs(coordinatesP[0] - 1 - coordinatesK[0]) <= 1 &&
            abs(coordinatesP[1] - 1 - coordinatesK[1]) <= 1) ||
            (coordinatesP[0] - 1 < 0 || coordinatesP[1] - 1 < 0)) {
        remove(positions, 0, count);
    }

    //checking for an opportunity to take a player's rook
    if (coordinates1[0] != -1 &&
            (abs(coordinates1[0] - coordinatesP[0]) <= 1 &&
            abs(coordinates1[1] - coordinatesP[1]) <= 1 &&
            coordinates1[0] != coordinates2[0] &&
            coordinates1[1] != coordinates2[1] &&
            !(abs(coordinatesK[0] - coordinates1[0]) <= 1 &&
            abs(coordinatesK[1] - coordinates1[1]) <= 1))) {
        board[coordinates1[0]][coordinates1[1]] = 'P';
        board[coordinatesP[0]][coordinatesP[1]] = '_';
        printBoard(size, board);
        delete[] coordinates1;
        delete[] coordinatesK;
        delete[] coordinatesP;
        if (coordinates2[0] == -1) {
            delete[] coordinates2;
            return true;
        }
        delete[] coordinates2;
        return false;
    }

    if (coordinates2[0] != -1 &&
            (abs(coordinates2[0] - coordinatesP[0]) <= 1 &&
            abs(coordinates2[1] - coordinatesP[1]) <= 1 &&
            coordinates1[0] != coordinates2[0] &&
            coordinates1[1] != coordinates2[1] &&
            !(abs(coordinatesK[0] - coordinates2[0]) <= 1 &&
            abs(coordinatesK[1]-coordinates2[1]) <= 1))) {
        board[coordinates2[0]][coordinates2[1]] = 'P';
        board[coordinatesP[0]][coordinatesP[1]] = '_';
        printBoard(size, board);
        delete[] coordinates2;
        delete[] coordinatesK;
        delete[] coordinatesP;
        if (coordinates1[0] == -1) {
            delete[] coordinates1;
            return true;
        }
        delete[] coordinates1;
        return false;
    }

    //generating a random move and checking whether a rook can take
    //bot's king
    int* newCoordinatesP = new int[2];
    do {
        srand(time(0));
        int index = rand() % count;
        char position = positions[index];
        remove(positions, index, count);

        switch (position) {
            case '0':
                newCoordinatesP[0] = coordinatesP[0]-1;
                newCoordinatesP[1] = coordinatesP[1]-1;
                break;
            case '1':
                newCoordinatesP[0] = coordinatesP[0]-1;
                newCoordinatesP[1] = coordinatesP[1];
                break;
            case '2':
                newCoordinatesP[0] = coordinatesP[0]-1;
                newCoordinatesP[1] = coordinatesP[1]+1;
                break;
            case '3':
                newCoordinatesP[0] = coordinatesP[0];
                newCoordinatesP[1] = coordinatesP[1]-1;
                break;
            case '4':
                newCoordinatesP[0] = coordinatesP[0];
                newCoordinatesP[1] = coordinatesP[1]+1;
                break;
            case '5':
                newCoordinatesP[0] = coordinatesP[0]+1;
                newCoordinatesP[1] = coordinatesP[1]-1;
                break;
            case '6':
                newCoordinatesP[0] = coordinatesP[0]+1;
                newCoordinatesP[1] = coordinatesP[1];
                break;
            case '7':
                newCoordinatesP[0] = coordinatesP[0]+1;
                newCoordinatesP[1] = coordinatesP[1]+1;
                break;
            default:
                break;
        }

    } while (count > 0 && ((abs(coordinatesK[0] - newCoordinatesP[0]) <= 1 &&
                abs(coordinatesK[1] - newCoordinatesP[1]) <= 1) ||
            (newCoordinatesP[0] == coordinates1[0] ||
                newCoordinatesP[1] == coordinates1[1] &&
                !containsObstacles(board, coordinates1, coordinatesP)) ||
            (newCoordinatesP[0] == coordinates2[0] ||
                newCoordinatesP[1] == coordinates2[1] &&
                !containsObstacles(board, coordinates2, coordinatesP))));

    //moving bot's king
    board[coordinatesP[0]][coordinatesP[1]]='_';
    board[newCoordinatesP[0]][newCoordinatesP[1]]='P';
    printBoard(size, board);
    delete[] coordinates1;
    delete[] coordinates2;
    delete[] coordinatesK;
    delete[] coordinatesP;
    delete[] newCoordinatesP;
    return false;
}