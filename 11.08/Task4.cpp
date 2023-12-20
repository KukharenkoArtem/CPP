#include <iostream>
using namespace std;

int main() {
    const int size = 5;
    int arr[size];
    int A;
    int count = 0;

    cout << "Enter number A: ";
    cin >> A;

    cout << "Enter " << size << " numbers for the array: ";
    for(int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    for(int i = 0; i < size; i++) {
        if(arr[i] > A) {
            count++;
        }
    }
    cout << "Number of elements greater than " << A << " in the array: " << count << endl;
}
