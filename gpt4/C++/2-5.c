#include <iostream>
using namespace std;

class BankAccount {
private:
    double balance;
public:
    BankAccount() : balance(0) {}
    void deposit(double amount) {
        balance += amount;
        cout << "Deposited: " << amount << ", New Balance: " << balance << endl;
    }
    void withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
            cout << "Withdrawn: " << amount << ", New Balance: " << balance << endl;
        } else {
            cout << "Insufficient balance" << endl;
        }
    }
    void displayBalance() {
        cout << "Current Balance: " << balance << endl;
    }
};

int main() {
    BankAccount account;
    account.deposit(100);
    account.withdraw(50);
    account.displayBalance();
    return 0;
}


