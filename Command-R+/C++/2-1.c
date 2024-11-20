#include <iostream>
#include <iomanip>

double performCalculation(double num1, double num2, char operation) {
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
                std::cout << "Error: Division by zero is not allowed." << std::endl;
                result = 0; 
            }
            break;
        default:
            std::cout << "Invalid operation entered." << std::endl;
            result = 0; 
    }
    return result;
}

int main() {
    double num1, num2;
    char operation;

    std::cout << "Simple Calculator" << std::endl;
    std::cout << "Enter first number: ";
    std::cin >> num1;
    std::cout << "Enter an operation (+, -, *, /): ";
    std::cin >> operation;
    std::cout << "Enter second number: ";
    std::cin >> num2;

    double result = performCalculation(num1, num2, operation);

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Result: " << result << std::endl;

    return 0;
}

