#include <iostream>
#include "mainMenu.h"
#include "defineBoardSize.h"
#include "play.h"
using namespace std;

int main() {
    int size = 8;
    while (true) {
        printMainMenu();
        char input[20];
        cin.getline(input, 20);
        if (input[0] == '\0'){
            cin.getline(input, 20);
        }
        char n = input[0];
        while (n - '0' < 1 || n - '0' > 3 || input[1] != '\0') {
            cout << "Enter a number between 1 and 3:";
            cin.getline(input, 20);
            if (input[0] == '\0'){
                cin.getline(input, 20);
            }
            n = input[0];
        }
        cout << endl;

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
