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
* <header file with functions that check whether there are obstacles in the way of the current move>
*
*/

#include <vector>
using namespace std;

#ifndef SIMPLE_CHESS_CONTAINSOBSTACLES_H
#define SIMPLE_CHESS_CONTAINSOBSTACLES_H
bool containsObstacles(vector<vector<char>> &board, const int *startCoordinates, const int *endCoordinates);
#endif //SIMPLE_CHESS_CONTAINSOBSTACLES_H
