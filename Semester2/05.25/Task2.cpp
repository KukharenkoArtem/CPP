#include <iostream>
#include <stdexcept>

using namespace std;

int main(void) {
    int a, b, c;

    cout << "Enter the first number: ";
    cin >> a;

    cout << "Enter the second number (except 0): ";
    cin >> b;

    try {
        c = a / b;
        cout << "Result: " << c << endl;
    } catch (const runtime_error& ex) {
        cerr << "Error: " << ex.what() << endl;
    }

    return 0;
}
