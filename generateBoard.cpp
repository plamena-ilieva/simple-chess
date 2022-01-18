#include <iostream>
#include "generateBoard.h"
#include "printBoard.h"
#include <vector>
#include <cstdlib>
#include <ctime>
#include <fstream>

using namespace std;

void generateBoard(int size, vector<vector<char>> &board) {
    fstream file;
    file.open("coordinates.txt", fstream::out);

    for (int i = 0; i < size; ++i) {
        board.emplace_back();
        for (int j = 0; j < size; ++j) {
            board[i].push_back('_');
        }
    }

    srand(time(0));
    int coordinates[4] = {};

    for (int& item : coordinates) {
        item = rand() % (size*size);
    }

    int diffBetweenKings = abs(coordinates[1] - coordinates[0]);
    while (diffBetweenKings <= 1 || diffBetweenKings == size ||
           diffBetweenKings == size + 1 || diffBetweenKings == size - 1) {
        coordinates[1] = rand() % (size*size);
        diffBetweenKings = abs(coordinates[1]-coordinates[0]);
    }
    while (coordinates[2] / size == coordinates[0] / size ||
               coordinates[2] % size == coordinates[0] % size ||
               coordinates[1] == coordinates[2]){
            coordinates[2] = rand() % (size*size);
    }
    while (coordinates[3] / size == coordinates[0] / size ||
            coordinates[3] % size == coordinates[0] % size ||
            coordinates[1] == coordinates[3] ||
            coordinates[2] == coordinates[3]) {
        coordinates[3] = rand() % (size*size);
    }

    char pawns[4] = {'P', 'K', '1', '2'};

    for (int i = 0; i < 4; ++i) {
        file << pawns[i] << ' ' << coordinates[i] << endl;
        int x = coordinates[i] / size;
        int y = coordinates[i] % size;
        board[x][y] = pawns[i];
    }

    file.close();
    cout << "K - your king" << endl;
    cout << "1 - your first rook" << endl;
    cout << "2 - your second rook" << endl;
    cout << "P - bot's king" << endl;
    cout << "Your move: <pawn> <row coordinate> <column coordinate>" << endl << endl;
    cout << "Enter X for exiting the current game." << endl;
    printBoard(size, board);
}