import java.util.Scanner;

class BankAccount {
    private double balance;

    public BankAccount() {
        this.balance = 0;
    }

    public void deposit(double amount) {
        this.balance += amount;
        System.out.println("Deposit successful! New balance: " + this.balance);
    }

    public void withdraw(double amount) {
        if (amount > this.balance) {
            System.out.println("Insufficient balance!");
        } else {
            this.balance -= amount;
            System.out.println("Withdrawal successful! New balance: " + this.balance);
        }
    }

    public void checkBalance() {
        System.out.println("Current balance: " + this.balance);
    }
}

public class BankAccountManagement {
    public static void main(String[] args) {
        BankAccount account = new BankAccount();
        Scanner scanner = new Scanner(System.in);

        while (true) {
            System.out.println("1. Deposit");
            System.out.println("2. Withdraw");
            System.out.println("3. Check Balance");
            System.out.println("4. Exit");

            System.out.print("Enter your choice (1/2/3/4): ");
            int choice = scanner.nextInt();

            switch (choice) {
                case 1:
                    System.out.print("Enter the amount to deposit: ");
                    double depositAmount = scanner.nextDouble();
                    account.deposit(depositAmount);
                    break;
                case 2:
                    System.out.print("Enter the amount to withdraw: ");
                    double withdrawAmount = scanner.nextDouble();
                    account.withdraw(withdrawAmount);
                    break;
                case 3:
                    account.checkBalance();
                    break;
                case 4:
                    System.out.println("Exiting...");
                    scanner.close();
                    return;
                default:
                    System.out.println("Invalid choice");
            }
        }
    }
}

