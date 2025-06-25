#include <iostream>
using namespace std;
int main()
{
    int base, exp, result = 1;
    cout << "Enter a number: ";
    cin >> base;
    cout << "Enter another number: ";
    cin >> exp;
    for (int i = 0; i < exp; ++i)
        result *= base;
    cout << result;
    return 0;
}
