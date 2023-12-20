#include <iostream>
using namespace std;

int main() {
    const int size = 5;
    int arr[size]; 

    cout << "Enter " << size << " unique integers: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    int max = arr[0];
    int secondMax = arr[0];

    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            secondMax = max;
            max = arr[i];
        } else if (arr[i] < max && arr[i] > secondMax) {
            secondMax = arr[i];
        }
    }
    cout << "Second largest element: " << secondMax << endl;
}
