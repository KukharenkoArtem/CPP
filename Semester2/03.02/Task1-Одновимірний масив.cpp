#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
  float* arr = new float[5];
  srand(time(NULL));
  for (int i = 0; i < 5; i++) {
    arr[i] = -2.0 + (rand() / (RAND_MAX + 1.0)) * 4.0;
  }
  
  int positiveCount = 0, negativeCount = 0;
  for (int i = 0; i < 5; i++) {
    if (arr[i] > 0) {
      positiveCount++;
    } else if (arr[i] < 0) {
      negativeCount++;
    }
  }

  cout << "Масив: ";
  for (int i = 0; i < 5; ++i) {
    cout << arr[i] << "; ";
  }
  cout << endl;

  cout << "Кількість додатніх чисел: " << positiveCount << endl;
  cout << "Кількість від'ємних чисел: " << negativeCount << endl;

  delete[] arr;

  return 0;
}
