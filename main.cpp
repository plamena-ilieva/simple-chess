#include <iostream>
#include "mainMenu.h"
#include "defineBoardSize.h"
#include "play.h"
using namespace std;

int main() {
    int size = 8;
    while (true) {
        printMainMenu();
        char n;
        cin >> n;
        while (n-'0' < 1 || n-'0' > 3) {
            cout << "Enter a number between 1 and 3: ";
            cin >> n;
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
