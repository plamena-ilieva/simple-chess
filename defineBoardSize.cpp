#include <iostream>
#include "defineBoardSize.h"
using namespace std;

int defineBoardSize(){
    cout << "Choose a board size:" << endl;
    cout << "1. 8x8 (default)" << endl;
    cout << "2. 10x10" << endl;
    cout << "3. 12x12" << endl;
    cout << "Enter your choice:";
    char n;
    cin >> n;

    while (true) {
        switch (n) {
            case '1':
                return 8;
            case '2':
                return 10;
            case '3':
                return 12;
            default:
                cout << "Enter a number between 1 and 3:";
                cin >> n;
        }
    }
}
