#include <iostream>
using namespace std;

class TimeConverter {
public:
 
    void secondsToTime(int totalSeconds) {
        int hours = totalSeconds / 3600;
        int minutes = (totalSeconds % 3600) / 60;
        int seconds = totalSeconds % 60;
        cout << "HH:MM:SS => " << hours << ":" << minutes << ":" << seconds << endl;
    }


    void timeToSeconds(int hours, int minutes, int seconds) {
        int totalSeconds = (hours * 3600) + (minutes * 60) + seconds;
        cout << "Total seconds: " << totalSeconds << endl;
    }
};

int main() {
    TimeConverter converter;
    int choice;
    cout << "Choose conversion:\n1. Seconds to HH:MM:SS\n2. HH:MM:SS to Seconds\n";
    cin >> choice;

    if (choice == 1) {
        int totalSeconds;
        cout << "Enter total seconds: ";
        cin >> totalSeconds;
        converter.secondsToTime(totalSeconds);
    } else if (choice == 2) {
        int hours, minutes, seconds;
        cout << "Enter hours: ";
        cin >> hours;
        cout << "Enter minutes: ";
        cin >> minutes;
        cout << "Enter seconds: ";
        cin >> seconds;
        converter.timeToSeconds(hours, minutes, seconds);
    } else {
        cout << "Invalid choice!" << endl;
    }

    return 0;
}

