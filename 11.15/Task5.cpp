#include <iostream>
#include <climits>
using namespace std;

int main() {
    const int m = 4;
    const int n = 3;

    int mas[m][n] = {{28, 11, 88, 34}, {4, 50, 17, 9}, {3, 128, 19, 72}};

    int maxElement = mas[0][0];
    int maxRow = 1, maxColumn = 1;

    for (int row = 0; row < m; ++row) {
        for (int column = 0; column < n; ++column) {
            if (mas[row][column] > maxElement) {
                maxElement = mas[row][column];
                maxRow = row + 1;
                maxColumn = column + 1;
            }
        }
    }

    cout << "Maximum element: " << maxElement << endl;
    cout << "Row number: " << maxRow << ", Column number: " << maxColumn << endl;
}
