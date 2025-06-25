#include <iostream>
using namespace std;

int main() {
    int base = 56, height = 21;
    double area = 0.5 * base * height;
    int areaInt = area;
    int sum = 0;

    while (areaInt > 0) {
        sum += areaInt % 10;
        areaInt /= 10;
    }

    cout << "Area of triangle: " << area << endl;
    cout << "Sum of digits of area: " << sum << endl;
    return 0;
}
