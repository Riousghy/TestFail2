// Simple Calculator Program

#include <iostream>
using namespace std;

void add(double num1, double num2) {
    cout << "Result: " << num1 << " + " << num2 << " = " << num1 + num2 << endl;
}

void subtract(double num1, double num2) {
    cout << "Result: " << num1 << " - " << num2 << " = " << num1 - num2 << endl;
}

void multiply(double num1, double num2) {
    cout << "Result: " << num1 << " * " << num2 << " = " << num1 * num2 << endl;
}

void divide(double num1, double num2) {
    if (num2 != 0) {
        cout << "Result: " << num1 << " / " << num2 << " = " << num1 / num2 << endl;
    } else {
        cout << "Error: Division by zero is not allowed." << endl;
    }
}

int main() {
    int choice;
    double num1, num2;

    cout << "Simple Calculator Program" << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;

    cout << "Enter your choice (1/2/3/4): ";
    cin >> choice;

    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    switch (choice) {
        case 1:
            add(num1, num2);
            break;
        case 2:
            subtract(num1, num2);
            break;
        case 3:
            multiply(num1, num2);
            break;
        case 4:
            divide(num1, num2);
            break;
        default:
            cout << "Invalid choice." << endl;
    }

    return 0;
}

