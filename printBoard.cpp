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
* <cpp file with a function that prints the board>
*
*/

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