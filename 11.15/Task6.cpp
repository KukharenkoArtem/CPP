#include <iostream>
#include <climits>
using namespace std;

int main() {
    const int m = 3;
    const int n = 4;

    int mas[m][n] = {{28, 11, 88, 34}, {4, 50, 17, 9}, {3, 128, 19, 72}};

    int minElement = mas[0][0];
    int minRow = 1, minColumn = 1;

    for (int row = 0; row < m; row++) {
        for (int column = 0; column < n; column++) {
            if (mas[row][column] < minElement) {
                minElement = mas[row][column];
                minRow = row + 1;
                minColumn = column + 1;
            }
        }
    }

    cout << "Minimum element: " << minElement << endl;
    cout << "Row number: " << minRow << ", Column number: " << minColumn << endl;
}
