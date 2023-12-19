#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int m[] = {5, 2, 9, 1, 7, 3, 8, 4, 6, 12, 10, 11};
    int n = sizeof(m) / sizeof(m[0]);

sort(m, m + n);

cout << "За зростанням: ";
    for (int i = 0; i < n; ++i) {
        cout << m[i] << " ";
    }
    cout << endl;

    sort(m, m + n, greater<int>());

    cout << "За спаданням: ";
    for (int i = 0; i < n; ++i) {
        cout << m[i] << " ";
    }
    cout << endl;

    return 0;
}
