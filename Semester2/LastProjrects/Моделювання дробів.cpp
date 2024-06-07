#include <iostream>
#include <string>
#include <cmath> // for abs()

using namespace std;

class Fraction {
public:
  Fraction(int numerator, int denominator) {
    // Handle negative denominator by making numerator negative
    if (denominator == 0) {
      throw invalid_argument("Denominator cannot be zero");
    }
    int gcd = abs(gcd(numerator, denominator));
    this->numerator = numerator / gcd;
    this->denominator = denominator / gcd;
    if (denominator < 0) {
      this->numerator *= -1;
    }
  }

  string toString() const {
    int whole = abs(numerator) / denominator;
    int remainingNumerator = abs(numerator) % denominator;
    if (whole == 0) {
      return (numerator < 0 ? "-" : "") + to_string(remainingNumerator) + "/" + to_string(denominator);
    } else {
      return (numerator < 0 ? "-" : "") + to_string(whole) + " " + to_string(remainingNumerator) + "/" + to_string(denominator);
    }
  }

  double toDouble() const {
    return static_cast<double>(numerator) / denominator;
  }

private:
  int numerator;
  int denominator;

  // Greatest Common Divisor (GCD) function using Euclid's algorithm
  int gcd(int a, int b) const {
    return b == 0 ? a : gcd(b, a % b);
  }
};

int main() {
  try {
    string input;
    cout << "Enter fraction (numerator / denominator): ";
    getline(cin, input);

    int slashIndex = input.find('/');
    if (slashIndex == string::npos) {
      throw invalid_argument("Invalid input format");
    }

    int numerator = stoi(input.substr(0, slashIndex));
    int denominator = stoi(input.substr(slashIndex + 1));

    Fraction fraction(numerator, denominator);
    cout << fraction.toString() << " is " << fraction.toDouble() << " in decimal." << endl;
  } catch (const invalid_argument& e) {
    cerr << "Error: " << e.what() << endl;
  }

  return 0;
}
