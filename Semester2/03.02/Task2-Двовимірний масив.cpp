#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
  const int rows = 3;
  const int cols = 3;

  int** matrix = new int*[rows];
  for (int i = 0; i < rows; i++) {
    matrix[i] = new int[cols];
  }

  srand(time(NULL));
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      matrix[i][j] = rand() % 100;
    }
  }

  cout << "Масив:\n";
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      cout << matrix[i][j] << " ";
    }
    cout << endl;
  }

  cout << "\nЕлементи на головній діагоналі:\n";
  for (int i = 0; i < rows; i++) {
    cout << matrix[i][i] << " ";
  }

  cout << "\nЕлементи на побічній діагоналі:\n";
  for (int i = 0; i < rows; i++) {
    cout << matrix[i][rows - i - 1] << " ";
  }

  int evenCount = 0, oddCount = 0;
  for (int i = 0; i < rows; ++i) {
    for (int j = 0; j < cols; ++j) {
      if (matrix[i][j] % 2 == 0) {
        evenCount++;
      } else {
        oddCount++;
      }
    }
  }

  cout << "\nКількість парних елементів: " << evenCount << endl;
  cout << "Кількість непарних елементів: " << oddCount << endl;

  for (int i = 0; i < rows; ++i) {
    delete[] matrix[i];
  }
  delete[] matrix;

  return 0;
}
