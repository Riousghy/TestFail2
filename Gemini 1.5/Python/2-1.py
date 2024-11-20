# 1. Simple Python Calculator

def calculator():
    """
    This function performs basic arithmetic operations (addition, subtraction, multiplication, and division).
    """
    while True:
        try:
            num1 = float(input("Enter first number: "))
            op = input("Enter operator (+, -, *, /): ")
            num2 = float(input("Enter second number: "))

            if op == '+':
                print(num1 + num2)
            elif op == '-':
                print(num1 - num2)
            elif op == '*':
                print(num1 * num2)
            elif op == '/':
                if num2 == 0:
                    print("Error: Division by zero!")
                else:
                    print(num1 / num2)
            else:
                print("Invalid operator!")
                break

            choice = input("Do you want to continue? (y/n): ")
            if choice.lower() != 'y':
                break
        except ValueError:
            print("Invalid input. Please enter numbers only.")


if __name__ == "__main__":
    calculator()


# 2. Circle Area Calculator

def circle_area():
    """
    This function calculates the area of a circle given its radius.
    """
    import math

    radius = float(input("Enter the radius of the circle: "))
    area = math.pi * radius**2
    print("The area of the circle is:", area)


if __name__ == "__main__":
    circle_area()


# 3. File Read and Write

def file_read_write():
    """
    This function reads content from one file and writes it to another file.
    """
    try:
        with open("input.txt", "r") as file_in:
            content = file_in.read()

        with open("output.txt", "w") as file_out:
            file_out.write(content)

        print("File copied successfully!")
    except FileNotFoundError:
        print("Error: Input file not found!")


if __name__ == "__main__":
    file_read_write()

