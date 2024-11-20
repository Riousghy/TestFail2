class BankAccount:
    def __init__(self, name, initial_balance=0.0):
        self.name = name
        self.balance = initial_balance

    def deposit(self, amount):
        if amount > 0:
            self.balance += amount
            print(f"Deposited ${amount}. New balance: ${self.balance}")
        else:
            print("Invalid deposit amount. Please enter a positive amount.")

    def withdraw(self, amount):
        if 0 < amount <= self.balance:
            self.balance -= amount
            print(f"Withdrew ${amount}. New balance: ${self.balance}")
        else:
            print("Invalid withdrawal amount or insufficient funds.")

    def check_balance(self):
        print(f"Account holder: {self.name}, Balance: ${self.balance}")


def bank_account_system():
    name = input("Enter account holder name: ")
    initial_balance = float(input("Enter initial balance: $"))
    account = BankAccount(name, initial_balance)

    while True:
        print("\nBank Account Menu:")
        print("1. Deposit")
        print("2. Withdraw")
        print("3. Check Balance")
        print("4. Exit")

        choice = int(input("Enter your choice: "))

        if choice == 1:
            amount = float(input("Enter deposit amount: $"))
            account.deposit(amount)
        elif choice == 2:
            amount = float(input("Enter withdrawal amount: $"))
            account.withdraw(amount)
        elif choice == 3:
            account.check_balance()
        elif choice == 4:
            print("Exiting...")
            break
        else:
            print("Invalid choice. Please try again.")

bank_account_system()

