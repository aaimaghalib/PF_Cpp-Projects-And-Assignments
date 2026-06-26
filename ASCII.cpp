#include <iostream>
using namespace std;

int main() {
    int asciiVal;
    char nextChar;

    cout << "Enter an ASCII value: ";
    cin >> asciiVal;

    for (int i = 1; i <= 5; i++) {
        nextChar = asciiVal + i;
        cout << nextChar << " ";
    }

    cout << endl;
}

