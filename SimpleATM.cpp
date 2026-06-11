#include <iostream>
using namespace std;

int main () {
    float balance = 1000, amount;
    int choice;

    do {
        cout << "\n===== ATM MENU =====" << endl;
        cout << "1. Check Balance" << endl;
        cout << "2. Deposit" << endl;
        cout << "3. Withdraw" << endl;
        cout << "4. Exit" << endl;
        cout << "Choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "\nBalance: $" << balance << endl;
                break;
            case 2: 
                cout << "\nEnter deposit amount: $";
                cin >> amount;
                balance += amount;
                cout << "\nBalance: $" << balance << endl;
                break;
            case 3:
                cout << "\nEnter withdrawal amount: $";
                cin >> amount;
                if (amount > balance) cout << "\nInsufficient balance!" << endl;
                else {
                    balance -= amount;
                    cout << "\nBalance: $" << balance << endl;
                }
                break;
            case 4:
                cout << "\nThank you for using the ATM!" << endl;
                break;
            default:
                cout << "\nInvalid choice!" << endl;
        }
    } while (choice != 4);
    return 0;
}