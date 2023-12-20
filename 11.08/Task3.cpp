#include <iostream>
using namespace std;

int main() {
    const int size = 5;
    int arr[size];

    cout << "Enter " << size << " different numbers: ";
    for(int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    cout << "Array before swapping: ";
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    int min_index = 0;
    int max_index = 0;

    for(int i = 1; i < size; i++) {
        if(arr[i] < arr[min_index]) {
            min_index = i;
        }
        if(arr[i] > arr[max_index]) {
            max_index = i;
        }
    }

    int temp = arr[min_index];
    arr[min_index] = arr[max_index];
    arr[max_index] = temp;

    cout << "Array after swapping: ";
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
