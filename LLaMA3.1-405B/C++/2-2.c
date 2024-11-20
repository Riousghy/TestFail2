#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double radius;

    cout << "Enter the radius of the circle: ";
    cin >> radius;

    double area = M_PI * (radius * radius);
    cout << "The area of the circle is: " << area << endl;

    return 0;
}

