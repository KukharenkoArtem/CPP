#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main() {
  int x;
  int y;
  
  cout << "Enter x value: ";
  cin >> x;
  cout << "Enter y value: ";
  cin >> y;
  if (x >= 0 && x <=2 && y >= 0 && y <= 1) {
	  cout << "WIN";
      }
  else {
	  cout << "LOSE";
      }
  
}
