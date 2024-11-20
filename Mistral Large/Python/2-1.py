def calculator():
    num1 = float(input("Enter first number: "))
    operation = input("Enter an operator (+, -, *, /): ")
    num2 = float(input("Enter second number: "))

    if operation == '+':
        result = num1 + num2
    elif operation == '-':
        result = num1 - num2
    elif operation == '*':
        result = num1 * num2
    elif operation == '/':
        if num2 != 0:
            result = num1 / num2
        else:
            print("Error! Division by zero.")
            return
    else:
        print("Error! Invalid operator.")
        return

    print("Result:", result)

calculator()

