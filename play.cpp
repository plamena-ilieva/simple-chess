#include <iostream>
#include "play.h"
#include "generateBoard.h"
using namespace std;

void play(int size) {
    vector<vector<char>> board;
    generateBoard(size, board);
}