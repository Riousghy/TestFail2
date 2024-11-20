#include <iostream>

using namespace std;

class BankAccount {
private:
  double balance;

public:
  BankAccount(double initialBalance = 0.0) {
    balance = initialBalance;
  }

  void deposit(double amount) {
    balance += amount;
    cout << "Deposit successful. New balance: " << balance << endl;
  }

  void withdraw(double amount) {
    if (balance >= amount) {
      balance -= amount;
      cout << "Withdrawal successful. New balance: " << balance << endl;
    } else {
      cout << "Insufficient balance." << endl;
    }
  }

  void checkBalance() {
    cout << "Current balance: " << balance << endl;
  }
};

int main() {
  BankAccount account(1000.0); // Initial balance of 1000.0

  int choice;
  double amount;

  do {
    cout << "\nBank Account Menu:" << endl;
    cout << "1. Deposit" << endl;
    cout << "2. Withdraw" << endl;
    cout << "3. Check Balance" << endl;
    cout << "4. Exit" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
      case 1:
        cout << "Enter amount to deposit: ";
        cin >> amount;
        account.deposit(amount);
        break;
      case 2:
        cout << "Enter amount to withdraw: ";
        cin >> amount;
        account.withdraw(amount);
        break;
      case 3:
        account.checkBalance();
        break;
      case 4:
        cout << "Exiting..." << endl;
        break;
      default:
        cout << "Invalid choice." << endl;
    }
  } while (choice != 4);

  return 0;
}

