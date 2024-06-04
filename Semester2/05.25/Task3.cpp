#include <iostream>
#include <stdexcept> 

using namespace std;

float internaldiv(float arg1, float arg2) {
    try {
        return arg1 / arg2;
    } catch (const runtime_error& ex) {
        cerr << "Error: " << ex.what() << endl;
        cerr << "Reason: Division by zero is not allowed." << endl;
        throw;
    }
}

int main(void) {
    float a, b;

    while (cin >> a) {
        cout << "Enter the second number (except 0): ";
        cin >> b;

        try {
            float result = internaldiv(a, b);
            cout << "Result: " << result << endl;
        } catch (const runtime_error& ex) {
            cerr << "Error: " << ex.what() << endl;
        }
    }

    return 0;
}
