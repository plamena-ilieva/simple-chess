#include <iostream>
#include "defineBoardSize.h"
using namespace std;

int defineBoardSize(){
    cout << "Choose a board size:" << endl;
    cout << "1. 8x8 (default)" << endl;
    cout << "2. 10x10" << endl;
    cout << "3. 12x12" << endl;
    cout << "Enter your choice:";

    char input[20];
    cin.getline(input, 20);
    if (input[0]=='\0'){
        cin.getline(input, 20);
    }
    char n = input[0];
    while (n-'0' < 1 || n-'0' > 3 || input[1]!='\0') {
        cout << "Enter a number between 1 and 3:";
        cin.getline(input, 20);
        if (input[0]=='\0'){
            cin.getline(input, 20);
        }
        n = input[0];
    }

    switch (n) {
        case '2':
            return 10;
        case '3':
            return 12;
        default:
            return 8;
        }
}
