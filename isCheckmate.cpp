#include <iostream>
#include <vector>
#include "isCheckmate.h"
#include "findCoordinates.h"
#include "containsObstacles.h"
#include "printBoard.h"
using namespace std;

int isCheckmate(int size, vector<vector<char>> &board) {
    int *coordinates = new int[2];
    while (true) {
        cout << "Enter your move:";
        char pawn;
        int x = 0;
        int y = 0;

        char input[10];
        cin.getline(input, 10);
        if (input[0]=='\0'){
            cin.getline(input, 10);
        }

        if (input[0] == 'X') {
            delete[] coordinates;
            return -1;
        }
        if ((input[0] !='K' && input[0] !='1' && input[0] !='2') ||
            input[1]!=' ') {
            cout << "Enter an existing pawn!" << endl;
            continue;
        }
        pawn = input[0];

        for (int i = 3; input[i-1] != '\0'; ++i) {
            if (input[i-1]>='1' && input[i-1]<='9' && (input[i] == ' ' || input[i]=='\0')) {
                if (i==3) {
                    x = input[i-1]-'0'-1;
                }
                else {
                    y = input[i-1]-'0'-1;
                    break;
                }
                i+=1;
            }
            else if(input[i-1]=='1' && input[i]>='0' && input[i]<='6'){
                if (i==3) {
                    x = 10 + (input[i]-'0')-1;
                }
                else {
                    y = 10 + (input[i]-'0')-1;
                    break;
                }
                i+=2;
            }
            else{
                x=-1;
                break;
            }
        }

        int newCoordinates[2] = {x,y};
        coordinates = findCoordinates(pawn, size, board);
        if (coordinates[0] == -1 || pawn == 'P') {
            cout << "Enter an existing pawn!" << endl;
        }
        else if (x < 0 || x >= size || y < 0 || y >= size){
            cout << "Enter existing coordinates!" << endl;
        }
        else if (((pawn == 'K' && abs(coordinates[0]-x)<=1 && //correct for king
                    abs(coordinates[1]-y)<=1) ||
                    (coordinates[0]==x || coordinates[1]==y)) && //correct for rook
                    !containsObstacles(board, coordinates, newCoordinates)) {
            if (board[x][y]=='P'){
                printBoard(size, board);
                cout << "Checkmate!";
                delete[] coordinates;
                return 1;
            }
            board[coordinates[0]][coordinates[1]] = '_';
            board[x][y] = pawn;
            break;
        }
        else {
            cout << "Enter correct coordinates for " << pawn << "!";
        }
    }
    delete[] coordinates;
    return 0;
}