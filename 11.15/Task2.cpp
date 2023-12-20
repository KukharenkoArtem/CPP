#include <iostream>
using namespace std;
int main() {
    const int m = 6;
    const int n = 4;
    int matrix[m][n] = {
	{2, 5, 8, 3},
	{4, 7, 1, 6},
	{6, 3, 9, 2},
	{10, 12, 14, 7},
	{1, 0, 11, 13},
	{17, 16, 8, 22}
    };

    for (int j = 0; j < n; j++) {
	int countEven = 0;
	for (int i = 0; i < m; i++) {
	    if (matrix[i][j] % 2 == 0) {
		countEven++;
	    }
	}
	cout << "У стовпчику " << j + 1 << " кількість парних чисел: " << countEven << endl;
    }
}
