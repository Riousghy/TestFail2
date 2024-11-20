# Circle Area Calculator Program

import math

def calculate_circle_area(radius):
    """Returns the area of a circle given its radius."""
    return math.pi * (radius ** 2)

def main():
    print("Circle Area Calculator Program")
    radius = float(input("Enter the radius of the circle: "))
    area = calculate_circle_area(radius)
    print("The area of the circle is: ", area)

if __name__ == "__main__":
    main()


