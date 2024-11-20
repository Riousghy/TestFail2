// Circle Area Calculator Program

#include <iostream>
#include <cmath>
using namespace std;

double calculateCircleArea(double radius) {
    return M_PI * pow(radius, 2);
}

int main() {
    double radius;

    cout << "Circle Area Calculator Program" << endl;
    cout << "Enter the radius of the circle: ";
    cin >> radius;

    double area = calculateCircleArea(radius);
    cout << "The area of the circle is: " << area << endl;

    return 0;
}

