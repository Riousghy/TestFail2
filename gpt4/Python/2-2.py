import math

def circle_area():
    radius = float(input("Enter the radius of the circle: "))
    area = math.pi * radius ** 2
    print(f"The area of the circle is {area:.2f}")

circle_area()


