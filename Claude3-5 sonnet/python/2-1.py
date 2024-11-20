def calculator():
    num1 = float(input("Enter the first number: "))
    op = input("Enter the operator (+, -, *, /): ")
    num2 = float(input("Enter the second number: "))

    if op == "+":
        result = num1 + num2
        print(f"Result: {num1} + {num2} = {result}")
    elif op == "-":
        result = num1 - num2
        print(f"Result: {num1} - {num2} = {result}")
    elif op == "*":
        result = num1 * num2
        print(f"Result: {num1} * {num2} = {result}")
    elif op == "/":
        if num2 != 0:
            result = num1 / num2
            print(f"Result: {num1} / {num2} = {result}")
        else:
            print("Error: Division by zero is not allowed.")
    else:
        print("Invalid operator!")

calculator()

