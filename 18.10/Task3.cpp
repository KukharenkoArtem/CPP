#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a positive integer greater than 1: ";
    cin >> n;
    if (n <= 1) {
        cout << "Invalid input. Please enter a positive integer greater than 1.";
        return 1;
    }
    for (int i = 0; i < n; i++) {
        if (i == 0 || i == n - 1) {
            cout << '+';
            for (int j = 0; j < n; j++) {
                cout << '-';
            }
            cout << '+';
        } else {
            cout << '|';
            for (int j = 0; j < n; j++) {
                cout << ' ';
            }
            cout << '|';
        }
    }

    return 0;
}
