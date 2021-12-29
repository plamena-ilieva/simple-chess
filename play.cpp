#include <iostream>
#include "play.h"
#include "generateBoard.h"
#include "isCheckmate.h"
#include "printBoard.h"
using namespace std;

void play(int size) {
    vector<vector<char>> board;
    generateBoard(size, board);
    int count = 0;
    while(!isCheckmate(size, board)) {
        ++count;
        printBoard(size, board);
    }

}