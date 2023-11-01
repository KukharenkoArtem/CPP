#include <iostream>
using namespace std;

int main() {
    int n;
    double pi_approximation = 0.0;

    cout << "Enter the number of terms (n) for the Leibniz formula: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        double term = 1.0 / (2 * i + 1);
        if (i % 2 == 1) {
            term = -term;
        }
        pi_approximation += term;
    }

    pi_approximation *= 4;

    cout << "Approximation of pi using " << n << " terms: " << pi_approximation;

    return 0;
}
