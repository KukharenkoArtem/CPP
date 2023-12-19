#include <iostream>
using namespace std;
int main() {
    const int m = 4;
    const int n = 6;

    int matrix[m][n] = {
	{2, 5, 8, 3, 1, 4},
	{4, 7, 1, 6, 9, 2},
	{6, 3, 9, 2, 7, 4},
	{10, 12, 14, 7, 3, 2}
    };
    for (int j = 0; j < n; ++j) {
	int sum = 0;

	for (int i = 0; i < m; ++i) {
	    sum += matrix[i][j];
	}
	cout << "Сума елементів у стовпчику " << j + 1 << ": " << sum << endl;
    }
}
