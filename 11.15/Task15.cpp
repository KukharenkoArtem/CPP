#include <iostream>

using namespace std;

int main() {
    const int m = 3;
    int matrix[m][m] = {
        {2, 5, 8},
        {4, 7, 1},
        {6, 3, 9}
    };

    int sumMainDiagonal = 0;
    int sumSecondaryDiagonal = 0;

    for (int i = 0; i < m; i++) {
        sumMainDiagonal += matrix[i][i];
        sumSecondaryDiagonal += matrix[i][m - i - 1];
    }

    cout << "Сума по головній діагоналі: " << sumMainDiagonal << endl;
    cout << "Сума по побічній діагоналі: " << sumSecondaryDiagonal << endl;
}
