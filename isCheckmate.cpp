#include <iostream>
#include <vector>
using namespace std;
#include "isCheckmate.h"
#include "findCoordinates.h"

bool isCheckmate(int size, vector<vector<char>> &board) {
    cout << "Enter your move:";
    char pawn;
    int x, y;
    cin >> pawn >> x >> y;
    --x;
    --y;
    while (true) {
        int *coordinates = findCoordinates(pawn, size, board);
        if (coordinates[0] == -1 || pawn == 'P') {
            cout << "Enter an existing pawn!" << endl;
        }
        else if (x < 0 || x>=size || y < 0 || y>=size){
            cout << "Enter existing coordinates!";
        }
        else if ((pawn == 'K' && abs(coordinates[0]-x)<=1 && //correct for king
                    abs(coordinates[1]-y)<=1) ||
                    (coordinates[0]==x || coordinates[1]==y)) { //correct for rook
            if (board[x][y]=='P'){
                cout << "Checkmate!";
                return true;
            }
            board[coordinates[0]][coordinates[1]] = '_';
            board[x][y] = pawn;
            break;
        }
        else {
            cout << "Enter correct coordinates for " << pawn << "!";
        }
        cout << "Enter your move:";
        cin >> pawn >> x >> y;
        --x;
        --y;
    }
    return false;
}