# Simple Bank Account Management System

class BankAccount:
    def __init__(self, account_number, account_name, initial_balance=0):
        """
        Initializes a BankAccount object.

        Args:
            account_number (str): The account number.
            account_name (str): The account name.
            initial_balance (float, optional): The initial balance. Defaults to 0.
        """
        self.account_number = account_number
        self.account_name = account_name
        self.balance = initial_balance

    def deposit(self, amount):
        """
        Deposits a certain amount into the account.

        Args:
            amount (float): The amount to deposit.
        """
        if amount > 0:
            self.balance += amount
            print(f"Deposited ${amount:.2f} into account {self.account_number}.")
        else:
            print("Invalid deposit amount.")

    def withdraw(self, amount):
        """
        Withdraws a certain amount from the account.

        Args:
            amount (float): The amount to withdraw.
        """
        if 0 < amount <= self.balance:
            self.balance -= amount
            print(f"Withdrew ${amount:.2f} from account {self.account_number}.")
        elif amount <= 0:
            print("Invalid withdrawal amount.")
        else:
            print("Insufficient balance.")

    def check_balance(self):
        """
        Returns the current balance.
        """
        print(f"Current balance in account {self.account_number}: ${self.balance:.2f}")


def main():
    print("Simple Bank Account Management System")

    # Create a new bank account
    account_number = input("Enter account number: ")
    account_name = input("Enter account name: ")
    initial_balance = float(input("Enter initial balance: "))

    account = BankAccount(account_number, account_name, initial_balance)

    while True:
        print("\nMenu:")
        print("1. Deposit")
        print("2. Withdraw")
        print("3. Check Balance")
        print("4. Exit")

        choice = input("Enter your choice: ")

        if choice == "1":
            amount = float(input("Enter amount to deposit: "))
            account.deposit(amount)
        elif choice == "2":
            amount = float(input("Enter amount to withdraw: "))
            account.withdraw(amount)
        elif choice == "3":
            account.check_balance()
        elif choice == "4":
            print("Exiting the system. Goodbye!")
            break
        else:
            print("Invalid choice. Please try again.")


if __name__ == "__main__":
    main()

