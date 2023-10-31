// Example program
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int number;
    cout << "Enter the three-digit number: ";
    cin >> number;
    if (number < 100 || number > 999){
        cout << "You need to enter a three-digit number!";
    }
    else{
        int hundreds = number / 100;
        int tens = (number % 100) / 10;
        int ones = number % 10;
        int product = 1;
        if (hundreds % 2 == 0){
            product *= hundreds;
            }
        if (tens % 2 == 0){
            product *= tens;
            }
        if (ones % 2 == 0){
            product *= ones;
            }
        cout << "Product of even numbers in " << number << " is " << product << ".";
        return 0;  
    }
}
