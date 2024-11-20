#include <iostream>
#include <cmath> // Include for M_PI

using namespace std;

int main() {
    double radius;

    cout << "Enter the radius of the circle: ";
    cin >> radius;

    double area = M_PI * pow(radius, 2); // Calculate area

    cout << "The area of the circle is: " << area << endl;

    return 0;
}

