#include <iostream>
using namespace std;

int main() {
    int hours, minutes, seconds, totalSeconds;

    cout << "Enter the hours: ";
    cin >> hours;

    cout << "Enter the minutes: ";
    cin >> minutes;

    cout << "Enter the seconds: ";
    cin >> seconds;

    totalSeconds = (hours * 3600) + (minutes * 60) + seconds;

    cout << "The equivalent time in seconds is " << totalSeconds << " seconds." << endl;
}
