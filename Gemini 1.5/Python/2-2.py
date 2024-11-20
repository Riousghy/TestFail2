# 2. Circle Area Calculator

import math  # Import the math module for the pi constant

def calculate_circle_area():
  """
  This function calculates the area of a circle given its radius.
  """
  try:
    radius = float(input("Enter the radius of the circle: "))
    area = math.pi * radius**2
    print("The area of the circle is:", area)
  except ValueError:
    print("Invalid input. Please enter a number for the radius.")


if __name__ == "__main__":
  calculate_circle_area()



