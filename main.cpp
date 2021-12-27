#include <iostream>
#include "mainMenu.h"
#include "defineBoardSize.h"
using namespace std;

int main() {
    printMainMenu();
    char n;
    cin >> n;
    while (n-'0' < 1 || n-'0' > 3) {
        cout << "Enter a number between 1 and 3: ";
        cin >> n;
    }
    cout << endl;
    int size = 8;

    switch (n) {
        case '1':
            break;
        case '2':
            size = defineBoardSize();
            break;
        case '3':
            break;
        default:
            break;
    }

    return 0;
}
