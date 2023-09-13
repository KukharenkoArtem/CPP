#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main() {
  int x;
  double result;
  
  
  cout << "Enter x value: ";
  cin >> x;
  if (x >= 0) {
	  result = pow(M_E, -x+2);
      }
  else {
	  result = pow(M_E, -x) * sin(1. / (x + 3.2));
      }
  cout << "Result: " << result;
}
