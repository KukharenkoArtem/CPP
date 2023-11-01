#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    double a, b, h;
    cout << "Enter the start of the line (a): ";
    cin >> a;
    cout << "Enter the end of the line (b): ";
    cin >> b;
    cout << "Enter the step (h): ";
    cin >> h;
    if (a > b || h <= 0) {
        cout << "Incorrect values of a, b or h. Check the rules again.";
        return 1;
    }
    
    cout << "-------------------" << std::endl;
    cout << std::left << std::setw(15) << "X" << std::setw(15) << "Y" << std::endl;
    cout << "-------------------" << std::endl;

    for (double x = a; x <= b; x += h) {
        if (-x + 6 >= 0) {
            double y = 5 * pow(x, 3) + sqrt(-x + 6);
            std::cout << std::left << std::setw(15) << x << std::setw(15) << y << std::endl;
        } else {
            std::cout << "Value of x = " << x << " doesn't belong to the RAV. Skip it." << std::endl;
        }
    }

    std::cout << "-------------------" << std::endl;

    return 0;
}
