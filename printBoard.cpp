#include <iostream>
#include "printBoard.h"
#include <vector>
using namespace std;

void printBoard(int size, vector<vector<char>> &board) {
    cout << "   ";
    for (int i = 1; i <= size; ++i) {
        cout << i << (i > 9 ? " " : "  ");
    }
    cout << endl;
    for (int i = 0; i < size; ++i) {
        cout << i + 1 << (i + 1 > 9 ? " " : "  ");
        for (int j = 0; j < size; ++j) {
            cout << board[i][j] << "  ";
        }
        cout << endl;
    }
}