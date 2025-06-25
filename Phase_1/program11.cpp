#include <iostream>
using namespace std;

int square(int &a, int &b);

int main()
{
    int a;
    cout << "Enter any number: ";
    cin >> a;

    cout << "The square of a(" << a << ") is " << square(a);
}

int square(int a)
{
    return a * a;
}
