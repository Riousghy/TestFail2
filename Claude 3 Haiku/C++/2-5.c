#include <iostream>
#include <iomanip>
using namespace std;

class BankAccount {
private:
    double balance;

public:
    BankAccount() : balance(0.0) {}

    void deposit(double amount) {
        balance += amount;
        cout << "Deposited $" << fixed << setprecision(2) << amount << ". New balance: $" << balance << endl;
    }

    bool withdraw(double amount) {
        if (amount > balance) {
            cout << "Insufficient funds. Current balance: $" << balance << endl;
            return false;
        }
        balance -= amount;
        cout << "Withdrew $" << fixed << setprecision(2) << amount << ". New balance: $" << balance << endl;
        return true;
    }

    double getBalance() const {
        return balance;
    }
};

int main() {
    BankAccount account;
    int choice;
    double amount;

    while (true) {
        cout << "\nBank Account Management System" << endl;
        cout << "1. Deposit" << endl;
        cout << "2. Withdraw" << endl;
        cout << "3. Check Balance" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice (1-4): ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter the amount to deposit: $";
                cin >> amount;
                account.deposit(amount);
                break;
            case 2:
                cout << "Enter the amount to withdraw: $";
                cin >> amount;
                account.withdraw(amount);
                break;
            case 3:
                cout << "Current balance: $" << account.getBalance() << endl;
                break;
            case 4:
                cout << "Exiting the program..." << endl;
                return 0;
            default:
                cout << "Invalid choice. Please try again." << endl;
                break;
        }
    }
}

