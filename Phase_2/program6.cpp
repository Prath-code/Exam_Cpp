#include <iostream>
using namespace std;

int main() {
    char op;
    float a, b;

    do {
        cout << "Enter first number: ";
        cin >> a;
        cout << "Enter operator (+, -, *, /): ";
        cin >> op;
        cout << "Enter second number: ";
        cin >> b;

        switch(op) {
            case '+': cout << "Result: " << a + b << endl; break;
            case '-': cout << "Result: " << a - b << endl; break;
            case '*': cout << "Result: " << a * b << endl; break;
            case '/': 
                if (b != 0) cout << "Result: " << a / b << endl;
                else cout << "Cannot divide by zero" << endl;
                break;
            default: cout << "Invalid operator" << endl;
        }

        cout << "Do you want to continue? (y/n): ";
        cin >> op;
    } while(op == 'y' || op == 'Y');
    
    return 0;
}
