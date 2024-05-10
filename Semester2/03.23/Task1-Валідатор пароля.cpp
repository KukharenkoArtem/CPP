#include <string>
#include <iostream>
#include <cctype>

using namespace std;

int main() {
    string password;
    getline(cin, password);

    bool hasLength = password.length() >= 8;
    bool hasUpperCase = false;
    bool hasLowerCase = false;
    bool hasDigit = false;
    bool hasSpecialChar = false;

    for (char ch : password) {
        if (isupper(ch)) {
            hasUpperCase = true;
        } else if (islower(ch)) {
            hasLowerCase = true;
        } else if (isdigit(ch)) {
            hasDigit = true;
        } else if (!isalnum(ch)) {
            hasSpecialChar = true;
        }
    }
  
    if (hasLength && hasUpperCase && hasLowerCase && hasDigit && hasSpecialChar) {
        cout << "Password is correct." << endl;
    } else {
        cout << "Пароль is incorrect:" << endl;
        if (!hasLength) {
            cout << " - Password must contain at least 8 symbols." << endl;
        }
        if (!hasUpperCase) {
            cout << " - Password must contain at least 1 uppercase letter." << endl;
        }
        if (!hasLowerCase) {
            cout << " - Password must contain at least 1 lowercase letter." << endl;
        }
        if (!hasDigit) {
            cout << " - Password must contain at least 1 digit." << endl;
        }
        if (!hasSpecialChar) {
            cout << " - Password must contain at least 1 special character." << endl;
        }
    }

    return 0;
}
