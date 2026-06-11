#include <iostream>
using namespace std;

int main () {
    string password;
    bool hasNumber = false;
    bool hasSymbol = false;

    cout << "==== PASSWORD CHECKER =====" << endl;
    cout << "Enter your password: ";
    cin >> password;

    for (char c : password) {
        if (isdigit(c)) {
            hasNumber = true;
        }
        else if (!isalnum(c)) {
            hasSymbol = true;
        }
    }
    if (password.length() < 6) {
        cout << "Weak";
    }
    else if (password.length() <= 10 && hasNumber && hasSymbol) {
        cout << "Medium";
    }
    else if (password.length() <= 15 && hasNumber && hasSymbol) {
        cout << "Strong";
    }
    else {
        cout << "Add a number or a symbol to make it stronger";
    }
    return 0;
}