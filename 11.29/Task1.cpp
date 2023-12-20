#include <iostream>
using namespace std;

struct Time {
    int hours;
    int minutes;
};

int main() {
    Time startTime, elapsedTime;

    cout << "Enter the hours of the starting time: ";
    cin >> startTime.hours;

    while (startTime.hours < 0 || startTime.hours > 23) {
        cout << "Invalid input! Enter the hours again (0-23): ";
        cin >> startTime.hours;
    }

    cout << "Enter the minutes of the starting time: ";
    cin >> startTime.minutes;

    while (startTime.minutes < 0 || startTime.minutes > 59) {
        cout << "Invalid input! Enter the minutes again (0-59): ";
        cin >> startTime.minutes;
    }
    
    cout << "Enter the number of minutes to add (up to 1440): ";
    cin >> elapsedTime.minutes;

    while (elapsedTime.minutes < 0 || elapsedTime.minutes > 1440){
        cout << "Invalid input! Enter the minutes again (0-1440): ";
        cin >> elapsedTime.minutes;
    }

    int totalMinutes = startTime.hours * 60 + startTime.minutes + elapsedTime.minutes;

    Time resultTime;
    resultTime.hours = (totalMinutes / 60);
    resultTime.minutes = totalMinutes % 60;

    cout << "New time: ";
    if(resultTime.hours < 10) cout << "0";
    cout << resultTime.hours << ":";
    if(resultTime.minutes < 10) cout << "0";
    cout << resultTime.minutes << endl;
}
