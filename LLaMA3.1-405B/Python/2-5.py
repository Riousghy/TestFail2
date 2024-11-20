class BankAccount:
    def __init__(self):
        self.balance = 0

    def deposit(self, amount):
        self.balance += amount
        print("Deposit successful! New balance:", self.balance)

    def withdraw(self, amount):
        if amount > self.balance:
            print("Insufficient balance!")
        else:
            self.balance -= amount
            print("Withdrawal successful! New balance:", self.balance)

    def check_balance(self):
        print("Current balance:", self.balance)

def bank_account_management():
    account = BankAccount()

    while True:
        print("1. Deposit")
        print("2. Withdraw")
        print("3. Check Balance")
        print("4. Exit")

        choice = input("Enter your choice (1/2/3/4): ")

        if choice == '1':
            amount = float(input("Enter the amount to deposit: "))
            account.deposit(amount)
        elif choice == '2':
            amount = float(input("Enter the amount to withdraw: "))
            account.withdraw(amount)
        elif choice == '3':
            account.check_balance()
        elif choice == '4':
            break
        else:
            print("Invalid choice")

bank_account_management()

