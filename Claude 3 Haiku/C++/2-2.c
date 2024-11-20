#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double radius, area;
    const double PI = 3.14159;

    cout << "Enter the radius of the circle: ";
    cin >> radius;

    area = PI * pow(radius, 2);

    cout << "The area of the circle with radius " << radius << " is " << area << " square units." << endl;

    return 0;
}
