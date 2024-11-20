import math

def calculate_circle_area():
    radius = float(input("Enter the radius of the circle: "))
    area = math.pi * radius ** 2
    return f"The area of the circle is: {area}"

print(calculate_circle_area())

