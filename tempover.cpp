#include <iostream>
#include <cmath>
using namespace std;

// Template function to calculate the area of a circle
template <typename T>
T area(T radius) {
    return M_PI * radius * radius;
}

// Template function to calculate the area of a rectangle
template <typename T>
T area(T length, T width) {
    return length * width;
}

// Template function to calculate the area of a triangle
template <typename T>
T area(T base, T height, bool isTriangle) {
    if (isTriangle) {
        return 0.5 * base * height;
    }
    return 0;
}

int main() {
    // Area of a circle
    double circleRadius = 5.0;
    cout << "Area of the circle: " << area(circleRadius) << endl;

    // Area of a rectangle
    double rectLength = 4.0;
    double rectWidth = 6.0;
    cout << "Area of the rectangle: " << area(rectLength, rectWidth) << endl;

    // Area of a triangle
    double triBase = 4.0;
    double triHeight = 5.0;
    cout << "Area of the triangle: " << area(triBase, triHeight, true) << endl;

    return 0;
}
