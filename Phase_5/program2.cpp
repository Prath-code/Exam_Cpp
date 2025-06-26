#include <iostream>
using namespace std;

int factorial(int n) {
    int f = 1;
    for (int i = 2; i <= n; i++)
        f *= i;
    return f;
}

int main() {
    int start, end;
    cout << "Enter start of range: ";
    cin >> start;
    cout << "Enter end of range: ";
    cin >> end;
    for (int i = start; i <= end; i++)
        cout << "Factorial of " << i << " is " << factorial(i) << endl;
    return 0;
}
