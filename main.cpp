#include <iostream>
#include "mainMenu.h"
using namespace std;

int main() {
    printMainMenu();
    char n;
    cin >> n;
    while (n-'0' < 1 || n-'0' > 3) {
        cout << "Enter a number between 1 and 3: ";
        cin >> n;
    }

    return 0;
}
