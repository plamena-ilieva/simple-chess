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
* <header file with a function that finds the coordinates of a given pawn>
*
*/

#include <vector>
using namespace std;
#ifndef SIMPLE_CHESS_FINDCOORDINATES_H
#define SIMPLE_CHESS_FINDCOORDINATES_H
int* findCoordinates (char pawn, int size, vector<vector<char>> &board);
#endif //SIMPLE_CHESS_FINDCOORDINATES_H
