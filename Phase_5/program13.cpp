#include <iostream>
#include <cmath>
using namespace std;

float areaCircle(float r) { return 3.14 * r * r; }
float perimeterCircle(float r) { return 2 * 3.14 * r; }
float areaSquare(float s) { return s * s; }
float areaRectangle(float l, float w) { return l * w; }
float areaTriangle(float b, float h) { return 0.5 * b * h; }
float areaSphere(float r) { return 4 * 3.14 * r * r; }

int main() {
    int ch;
    float a, b;
    cout << "1.Circle Area 2.Circle Perimeter 3.Square 4.Rectangle 5.Triangle 6.Sphere\nEnter choice: ";
    cin >> ch;
    switch (ch) {
        case 1: cout << "Enter radius: "; cin >> a; cout << areaCircle(a) << endl; break;
        case 2: cout << "Enter radius: "; cin >> a; cout << perimeterCircle(a) << endl; break;
        case 3: cout << "Enter side: "; cin >> a; cout << areaSquare(a) << endl; break;
        case 4: cout << "Enter length and width: "; cin >> a >> b; cout << areaRectangle(a, b) << endl; break;
        case 5: cout << "Enter base and height: "; cin >> a >> b; cout << areaTriangle(a, b) << endl; break;
        case 6: cout << "Enter radius: "; cin >> a; cout << areaSphere(a) << endl; break;
    }
    return 0;
}
