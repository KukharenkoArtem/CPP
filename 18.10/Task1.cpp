#include <iostream>
using namespace std;

int main() {
    int c0;

    cout << "Enter a non-negative and non-zero integer: ";
    cin >> c0;

    if (c0 <= 0) {
        cout << "Please enter a positive integer.";
    } else {
        int steps = 0;
        while (c0 != 1) {
            if (c0 % 2 == 0) {
                c0 /= 2;
            } else {
                c0 = 3 * c0 + 1;
            }
            steps++;
            cout << "Step " << steps << ": c0 = " << c0;"\n";
        }
        cout << "The sequence reached 1 in " << steps << " steps.";
    }

    return 0;
}
