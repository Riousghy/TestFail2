def calculator():
    num1 = float(input("Enter the first number: "))
    operation = input("Enter the operation (+, -, *, /): ")
    num2 = float(input("Enter the second number: "))

    if operation == '+':
        print(f"The result is {num1 + num2}")
    elif operation == '-':
        print(f"The result is {num1 - num2}")
    elif operation == '*':
        print(f"The result is {num1 * num2}")
    elif operation == '/':
        if num2 == 0:
            print("Error: Division by zero is not allowed.")
        else:
            print(f"The result is {num1 / num2}")
    else:
        print("Invalid operation. Please choose from +, -, *, or /.")

calculator()


