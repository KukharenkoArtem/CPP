#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

const int ROWS = 3;
const int COLS = 3;

void fillArray(int *arr, int rows, int cols) {
    for (int i = 0; i < rows * cols; i++) {
        *(arr + i) = rand() % 100;
    }
}

void printArray(int *arr, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << *(arr + i * cols + j) << " ";
        }
        cout << endl;
    }
}

void printMainDiagonal(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        cout << *(arr + i * size + i) << " ";
    }
    cout << endl;
}

void printSecondaryDiagonal(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        cout << *(arr + i * size + (size - 1 - i)) << " ";
    }
    cout << endl;
}

void countEvenAndOdd(int *arr, int size) {
    int evenCount = 0;
    int oddCount = 0;
    for (int i = 0; i < size * size; i++) {
        if (*(arr + i) % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }
    cout << "Кількість парних елементів: " << evenCount << endl;
    cout << "Кількість непарних елементів: " << oddCount << endl;
}

int main() {
    srand(time(NULL));
    int array[ROWS][COLS];
    fillArray(&array[0][0], ROWS, COLS);
    cout << "Масив:" << endl;
    printArray(&array[0][0], ROWS, COLS);
    cout << "Головна діагональ: ";
    printMainDiagonal(&array[0][0], ROWS);
    cout << "Побічна діагональ: ";
    printSecondaryDiagonal(&array[0][0], ROWS);
    countEvenAndOdd(&array[0][0], ROWS);
    return 0;
}
