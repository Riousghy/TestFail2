#include <iostream>
#include <string>

class BankAccount {
private:
    std::string accountHolderName;
    double balance;

public:
    BankAccount(const std::string& name, double initialBalance = 0.0) 
        : accountHolderName(name), balance(initialBalance) {}

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            std::cout << "Deposited $" << amount << ". New balance: $" << balance << std::endl;
        } else {
            std::cout << "Invalid deposit amount. Please enter a positive amount." << std::endl;
        }
    }

    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            std::cout << "Withdrew $" << amount << ". New balance: $" << balance << std::endl;
        } else {
            std::cout << "Invalid withdrawal amount or insufficient funds." << std::endl;
        }
    }

    void checkBalance() const {
        std::cout << "Account holder: " << accountHolderName << ", Balance: $" << balance << std::endl;
    }
};

int main() {
    std::string name;
    double initialBalance;

    std::cout << "Enter account holder name: ";
    std::getline(std::cin, name);

    std::cout << "Enter initial balance: $";
    std::cin >> initialBalance;

    BankAccount account(name, initialBalance);

    int choice;
    do {
        std::cout << "\nBank Account Menu:\n";
        std::cout << "1. Deposit\n";
        std::cout << "2. Withdraw\n";
        std::cout << "3. Check Balance\n";
        std::cout << "4. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1: {
                double depositAmount;
                std::cout << "Enter deposit amount: $";
                std::cin >> depositAmount;
                account.deposit(depositAmount);
                break;
            }
            case 2: {
                double withdrawAmount;
                std::cout << "Enter withdrawal amount: $";
                std::cin >> withdrawAmount;
                account.withdraw(withdrawAmount);
                break;
            }
            case 3:
                account.checkBalance();
                break;
            case 4:
                std::cout << "Exiting...\n";
                break;
            default:
                std::cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 4);

    return 0;
}

