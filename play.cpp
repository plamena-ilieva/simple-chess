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
* <cpp file with a function that realizes the sequence of player's and bot's moves>
*
*/

#include <iostream>
#include <Windows.h>
#include "play.h"
#include "generateBoard.h"
#include "isCheckmate.h"
#include "printBoard.h"
#include "botMove.h"
using namespace std;

void play (int size) {
    vector<vector<char>> board;
    generateBoard(size, board);
    int moves = 0;

    while (true) {
        switch (isCheckmate(size, board)) {
            //if the player has won
            case 1:
                ++moves;
                cout << " You won!" << endl;
                cout << "Moves: " << moves << endl << endl;
                return;
            //if the players has not won
            case 0:
                ++moves;
                printBoard(size, board);
                Sleep(2000);
                cout << endl;
                //if the player has lost
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