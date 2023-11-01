#include <iostream>
#include <iomanip>
using namespace std;
int main() {
float a1 = 2.3, a2 = 2.3, a3 = 2.123456, a4 = 2.123456, a5 = 2.123456;
cout << setprecision (2) << a1 << '\n';
cout << setprecision (3) << a2 << '\n';
cout << setprecision (7) << a3 << '\n';
cout << setprecision (3) << a4 << '\n';
cout << setprecision (1) << a5 << '\n';
}
