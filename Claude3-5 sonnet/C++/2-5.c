#include <iostream>
using namespace std;

class BankAccount {
private:
    double balance;

public:
    BankAccount() : balance(0.0) {}

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposit successful. New balance: $" << balance << endl;
        } else {
            cout << "Invalid deposit amount." << endl;
        }
    }

    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawal successful. New balance: $" << balance << endl;
        } else {
            cout << "Insufficient balance or invalid withdrawal amount." << endl;
        }
    }

    void checkBalance() {
        cout << "Current balance: $" << balance << endl;
    }
};

int main() {
    BankAccount account;
    int choice;

    do {
        cout << "\nBank Account Menu:" << endl;
        cout << "1. Deposit" << endl;
        cout << "2. Withdraw" << endl;
        cout << "3. Check Balance" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                double depositAmount;
                cout << "Enter the deposit amount: ";
                cin >> depositAmount;
                account.deposit(depositAmount);
                break;
            }
            case 2: {
                double withdrawalAmount;
                cout << "Enter the withdrawal amount: ";
                cin >> withdrawalAmount;
                account.withdraw(withdrawalAmount);
                break;
            }
            case 3:
                account.checkBalance();
                break;
            case 4:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 4);

    return 0;
}

