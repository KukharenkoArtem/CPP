#include <iostream>
#include <math.h>

using namespace std;

bool isPrime(int num) {
  if (num <= 1) {
    return false;
  }

  for (int i = 2; i <= sqrt(num); i++) {
    if (num % i == 0) {
      return false;
    }
  }
  return true;
}

int main() {
  int number;

  cout << "Введіть число: ";
  cin >> number;

  if (isPrime(number)) {
    cout << number << " - просте число" << endl;
  } else {
    cout << number << " - складене число" << endl;
  }

  return 0;
}
