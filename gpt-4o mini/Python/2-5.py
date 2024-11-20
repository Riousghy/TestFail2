class BankAccount:
    def __init__(self):
        self.balance = 0.0

    def deposit(self, amount):
        if amount > 0:
            self.balance += amount
            return f"Deposited: ${amount}"
        else:
            return "Invalid deposit amount!"

    def withdraw(self, amount):
        if amount > 0 and amount <= self.balance:
            self.balance -= amount
            return f"Withdrew: ${amount}"
        else:
            return "Invalid withdrawal amount or insufficient funds!"

    def check_balance(self):
        return f"Current balance: ${self.balance}"

def main():
    account = BankAccount()
    while True:
        print("\nBank Account Management System")
        print("1. Deposit")
        print("2. Withdraw")
        print("3. Check Balance")
        print("4. Exit")
        choice = input("Enter your choice: ")

        if choice == '1':
            amount = float(input("Enter amount to deposit: "))
            print(account.deposit(amount))
        elif choice == '2':
            amount = float(input("Enter amount to withdraw: "))
            print(account.withdraw(amount))
        elif choice == '3':
            print(account.check_balance())
        elif choice == '4':
            print("Exiting the program.")
            break
        else:
            print("Invalid choice! Please try again.")

main()

