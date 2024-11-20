import java.util.Scanner;
//  LLM didn't add impor, this is add by Rious
public class BankAccount {
    private String name;
    private double balance;

    public BankAccount(String name, double balance) {
        this.name = name;
        this.balance = balance;
    }

    public void deposit(double amount) {
        balance += amount;
        System.out.println("Deposited: $" + amount);
    }

    public void withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
            System.out.println("Withdrawn: $" + amount);
        } else {
            System.out.println("Insufficient funds.");
        }
    }

    public void checkBalance() {
        System.out.println("Your current balance is: $" + balance);
    }
}

public class BankAccountManagement {
    public static void main(String[] args) {
        BankAccount account = new BankAccount("John Doe", 1000.0);

        Scanner scanner = new Scanner(System.in);

        while (true) {
            System.out.println("\nChoose an option:\n");
            System.out.println("1. Deposit\n");
            System.out.println("2. Withdraw\n");
            System.out.println("3. Check Balance\n");
            System.out.println("4. Exit\n");
            System.out.print("Enter your choice: ");

            int choice = scanner.nextInt();

            switch (choice) {
                case 1:
                    System.out.print("Enter the deposit amount: ");
                    double depositAmount = scanner.nextDouble();
                    account.deposit(depositAmount);
                    break;
                case 2:
                    System.out.print("Enter the withdrawal amount: ");
                    double withdrawalAmount = scanner.nextDouble();
                    account.withdraw(withdrawalAmount);
                    break;
                case 3:
                    account.checkBalance();
                    break;
                case 4:
                    System.out.println("Thank you for using the bank account management system!\n");
                    return;
                default:
                    System.out.println("Invalid choice. Please try again.\n");
            }
        }
    }
}

