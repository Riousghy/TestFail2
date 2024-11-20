#include <iostream>
#include <limits>

using namespace std;

class BankAccount {
private:
    double balance;

public:
    BankAccount() : balance(0) {} // Default constructor

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposit successful. New balance: " << balance << endl;
        } else {
            cout << "Invalid deposit amount." << endl;
        }
    }

    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawal successful. New balance: " << balance << endl;
        } else if (amount <= 0) {
            cout << "Invalid withdrawal amount." << endl;
        } else {
            cout << "Insufficient balance." << endl;
        }
    }

    double checkBalance() {
        return balance;
    }
};

int main() {
    BankAccount account;

    char choice;
    double amount;

    do {
        cout << "\nBank Account Management System" << endl;
        cout << "1. Deposit" << endl;
        cout << "2. Withdraw" << endl;
        cout << "3. Check Balance" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case '1':
                cout << "Enter amount to deposit: ";
                cin >> amount;
                account.deposit(amount);
                break;
            case '2':
                cout << "Enter amount to withdraw: ";
                cin >> amount;
                account.withdraw(amount);
                break;
            case '3':
                cout << "Current balance: " << account.checkBalance() << endl;
                break;
            case '4':
                cout << "Exiting..." << endl;
                break;
            default:
                cout

