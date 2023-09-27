#include <iostream>
using namespace std;
int main() {
int number1, number2;
cout << "Enter first number: ";
cin >> number1;
cout << "Enter second number: ";
cin >> number2;
float result1 = 1 / (float)number1;
float result2 = 1 / (float)number2;
if (result1 == result2){
    cout << "Results are equal (by 0.000001 eplision)";
    }
else {
    cout << "Results are not equal (by 0.000001 eplision)";
    }
}
