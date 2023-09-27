#include <iostream>
using namespace std;
int main() {
int number1, number2, number3, number4;
cout << "Enter first number: ";
cin >> number1;
cout << "Enter second number: ";
cin >> number2;
cout << "Enter third number: ";
cin >> number3;
cout << "Enter fourth number: ";
cin >> number4;
if ((number1 > 1 && number1 < 255) && (number2 > 1 && number2 < 255) && (number3 > 1 && number3 < 255) && (number4 > 1 && number4 < 255)){
    cout << number1 << ".";
    cout << number2 << ".";
    cout << number3 << ".";
    cout << number4;
    }
else {
    cout << "Wrong IP! Check the numbers and repeat.";
    }
}
