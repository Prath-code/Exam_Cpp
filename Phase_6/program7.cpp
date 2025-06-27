#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double a, b, c;
    cout << "Enter the three sides of the triangle: ";
    cin >> a >> b >> c;

    if (a > b && a > c)
    {
        double temp = c;
        c = a;
        a = temp;
    }
    else if (b > a && b > c)
    {
        double temp = c;
        c = b;
        b = temp;
    }

    if (a + b <= c || a <= 0 || b <= 0 || c <= 0)
    {
        cout << "The given sides do not form a valid triangle." << endl;
        return 1;
    }

    double a2b2 = a * a + b * b;
    double c2 = c * c;

    if (abs(a2b2 - c2) < 1e-9)
    {
        cout << "The triangle is a right triangle." << endl;
    }
    else if (a2b2 > c2)
    {
        cout << "The triangle is an acute triangle." << endl;
    }
    else
    {
        cout << "The triangle is an obtuse triangle." << endl;
    }

    return 0;
}