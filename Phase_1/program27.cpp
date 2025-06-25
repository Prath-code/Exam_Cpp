#include <iostream>
using namespace std;
int main() {
    int n, sum = 0;
    cout << "Enter any number: ";
    cin >> n;
    while (n) {
        sum += n % 10;
        n /= 10;
    }
    cout << sum;
    return 0;
}
