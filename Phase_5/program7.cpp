#include <iostream>
using namespace std;

void fibonacci(int n) {
    int a = 0, b = 1, c;
    while (a <= n) {
        cout << a << " ";
        c = a + b;
        a = b;
        b = c;
    }
}

int main() {
    int num;
    cout << "Enter limit: ";
    cin >> num;
    fibonacci(num);
    return 0;
}
