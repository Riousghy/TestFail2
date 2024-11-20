#include <iostream>
#include <cmath>

int main() {
    double radius, area;

    std::cout << "Circle Area Calculator" << std::endl;
    std::cout << "Enter the radius of the circle: ";
    std::cin >> radius;

    area = M_PI * radius * radius;

    std::cout << "The area of the circle is: " << area << std::endl;

    return 0;
}

