#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Enter the natural N number: ";
    cin >> N;

    if (N <= 0) {
        cout << "This number doesn't belong to natural numbers.";
        return 1;
    }
    int count = 0;
    while (N > 0) {
        int digit = N % 10;
        if (digit != 1 && digit != 9) {
            count++;
        }
        N /= 10;
    }
    cout << "Count of numbers, which don't equal 1 or 9, in number N: " << count;
    return 0;
}
