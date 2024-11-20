// Simple Bank Account Management System

#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    string accountNumber;
    string accountName;
    double balance;

public:
    BankAccount(string accountNumber, string accountName, double initialBalance = 0) {
        this->accountNumber = accountNumber;
        this->accountName = accountName;
        this->balance = initialBalance;
    }

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited $" << amount << " into account " << accountNumber << endl;
        } else {
            cout << "Invalid deposit amount." << endl;
        }
    }

    void withdraw(double amount) {
        if (0 < amount && amount <= balance) {
            balance -= amount;
            cout << "Withdrew $" << amount << " from account " << accountNumber << endl;
        } else if (amount <= 0) {
            cout << "Invalid withdrawal amount." << endl;
        } else {
            cout << "Insufficient balance." << endl;
        }
    }

    void checkBalance() {
        cout << "Current balance in account " << accountNumber << ": $" << balance << endl;
    }
};

int main() {
    string accountNumber, accountName;
    double initialBalance;

    cout << "Simple Bank Account Management System" << endl;
    cout << "Enter account number: ";
    cin >> accountNumber;
    cout << "Enter account name: ";
    cin >> accountName;
    cout << "Enter initial balance: ";
    cin >> initialBalance;

    BankAccount account(accountNumber, accountName, initialBalance);

    while (true) {
        cout << "\nMenu:" << endl;
        cout << "1. Deposit" << endl;
        cout << "2. Withdraw" << endl;
        cout << "3. Check Balance" << endl;
        cout << "4. Exit" << endl;

        int choice;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                double amount;
                cout << "Enter amount to deposit: ";
                cin >> amount;
                account.deposit(amount);
                break;
            }
            case 2: {
                double amount;
                cout << "Enter amount to withdraw: ";
                cin >> amount;
                account.withdraw(amount);
                break;
            }
            case 3:
                account.checkBalance();
                break;
            case 4:
                cout << "Exiting the system. Goodbye!" << endl;
                return 0;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    }

    return 0;
}

