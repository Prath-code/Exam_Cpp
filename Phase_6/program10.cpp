#include <iostream>
#include <cmath>
using namespace std;

class Complex
{
    double real, imag;

public:
    Complex(double r = 0, double i = 0) : real(r), imag(i) {}

    Complex operator+(const Complex &c) const
    {
        return Complex(real + c.real, imag + c.imag);
    }

    Complex operator-(const Complex &c) const
    {
        return Complex(real - c.real, imag - c.imag);
    }

    Complex operator*(const Complex &c) const
    {
        return Complex(real * c.real - imag * c.imag, real * c.imag + imag * c.real);
    }

    Complex operator/(const Complex &c) const
    {
        double denom = c.real * c.real + c.imag * c.imag;
        return Complex(
            (real * c.real + imag * c.imag) / denom,
            (imag * c.real - real * c.imag) / denom);
    }

    void display() const
    {
        cout << real << (imag >= 0 ? " + " : " - ") << abs(imag) << "i";
    }
};

int main()
{
    double r1, i1, r2, i2;
    cout << "Enter real and imaginary part of first complex number: ";
    cin >> r1 >> i1;
    cout << "Enter real and imaginary part of second complex number: ";
    cin >> r2 >> i2;

    Complex c1(r1, i1), c2(r2, i2);

    cout << "\nAddition: ";
    (c1 + c2).display();

    cout << "\nSubtraction: ";
    (c1 - c2).display();

    cout << "\nMultiplication: ";
    (c1 * c2).display();

    cout << "\nDivision: ";
    (c1 / c2).display();

    cout << endl;
    return 0;
}