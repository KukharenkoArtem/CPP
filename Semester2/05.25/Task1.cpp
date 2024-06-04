#include <iostream>
#include <stdexcept>

using namespace std;

int main(void) {
    int a = 8, c = 0;

    cout << "Enter a number (except 0): ";
    cin >> c;

    try {
        if (c == 0) {
            throw runtime_error("Division by zero is not allowed!");
        }

        int b = a / c;
        cout << "Result: " << b << endl;
    } catch (const runtime_error& ex) {
        cerr << "Error: " << ex.what() << endl;
    }

    return 0;
}
