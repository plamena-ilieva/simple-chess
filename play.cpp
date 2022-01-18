#include <iostream>
#include <Windows.h>
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
    while(true) {
        switch (isCheckmate(size, board)) {
            case 1:
                ++moves;
                cout << " You won!" << endl;
                cout << "Moves: " << moves << endl << endl;
                return;
            case 0:
                ++moves;
                printBoard(size, board);
                Sleep(2000);
                cout << endl;
                if(botMove(size, board)){
                    cout << "You lost!" << endl;
                    cout << "Moves: " << moves << endl << endl;
                    return;
                }
                break;
            case -1:
                return;
            default:
                break;
        }
    }
}