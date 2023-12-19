#include <iostream>

using namespace std;

int main() {
    const int m = 5;
    const int n = 7;

    int matrix[m][n] = {
        {2, 5, 8, 3, 1, 4, 6},
        {4, 7, 1, 6, 9, 2, 5},
        {6, 3, 9, 2, 7, 4, 1},
        {10, 12, 14, 7, 3, 2, 8},
        {1, 0, 11, 13, 5, 6, 2}
    };

    for (int i = 0; i < m; ++i) {
        int sum = 0;

        for (int j = 0; j < n; ++j) {
            sum += matrix[i][j];
        }

        cout << "Сума елементів у рядку " << i + 1 << ": " << sum << endl;
    }

    return 0;
}
