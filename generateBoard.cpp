#include <iostream>
#include "generateBoard.h"
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

void generateBoard(int size) {
    vector<vector<char>> board;
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

    int diffBetweenKings = abs(coordinates[1]-coordinates[0]);
    while (diffBetweenKings == 1 || diffBetweenKings == size ||
           diffBetweenKings == size+1 || diffBetweenKings == size-1) {
        coordinates[1] = rand() % (size*size);
        diffBetweenKings = abs(coordinates[1]-coordinates[0]);
    }
    for (int i = 2; i < 4; ++i) {
        while (coordinates[i] / size == coordinates[0] / size ||
               coordinates[i] % size == coordinates[0] % size) {
            coordinates[i] = rand() % (size*size);
        }
    }

    char pawns[4] = {'P', 'K', '1', '2'};

    for (int i = 0; i < 4; ++i) {
        int x = coordinates[i] / size;
        int y = coordinates[i] % size;
        board[x][y] = pawns[i];
    }
    cout << "   ";
    for (int i = 1; i <= size; ++i) {
        cout << i << (i>9?" ":"  ");
    }
    cout << endl;
    for (int i = 0; i < size; ++i) {
        cout << i+1 << (i+1>9?" ":"  ");
        for (int j = 0; j < size; ++j) {
            cout << board[i][j] << "  ";
        }
        cout << endl;
    }
}