#include <iostream>
using namespace std;
int reverse(int n) {
    int r = 0;
    while (n) {
        r = r * 10 + n % 10;
        n /= 10;
    }
    return r;
}
int main() {
    int a, b, c;
    cout << "Enter value of 'a': ";
    cin >> a;
    cout << "Enter value of 'b': ";
    cin >> b;
    cout << "Enter value of 'c': ";
    cin >> c;
    cout << reverse(a) << " " << reverse(b) << " " << reverse(c);
    return 0;
}
