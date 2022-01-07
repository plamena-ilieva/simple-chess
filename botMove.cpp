#include "botMove.h"
#include "findCoordinates.h"
#include "printBoard.h"
#include "containsObstacles.h"
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

bool botMove(int size, vector<vector<char>> &board){
    int* coordinates1 = findCoordinates('1', size, board);
    int* coordinates2 = findCoordinates('2', size, board);
    int* coordinatesK = findCoordinates('K', size, board);
    int* coordinatesP = findCoordinates('P', size, board);

    if (abs(coordinatesK[0]-coordinatesP[0])<=1 &&
        abs(coordinatesK[1]-coordinatesP[1])<=1){
        board[coordinatesK[0]][coordinatesK[1]] = 'P';
        board[coordinatesP[0]][coordinatesP[1]] = '_';
        printBoard(size, board);
        delete[] coordinates1;
        delete[] coordinates2;
        delete[] coordinatesK;
        delete[] coordinatesP;
        return true;
    }

    if (abs(coordinates1[0]-coordinatesP[0])<=1 &&
            abs(coordinates1[1]-coordinatesP[1])<=1 &&
            coordinates1[0] != coordinates2[0] &&
            coordinates1[1] != coordinates2[1] &&
            !(abs(coordinatesK[0]-coordinates1[0])<=1 &&
            abs(coordinatesK[1]-coordinates1[1])<=1)){
        board[coordinates1[0]][coordinates1[1]] = 'P';
        board[coordinatesP[0]][coordinatesP[1]] = '_';
        printBoard(size, board);
        delete[] coordinates1;
        delete[] coordinates2;
        delete[] coordinatesK;
        delete[] coordinatesP;
        return false;
    }

    if (abs(coordinates2[0]-coordinatesP[0])<=1 &&
        abs(coordinates2[1]-coordinatesP[1])<=1 &&
        coordinates1[0] != coordinates2[0] &&
        coordinates1[1] != coordinates2[1] &&
        !(abs(coordinatesK[0]-coordinates2[0])<=1 &&
          abs(coordinatesK[1]-coordinates2[1])<=1)){
        board[coordinates2[0]][coordinates2[1]] = 'P';
        board[coordinatesP[0]][coordinatesP[1]] = '_';
        printBoard(size, board);
        delete[] coordinates1;
        delete[] coordinates2;
        delete[] coordinatesK;
        delete[] coordinatesP;
        return false;
    }

    int* newCoordinatesP = new int[2];
    int count = 8;
    char positions[8] = {'0', '1', '2', '3', '4', '5', '6', '7'};
    bool isCorrect = true;
    do {
        srand(time(0));
        int index = rand() % count;
        int position = positions[index];
        positions[index] = positions[count-1];
        positions[count-1] = '\0';
        --count;
        isCorrect = true;

        switch (position) {
            case '0':
                if (coordinatesP[0]-1 < 0 || coordinatesP[1]-1 < 0) {
                    isCorrect = false;
                    break;
                }
                newCoordinatesP[0] = coordinatesP[0]-1;
                newCoordinatesP[1] = coordinatesP[1]-1;
                break;
            case '1':
                if (coordinatesP[0]-1 < 0) {
                    isCorrect = false;
                    break;
                }
                newCoordinatesP[0] = coordinatesP[0]-1;
                newCoordinatesP[1] = coordinatesP[1];
                break;
            case '2':
                if (coordinatesP[0]-1 < 0 || coordinatesP[1]+1 >= size) {
                    isCorrect = false;
                    break;
                }
                newCoordinatesP[0] = coordinatesP[0]-1;
                newCoordinatesP[1] = coordinatesP[1]+1;
                break;
            case '3':
                if (coordinatesP[1]-1 < 0) {
                    isCorrect = false;
                    break;
                }
                newCoordinatesP[0] = coordinatesP[0];
                newCoordinatesP[1] = coordinatesP[1]-1;
                break;
            case '4':
                if (coordinatesP[1]+1 >= size) {
                    isCorrect = false;
                    break;
                }
                newCoordinatesP[0] = coordinatesP[0];
                newCoordinatesP[1] = coordinatesP[1]+1;
                break;
            case '5':
                if (coordinatesP[0]+1 >= size || coordinatesP[1]-1 < 0) {
                    isCorrect = false;
                    break;
                }
                newCoordinatesP[0] = coordinatesP[0]+1;
                newCoordinatesP[1] = coordinatesP[1]-1;
                break;
            case '6':
                if (coordinatesP[0]+1 >= size) {
                    isCorrect = false;
                    break;
                }
                newCoordinatesP[0] = coordinatesP[0]+1;
                newCoordinatesP[1] = coordinatesP[1];
                break;
            case '7':
                if (coordinatesP[0]+1 >= size || coordinatesP[1]+1 >= size) {
                    isCorrect = false;
                    break;
                }
                newCoordinatesP[0] = coordinatesP[0]+1;
                newCoordinatesP[1] = coordinatesP[1]+1;
                break;
            default:
                break;
        }

    } while (count > 0 && ((abs(coordinatesK[0]-newCoordinatesP[0])<=1 &&
                abs(coordinatesK[1]-newCoordinatesP[1])<=1) ||
            (newCoordinatesP[0] == coordinates1[0] ||
                newCoordinatesP[1] == coordinates1[1] &&
                !containsObstacles(board, coordinates1, coordinatesP)) ||
            (newCoordinatesP[0] == coordinates2[0] ||
                newCoordinatesP[1] == coordinates2[1] &&
                !containsObstacles(board, coordinates2, coordinatesP))  ||
                !isCorrect));

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