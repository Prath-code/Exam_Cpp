#include <iostream>
using namespace std;

class Shape
{
protected:
    double width, height;

public:
    Shape(double w, double h) : width(w), height(h) {}
    virtual double area() = 0;
};

class Triangle : public Shape
{
public:
    Triangle(double w, double h) : Shape(w, h) {}
    double area() override
    {
        return 0.5 * width * height;
    }
};

class Rectangle : public Shape
{
public:
    Rectangle(double w, double h) : Shape(w, h) {}
    double area() override
    {
        return width * height;
    }
};

int main()
{
    Triangle t(10, 5);
    Rectangle r(10, 5);

    cout << "Area of Triangle: " << t.area() << endl;
    cout << "Area of Rectangle: " << r.area() << endl;

    return 0;
}