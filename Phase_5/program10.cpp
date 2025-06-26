#include <iostream>
#include <cmath>
using namespace std;

bool isArmstrong(int n) {
    int sum = 0, temp = n, digits = 0;
    while (temp) {
        temp /= 10;
        digits++;
    }
    temp = n;
    while (temp) {
        sum += pow(temp % 10, digits);
        temp /= 10;
    }
    return sum == n;
}

int main() {
    int num;
    cout << "Enter number: ";
    cin >> num;
    if (isArmstrong(num))
        cout << "Armstrong Number" << endl;
    else
        cout << "Not Armstrong" << endl;
    return 0;
}
