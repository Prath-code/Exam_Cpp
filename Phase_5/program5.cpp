#include <iostream>
#include <cmath>
using namespace std;

int maximum(int a, int b, int c) {
    return max(a, max(b, c));
}

int square(int a) {
    return a * a;
}

float squareRoot(int a) {
    return sqrt(a);
}

void components(int a) {
    cout << "Unit: " << a % 10 << endl;
    cout << "Tens: " << (a / 10) % 10 << endl;
    cout << "Hundreds: " << (a / 100) % 10 << endl;
}

int main() {
    int a, b, c, num, choice;
    cout << "1.Max of 3\n2.Square\n3.Square Root\n4.Components\nEnter choice: ";
    cin >> choice;
    if (choice == 1) {
        cout << "Enter 3 numbers: ";
        cin >> a >> b >> c;
        cout << "Max: " << maximum(a, b, c) << endl;
    } else if (choice == 2) {
        cout << "Enter number: ";
        cin >> num;
        cout << "Square: " << square(num) << endl;
    } else if (choice == 3) {
        cout << "Enter number: ";
        cin >> num;
        cout << "Square Root: " << squareRoot(num) << endl;
    } else if (choice == 4) {
        cout << "Enter number: ";
        cin >> num;
        components(num);
    }
    return 0;
}
