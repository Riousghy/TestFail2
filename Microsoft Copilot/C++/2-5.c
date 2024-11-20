#include <iostream>
using namespace std;

class BankAccount {
private:
    double balance;

public:
    BankAccount() {
        balance = 0;
    }

    void deposit(double amount) {
        balance += amount;
        cout << "Deposit successful! New balance: " << balance << endl;
    }

    void withdraw(double amount) {
        if (amount > balance) {
            cout << "Insufficient balance!" << endl;
        } else {
            balance -= amount;
            cout << "Withdrawal successful! New balance: " << balance << endl;
        }
    }

    void checkBalance() {
        cout << "Current balance: " << balance << endl;
    }
};

int main() {
    BankAccount account;
    int choice;

    while (true) {
        cout << "1. Deposit" << endl;
        cout << "2. Withdraw" << endl;
        cout << "3. Check Balance" << endl;
        cout << "4. Exit" << endl;

        cout << "Enter your choice (1/2/3/4): ";
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
                cout << "Exiting..." << endl;
                return 0;
            default:
                cout << "Invalid choice" << endl;
        }
    }

    return 0;
}

