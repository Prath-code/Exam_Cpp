#include <iostream>
using namespace std;

int add(int a, int b) { return a + b; }
int subtract(int a, int b) { return a - b; }
int multiply(int a, int b) { return a * b; }
float divide(int a, int b) { return (float)a / b; }

void calculator() {
    int a, b, choice;
    char cont;
    do {
        cout << "Enter first number: ";
        cin >> a;
        cout << "Enter second number: ";
        cin >> b;
        cout << "Choose operation: 1.Add 2.Subtract 3.Multiply 4.Divide: ";
        cin >> choice;
        switch (choice) {
            case 1: cout << "Result: " << add(a, b) << endl; break;
            case 2: cout << "Result: " << subtract(a, b) << endl; break;
            case 3: cout << "Result: " << multiply(a, b) << endl; break;
            case 4: cout << "Result: " << divide(a, b) << endl; break;
            default: cout << "Invalid choice" << endl;
        }
        cout << "Continue? (y/n): ";
        cin >> cont;
    } while (cont == 'y' || cont == 'Y');
}

int main() {
    calculator();
    return 0;
}
