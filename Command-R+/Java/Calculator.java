import java.util.Scanner;

public class Calculator {

    public static double performCalculation(double num1, double num2, char operation) {
        double result;
        switch (operation) {
            case '+':
                result = num1 + num2;
                break;
            case '-':
                result = num1 - num2;
                break;
            case '*':
                result = num1 * num2;
                break;
            case '/':
                if (num2 != 0) {
                    result = num1 / num2;
                } else {
                    System.out.println("Error: Division by zero is not allowed.");
                    result = 0; 
                }
                break;
            default:
                System.out.println("Invalid operation entered.");
                result = 0; 
        }
        return result;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        double num1, num2;
        char operation;

        System.out.println("Simple Calculator");
        System.out.print("Enter first number: ");
        num1 = scanner.nextDouble();
        System.out.print("Enter an operation (+, -, *, /): ");
        operation = scanner.next().charAt(0);
        System.out.print("Enter second number: ");
        num2 = scanner.nextDouble();

        double result = performCalculation(num1, num2, operation);

        System.out.println("Result: " + result);

        scanner.close();
    }
}

