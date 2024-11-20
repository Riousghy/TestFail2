import math

def calculate_circle_area():
    radius = float(input("Enter the radius of the circle: "))
    area = math.pi * radius ** 2
    return f"Area of the circle: {area}"

print(calculate_circle_area())

