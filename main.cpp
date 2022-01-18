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
* <main file>
*
*/

#include <iostream>
#include "mainMenu.h"
#include "defineBoardSize.h"
#include "play.h"
using namespace std;

int main() {
    int size = 8;
    const int SIZE = 50;
    while (true) {
        printMainMenu();
        char input[SIZE];
        cin.getline(input, SIZE);

        //checking for correct input
        if (input[0] == '\0'){
            cin.getline(input, SIZE);
        }
        char n = input[0];
        while (n - '0' < 1 || n - '0' > 3 || input[1] != '\0') {
            cout << "Enter a number between 1 and 3:";
            cin.getline(input, SIZE);
            if (input[0] == '\0'){
                cin.getline(input, SIZE);
            }
            n = input[0];
        }
        cout << endl;

        //choosing an option
        switch (n) {
            case '1':
                play(size);
                break;
            case '2':
                size = defineBoardSize();
                cout << "Board size = " << size << endl << endl;
                break;
            case '3':
                return 0;
            default:
                break;
        }
    }
}
