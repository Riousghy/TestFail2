#include <iostream>

using namespace std;

class BankAccount {
public:
    BankAccount(string name, double balance) : name(name), balance(balance) {}

    void deposit(double amount) {
        balance += amount;
        cout << "Deposited: $" << amount << endl;
    }

    void withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
            cout << "Withdrawn: $" << amount << endl;
        } else {
            cout << "Insufficient funds." << endl;
        }
    }

    void checkBalance() {
        cout << "Your current balance is: $" << balance << endl;
    }

private:
    string name;
    double balance;
};

int main() {
    string accountName;
    double initialBalance;

    cout << "Enter your name: ";
    cin >> accountName;

    cout << "Enter your initial balance: ";
    cin >> initialBalance;

    BankAccount account(accountName, initialBalance);

    int choice;

    while (true) {
        cout << "\nChoose an option:\n";
        cout << "1. Deposit\n";
        cout << "2. Withdraw\n";
        cout << "3. Check Balance\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                double amount;
                cout << "Enter the amount to deposit: ";
                cin >> amount;
                account.deposit(amount);
                break;
            }
            case 2: {
                double amount;
                cout << "Enter the amount to withdraw: ";
                cin >> amount;
                account.withdraw(amount);
                break;
            }
            case 3:
                account.checkBalance();
                break;
            case 4:
                cout << "Thank you for using the bank account management system!\n";
                return 0;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    }

    return 0;
}

