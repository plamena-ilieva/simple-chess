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
* <cpp file with a function that generates a board with random correct coordinates for all pawns>
*
*/

#include <iostream>
#include "generateBoard.h"
#include "printBoard.h"
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

void generateBoard (int size, vector<vector<char>> &board) {

    //generating an empty board
    for (int i = 0; i < size; ++i) {
        board.emplace_back();
        for (int j = 0; j < size; ++j) {
            board[i].push_back('_');
        }
    }

    //generating random coordinates for the 4 pawns
    srand(time(0));
    int coordinates[4] = {};

    for (int& item : coordinates) {
        item = rand() % (size*size);
    }

    //checking whether the kings are in each other's range
    int diffBetweenKings = abs(coordinates[1] - coordinates[0]);
    while (diffBetweenKings <= 1 || diffBetweenKings == size ||
           diffBetweenKings == size + 1 || diffBetweenKings == size - 1) {
        coordinates[1] = rand() % (size * size);
        diffBetweenKings = abs(coordinates[1] - coordinates[0]);
    }

    //checking whether a rook can take the bot's king after the generating
    //or whether the coordinates are the same
    //or whether the bot's king can take a rook
    int diffBetweenKingAnd1 = abs(coordinates[2] - coordinates[0]);
    while ((coordinates[2] / size == coordinates[0] / size ||
            coordinates[2] % size == coordinates[0] % size ||
            coordinates[1] == coordinates[2]) ||
            (diffBetweenKingAnd1 <= 1 || diffBetweenKingAnd1 == size ||
            diffBetweenKingAnd1 == size + 1 || diffBetweenKingAnd1 == size - 1)) {
        coordinates[2] = rand() % (size * size);
        diffBetweenKingAnd1 = abs(coordinates[2] - coordinates[0]);
    }

    int diffBetweenKingAnd2 = abs(coordinates[3] - coordinates[0]);
    while ((coordinates[3] / size == coordinates[0] / size ||
            coordinates[3] % size == coordinates[0] % size ||
            coordinates[1] == coordinates[3] ||
            coordinates[2] == coordinates[3]) ||
            (diffBetweenKingAnd2 <= 1 || diffBetweenKingAnd2 == size ||
            diffBetweenKingAnd2 == size + 1 || diffBetweenKingAnd2 == size - 1)) {
        coordinates[3] = rand() % (size * size);
        diffBetweenKingAnd2 = abs(coordinates[3] - coordinates[0]);
    }

    char pawns[4] = {'P', 'K', '1', '2'};

    //calculating exact coordinates
    for (int i = 0; i < 4; ++i) {
        int x = coordinates[i] / size;
        int y = coordinates[i] % size;
        board[x][y] = pawns[i];
    }

    //printing instructions
    cout << "K - your king" << endl;
    cout << "1 - your first rook" << endl;
    cout << "2 - your second rook" << endl;
    cout << "P - bot's king" << endl;
    cout << "Your move: <pawn> <row coordinate> <column coordinate>" << endl << endl;
    cout << "Enter X for exiting the current game." << endl;
    printBoard(size, board);
}