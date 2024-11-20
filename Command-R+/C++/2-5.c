#include <iostream>

class BankAccount {
private:
    double balance;

public:
    BankAccount() : balance(0.0) {}

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            std::cout << "Deposited $" << amount << " successfully." << std::endl;
        } else {
            std::cout << "Invalid deposit amount." << std::endl;
        }
    }

    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            std::cout << "Withdrawn $" << amount << " successfully." << std::endl;
        } else {
            std::cout << "Insufficient balance or invalid withdrawal amount." << std::endl;
        }
    }

    void checkBalance() {
        std::cout << "Your current balance is: $" << balance << std::endl;
    }
};

int main() {
    BankAccount account;

    int choice;
    do {
        std::cout << "Bank Account Management System" << std::endl;
        std::cout << "1. Deposit" << std::endl;
        std::cout << "2. Withdraw" << std::endl;
        std::cout << "3. Check Balance" << std::endl;
        std::cout << "4. Exit" << std::endl;
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                double depositAmount;
                std::cout << "Enter amount to deposit: $";
                std::cin >> depositAmount;
                account.deposit(depositAmount);
                break;
            case 2:
                double withdrawAmount;
                std::cout << "Enter amount to withdraw: $";
                std::cin >> withdrawAmount;
                account.withdraw(withdrawAmount);
                break;
            case 3:
                account.checkBalance();
                break;
            case 4:
                std::cout << "Exiting the program." << std::endl;
                break;
            default:
                std::cout << "Invalid choice. Please select a valid option." << std::endl;
        }
    } while (choice != 4);

    return 0;
}

