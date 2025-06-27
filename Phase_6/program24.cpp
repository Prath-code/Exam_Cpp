#include <iostream>
using namespace std;

class Swap
{
    int a, b;

public:
    Swap(int x, int y)
    {
        a = x;
        b = y;
        cout << "Before Swap: a = " << a << ", b = " << b << endl;
    }

    Swap(const Swap &obj)
    {
        a = obj.b;
        b = obj.a;
        cout << "After Swap: a = " << a << ", b = " << b << endl;
    }
};

int main()
{
    int x, y;
    cout << "Enter two numbers: ";
    cin >> x >> y;

    Swap s1(x, y);
    Swap s2(s1);

    return 0;
}