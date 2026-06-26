#include <iostream>
#include <windows.h>
using namespace std;

int main() {
    cout << "Press any key to start the moving text effect." << endl;
    cin.get(); // Wait for user to press a key

    const int screenWidth = 80;
    const string text = "Welcome to UMT";
    const int textLength = text.length();
    int textPosition = screenWidth; // Start text at right edge of screen

    while (true) {
        // Clear the console screen
        system("cls");

        // Move the text position one character to the left
        textPosition--;


        // reset the text position to the right edge of the screen
        if (textPosition < -textLength) {
            textPosition = screenWidth;
        }

        // Set the cursor position and output the text
        COORD cursorPosition;
        cursorPosition.X = textPosition;
        cursorPosition.Y = 0;
        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), cursorPosition);
        cout << text;

        // Wait a short time before moving the text again
        Sleep(100); // Sleep for 100 milliseconds (0.1 seconds)
    }
}

