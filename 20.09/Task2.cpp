// Example program
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int month;
    cout << "Enter the month number (from 1-January to 12-December): ";
    cin >> month;
    switch (month){
       case 1: case 3: case 5: case 7: case 8: case 10: case 12:
       cout << "In this month we have 31 days.";
       break;
       case 4: case 6: case 9: case 11:
       cout << "In this month we have 30 days.";
       break;
       case 2:
       cout << "In this month we have 28 or 29 days. (depend on the year - leap or not)";
       break;
    }
}
