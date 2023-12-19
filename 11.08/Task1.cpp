#include <iostream>

using namespace std;

int main() {
    const int m = 4;
    const int n = 3;
    int matrix[m][n] = {
	{2, 5, 8},
	{4, 7, 1},
	{6, 3, 9},
	{10, 12, 14}
    };
    for (int i = 0; i < m; i++) {
	int countEven = 0;
	for (int j = 0; j < n; j++) {
	    if (matrix[i][j] % 2 == 0) {
		countEven++;
	    }
	}

	cout << "У рядку " << i + 1 << " кількість парних чисел: " << countEven << endl;
    }
}
