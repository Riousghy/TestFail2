#include <iostream>
#include <cmath> // For M_PI
using namespace std;

int main() {
    double radius, area;

    cout << "Enter the radius of the circle: ";
    cin >> radius;

    area = M_PI * radius * radius; // Area = π * r^2

    cout << "The area of the circle is: " << area << endl;

    return 0;
}

