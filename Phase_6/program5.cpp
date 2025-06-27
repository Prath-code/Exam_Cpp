#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double b = 13.0;
    double a = 6.0;

    double c = sqrt(a * a + b * b);

    cout << "The length of the third side (hypotenuse) is: " << c << " cm" << endl;
    return 0;
}