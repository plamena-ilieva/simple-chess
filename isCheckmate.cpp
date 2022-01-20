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
* <cpp file with a function that validates a player's input, realizes it and returns whether
 * the player has won>
*
*/

#include <iostream>
#include <vector>
#include "isCheckmate.h"
#include "findCoordinates.h"
#include "containsObstacles.h"
#include "printBoard.h"
using namespace std;

int isCheckmate(int size, vector<vector<char>> &board) {
    const int SIZE = 50;
    int *coordinates = new int[2];
    int *coordinatesP = findCoordinates('P', size, board);

    //checking for valid input
    while (true) {
        cout << "Enter your move:";
        char pawn;
        int x = 0;
        int y = 0;

        char input[SIZE];
        cin.getline(input, SIZE);
        if (input[0] == '\0'){
            cin.getline(input, SIZE);
        }

        //exit
        if (input[0] == 'X') {
            delete[] coordinates;
            return -1;
        }

        //checking for existing pawns
        if ((input[0] != 'K' && input[0] != '1' && input[0] != '2') ||
            input[1] != ' ') {
            cout << "Enter an existing pawn!" << endl;
            continue;
        }
        pawn = input[0];

        for (int i = 3; input[i - 1] != '\0'; ++i) {
            if (input[i - 1] >= '1' && input[i - 1] <= '9' && (input[i] == ' ' || input[i] == '\0')) {
                if (i == 3) {
                    x = input[i - 1] - '0' - 1;
                }
                else {
                    y = input[i - 1] - '0' - 1;
                    break;
                }
                i += 1;
            }
            else if (input[i - 1] == '1' && input[i] >= '0' && input[i] <= '2') {
                if (i == 3) {
                    x = 10 + (input[i] - '0') - 1;
                }
                else {
                    y = 10 + (input[i] - '0') - 1;
                    break;
                }
                i += 2;
            }
            else{
                x = -1;
                break;
            }
        }

        int newCoordinates[2] = {x,y};
        delete[] coordinates;
        coordinates = findCoordinates(pawn, size, board);

        //checking whether pawn and coordinates exist
        if (coordinates[0] == -1 || pawn == 'P') {
            cout << "Enter an existing pawn!" << endl;
        }
        else if (x < 0 || x >= size || y < 0 || y >= size){
            cout << "Enter existing coordinates!" << endl;
        }
        else if (((pawn == 'K' && abs(coordinates[0] - x) <= 1 && //correct coordinates
                    abs(coordinates[1] - y) <= 1 &&               //for king
                    !(abs(x - coordinatesP[0]) <= 1 &&
                    abs(y - coordinatesP[1]) <= 1)) ||
                    ((pawn == '1' || pawn == '2') &&                //correct for rook
                    (coordinates[0] == x || coordinates[1] == y))) &&
                    !containsObstacles(board, coordinates, newCoordinates)) {
            //taking the bot's king
            if (board[x][y] == 'P') {
                board[coordinates[0]][coordinates[1]] = '_';
                board[x][y] = pawn;
                printBoard(size, board);
                cout << "Checkmate!";
                delete[] coordinates;
                delete[] coordinatesP;
                return 1;
            }
            //moving the pawn
            board[coordinates[0]][coordinates[1]] = '_';
            board[x][y] = pawn;
            break;
        }
        else {
            cout << "Enter correct coordinates for " << pawn << "!" << endl;
        }
    }
    delete[] coordinates;
    delete[] coordinatesP;
    return 0;
}