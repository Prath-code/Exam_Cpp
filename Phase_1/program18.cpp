#include <iostream>
using namespace std;

int factorial(int n) {
    int f = 1;
    for (int i = 2; i <= n; ++i)
        f *= i;
    return f;
}

int main() {
    int n;
    cout << "Enter any number: ";
    cin >> n;
    cout << factorial(n);
    return 0;
}
