// Example program
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    for(int i = 0; i < 5; i++){
        double x;
        cout << "Enter the x value: ";
        cin >> x;
        double y = pow(sin(x), 5) + fabs(5*x - 1.5);
        cout << "For x = " << x << " y = " << y << "\n";
    }
    return 0;
}
