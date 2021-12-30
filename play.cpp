#include <iostream>
#include "play.h"
#include "generateBoard.h"
#include "isCheckmate.h"
#include "printBoard.h"
#include "botMove.h"
using namespace std;

void play(int size) {
    vector<vector<char>> board;
    generateBoard(size, board);
    int moves = 0;
    bool hasNotLost = true;
    while(!isCheckmate(size, board)) {
        ++moves;
        printBoard(size, board);
        if(botMove(size, board)){
            printBoard(size, board);
            cout << "You lost!" << endl;
            hasNotLost = false;
            break;
        }
    }
    if (hasNotLost) {
        cout << "You won!" << endl;
    }
    cout << "Moves: " << moves << endl;
}