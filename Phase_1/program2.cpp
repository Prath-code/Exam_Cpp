#include <iostream>
using namespace std;

int multiply(int a, int b, int c);

int main()
{
    int num1, num2, num3;
    cout << "Enter value num1: ";
    cin >> num1;
    cout << "Enter value num2: ";
    cin >> num2;
    cout << "Enter value num3: ";
    cin >> num3;
    cout << "The multiplication of " << num1 << ", " << num2 << ", and " << num3 << " is " << multiply(num1, num2, num3) << endl;
    return 0;
}

int multiply(int a, int b, int c)
{
    return a * b * c;
}
