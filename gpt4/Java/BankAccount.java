public class BankAccount {
    private double balance;

    public BankAccount() {
        this.balance = 0;
    }

    public void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            System.out.println("Successfully deposited: $" + amount);
        } else {
            System.out.println("Invalid amount.");
        }
    }

    public void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            System.out.println("Successfully withdrawn: $" + amount);
        } else {
            System.out.println("Invalid transaction.");
        }
    }

    public void checkBalance() {
        System.out.println("Current balance: $" + balance);
    }

    public static void main(String[] args) {
        BankAccount myAccount = new BankAccount();
        myAccount.deposit(1000);
        myAccount.withdraw(500);
        myAccount.checkBalance();
    }
}


