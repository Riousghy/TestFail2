class BankAccount:
    def __init__(self, name, balance):
        self.name = name
        self.balance = balance

    def deposit(self, amount):
        self.balance += amount
        print("Deposited:", amount)

    def withdraw(self, amount):
        if amount <= self.balance:
            self.balance -= amount
            print("Withdrawn:", amount)
        else:
            print("Insufficient funds.")

    def check_balance(self):
        print("Your current balance is:", self.balance)

# Example usage
account = BankAccount("John Doe", 1000)

while True:
    print("\nChoose an option:")
    print("1. Deposit")
    print("2. Withdraw")
    print("3. Check Balance")
    print("4. Exit")

    choice = int(input("Enter your choice: "))

    if choice == 1:
        amount = float(input("Enter the deposit amount: "))
        account.deposit(amount)
    elif choice == 2:
        amount = float(input("Enter the withdrawal amount: "))
        account.withdraw(amount)
    elif choice == 3:
        account.check_balance()
    elif choice == 4:
        print("Thank you for using the bank account management system!")
        break
    else:
        print("Invalid choice. Please try again.")

