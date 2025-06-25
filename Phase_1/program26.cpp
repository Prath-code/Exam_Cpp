#include <iostream>
using namespace std;
int main() {
    int n, r = 0, t;
    cout << "Enter any number: ";
    cin >> n;
    t = n;
    while (t) {
        r = r * 10 + t % 10;
        t /= 10;
    }
    cout << (r == n ? "Palindrome" : "Not Palindrome");
    return 0;
}
