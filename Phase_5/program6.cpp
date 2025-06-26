#include <iostream>
using namespace std;

int reverse(int n) {
    int rev = 0;
    while (n > 0) {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    return rev;
}

int main() {
    int num;
    cout << "Enter number to reverse: ";
    cin >> num;
    cout << "Reversed number: " << reverse(num) << endl;
    return 0;
}
