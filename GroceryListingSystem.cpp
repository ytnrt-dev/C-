#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() 
{
    vector<string> groceries;
    string grocery;
    int choice;
    char addMore;

    do {
        cout << "\n===== GROCERY LIST SYSTEM =====\n";
        cout << "1. Show Grocery List" << endl;
        cout << "2. Add Grocery to List" << endl;
        cout << "3. Edit Grocery List" << endl;
        cout << "4. Exit" << endl;
        cout << "Choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                if (groceries.empty()) {
                    cout << "\nGrocery list is empty!\n";
                } else {
                    cout << "\n==== GROCERY LIST ====\n";
                    for (int i = 0; i < groceries.size(); i++) {
                        cout << (i + 1) << ". " << groceries[i] << endl;
                    }
                }
                break;
            case 2:
                if (groceries.size() >= 10) {
                    cout << "Grocery list is full!";
                    break;
                }
                do {
                    cout << "Enter grocery: ";
                    cin.ignore();
                    getline(cin, grocery);
                    groceries.push_back(grocery);
                    cout << "Grocery added successfully!\n";
                    if (groceries.size() >= 10) {
                        cout << "Grocery list is now full!";
                        break;
                    }
                    cout << "Add another? (y/n): ";
                    cin >> addMore;
                } while (addMore == 'y' || addMore == 'Y');
                break;
            case 3:
                if (groceries.empty()) {
                    cout << "\nGrocery list is empty!\n";
                    break;
                }
                int index;
                cout << "\n==== GROCERY LIST ====\n";
                for (int i = 0; i < groceries.size(); i++) {
                    cout << (i + 1) << ". " << groceries[i] << endl;
                }
                cout << "Enter grocery item number to edit: ";
                cin >> index;
                if (index < 1 || index > groceries.size()) {
                    cout << "Invalid item number!\n";
                } else {
                    cout << "Enter new grocery: ";
                    cin.ignore();
                    getline(cin, grocery);
                    groceries[index - 1] = grocery;
                    cout << "\nGrocery Updated Successfully!\n";
                }
                break;
            case 4:
                cout << "\nExiting the system...\n";
                break;
            default:
                cout << "\nInvalid choice!" << endl;
        }
    } while (choice != 4);
    return 0;
}