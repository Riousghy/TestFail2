class BankAccount:
    def __init__(self):
        self.balance = 0

    def deposit(self, amount):
        if amount > 0:
            self.balance += amount
            print(f"Amount deposited: ${amount}. New Balance: ${self.balance}.")
        else:
            print("Invalid deposit amount.")

    def withdraw(self, amount):
        if 0 < amount <= self.balance:
            self.balance -= amount
            print(f"Amount withdrawn: ${amount}. New Balance: ${self.balance}.")
        else:
            print("Invalid withdrawal amount or insufficient funds.")

    def check_balance(self):
        print(f"Current balance: ${self.balance}")

# Example usage
account = BankAccount()
account.deposit(1000)
account.withdraw(500)
account.check_balance()


