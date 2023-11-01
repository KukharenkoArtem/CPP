// Example program
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    int sum = 0;
    for(int i = 1; i <= 25; i++){
        sum += i*i;
    }
    cout << "Summa of squares from 1 to 25 is " << sum << ".";
}
